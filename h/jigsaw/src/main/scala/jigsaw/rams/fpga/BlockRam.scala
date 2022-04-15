package jigsaw.rams.fpga
import caravan.bus.common.{AbstrRequest, AbstrResponse, BusConfig}
import caravan.bus.native.{NativeConfig, NativeRequest, NativeResponse}
import caravan.bus.wishbone.{WBRequest, WBResponse, WishboneConfig}
import caravan.bus.tilelink.{TLRequest, TLResponse, TilelinkConfig}
import chisel3._
import chisel3.util.experimental.loadMemoryFromFile
import chisel3.util.{Cat, Decoupled}

object BlockRam {

  def createNonMaskableRAM[T <: BusConfig]
                          (programFile: Option[String],
                           bus: T,
                           rows: Int) = {
    bus match {
      case bus: WishboneConfig => {
        implicit val config = bus.asInstanceOf[WishboneConfig]
        new BlockRamWithoutMasking(new WBRequest(), new WBResponse(), programFile, rows)
      }

      case bus: NativeConfig => {
        implicit val config = bus.asInstanceOf[NativeConfig]
        new BlockRamWithoutMasking(new NativeRequest(), new NativeResponse(), programFile, rows)
      }

      case bus: TilelinkConfig => {
        implicit val config = bus.asInstanceOf[TilelinkConfig]
        new BlockRamWithoutMasking(new TLRequest(), new TLResponse(), programFile, rows)
      }

    }
  }

  def createMaskableRAM[T <: BusConfig]
                       (bus: T,
                        rows: Int) = {
    bus match {
      case bus: WishboneConfig => {
        implicit val config = bus.asInstanceOf[WishboneConfig]
        new BlockRamWithMasking(new WBRequest(), new WBResponse(), rows)
      }

      case bus: NativeConfig => {
        implicit val config = bus.asInstanceOf[NativeConfig]
        new BlockRamWithMasking(new NativeRequest(), new NativeResponse(), rows)
      }

      case bus:TilelinkConfig => {
        implicit val config = bus.asInstanceOf[TilelinkConfig]
        new BlockRamWithMasking(new TLRequest(), new TLResponse(), rows)
      }

    }
  }

}

class BlockRamWithoutMasking[A <: AbstrRequest, B <: AbstrResponse]
                            (gen: A, gen1: B, programFile: Option[String], rows: Int) extends Module {

  val io = IO(new Bundle {
    val req = Flipped(Decoupled(gen))
    val rsp = Decoupled(gen1)
  })

  val addrMisaligned = Wire(Bool())
  val addrOutOfBounds = Wire(Bool())

  // the register that sends valid along with the data read from memory
  // a register is used so that it synchronizes along with the data that comes after one cycle
  val validReg = RegInit(false.B)
  val errReg = RegInit(false.B)
  io.rsp.valid := validReg
  io.rsp.bits.error := errReg
  io.req.ready := true.B // assuming we are always ready to accept requests from device

  addrMisaligned := Mux(io.req.fire(), io.req.bits.addrRequest(1,0).orR(), false.B)
  addrOutOfBounds := Mux(io.req.fire(), (io.req.bits.addrRequest/4.U) >= (rows-1).asUInt(), false.B)

  errReg := addrMisaligned || addrOutOfBounds
  val mem = SyncReadMem(rows, UInt(32.W))

  if(programFile.isDefined) {
    loadMemoryFromFile(mem, programFile.get)
  }

  when(io.req.fire() && !io.req.bits.isWrite) {
    // READ
    io.rsp.bits.dataResponse := mem.read(io.req.bits.addrRequest/4.U)
    validReg := true.B
  } .elsewhen(io.req.fire() && io.req.bits.isWrite) {
    // WRITE
    mem.write(io.req.bits.addrRequest/4.U, io.req.bits.dataRequest)
    validReg := true.B
    io.rsp.bits.dataResponse := DontCare
  } .otherwise {
    validReg := false.B
    io.rsp.bits.dataResponse := DontCare
  }
}

class BlockRamWithMasking[A <: AbstrRequest, B <: AbstrResponse]
                         (gen: A, gen1: B, rows: Int) extends Module {


  val io = IO(new Bundle {
    val req = Flipped(Decoupled(gen))
    val rsp = Decoupled(gen1)
  })

  // holds the data in byte vectors to be written in memory
  val wdata = Wire(Vec(4, UInt(8.W)))
  // holds the data in byte vectors read from memory
  val rdata = Wire(Vec(4, UInt(8.W)))
  // holds the mask signals to be used for byte masking in memory
  val mask = Wire(Vec(4, Bool()))
  // holds the bytes that must be read according to the activeByteLane
  val data = Wire(Vec(4, UInt(8.W)))

  wdata(0) := io.req.bits.dataRequest(7,0)
  wdata(1) := io.req.bits.dataRequest(15,8)
  wdata(2) := io.req.bits.dataRequest(23,16)
  wdata(3) := io.req.bits.dataRequest(31,24)


  // connecting the mask bits with activeByteLane bits
  val byteLane = io.req.bits.activeByteLane.asBools()
  mask zip byteLane map {case(m, b) =>
    m := b
  }


  // the register that sends valid along with the data read from memory
  // a register is used so that it synchronizes along with the data that comes after one cycle
  val validReg = RegInit(false.B)
  io.rsp.valid := validReg
  io.rsp.bits.error := false.B   // assuming memory controller would never return an error
  io.req.ready := true.B // assuming we are always ready to accept requests from device

  val mem = SyncReadMem(rows, Vec(4, UInt((32/4).W)))

  when(io.req.fire() && !io.req.bits.isWrite) {
    // READ
    rdata := mem.read(io.req.bits.addrRequest/4.U)
    validReg := true.B
  } .elsewhen(io.req.fire() && io.req.bits.isWrite) {
    // WRITE
    mem.write(io.req.bits.addrRequest/4.U, wdata, mask)
    validReg := true.B
    rdata map (_ := DontCare)
  } .otherwise {
    validReg := false.B
    rdata map (_ := DontCare)
  }

  /** return only those bytes which are enabled by mask
   * else return 0s*/
  data := mask zip rdata map {case (b: Bool, i: UInt) =>
    Mux(b === true.B, i, 0.U)
  }

  io.rsp.bits.dataResponse := Cat(data(3), data(2) ,data(1), data(0))


}