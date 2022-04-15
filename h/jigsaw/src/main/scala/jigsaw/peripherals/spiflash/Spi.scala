package jigsaw.peripherals.spiflash

import caravan.bus.common.{AbstrRequest, AbstrResponse}
import chisel3._
import chisel3.experimental.ChiselEnum
import chisel3.stage.ChiselStage
import chisel3.util.{Cat, Decoupled, Fill, MuxCase, Enum}
import jigsaw.peripherals.spiflash._

class Spi_IO[A <: AbstrRequest, B <: AbstrResponse]
          (gen: A, gen1: B) extends Bundle{

    // bus interconnect interfaces
    val req = Flipped(Decoupled(gen))
    val rsp = Decoupled(gen1)

    // master spi interfaces
    val cs_n = Output(Bool())
    val sclk = Output(Bool())
    val mosi = Output(Bool())
    val miso = Input(Bool())
}

class Spi[A <: AbstrRequest, B <: AbstrResponse]
          (gen: A, gen1: B)(implicit val spiConfig: Config) extends Module{

    val io = IO(new Spi_IO(gen, gen1))
    val ControlReg = RegInit("b1100000".U(32.W)) // addr 0x0
    val TxDataReg    = RegInit(0.U(32.W)) // addr 0x4
    val TxDataValidReg = RegInit(0.B)
    val RxDataReg    = RegInit(0.U(32.W)) // addr 0x8
    val RxDataValidReg = RegInit(0.B)

    val maskedData = Wire(Vec(4, UInt(8.W)))
    maskedData := io.req.bits.activeByteLane.asTypeOf(Vec(4, Bool())) map (Fill(8,_))

    io.req.ready := 1.B
    io.rsp.valid := 0.B
    // io.rsp.bits.ackWrite := 1.B

    when (io.req.bits.addrRequest(3,0) === 0.U && io.req.bits.isWrite === 1.B){
        ControlReg := Mux(io.req.valid, io.req.bits.dataRequest & maskedData.asUInt, ControlReg)

        io.rsp.bits.dataResponse := RegNext(Mux(io.rsp.ready, io.req.bits.dataRequest, 0.U))
        io.rsp.valid := RegNext(io.req.valid)
        

        // List(io.req.ready, io.rsp.valid) map (_ := 1.B)
        // List(io.cs_n, io.sclk, io.mosi) map (_ := DontCare)
    }
    .elsewhen(io.req.bits.addrRequest(3,0) === 0.U && io.req.bits.isWrite === 0.B){
        io.rsp.bits.dataResponse := RegNext(Mux(io.rsp.ready, ControlReg, 0.U))
        io.rsp.valid := RegNext(Mux(io.req.valid, 1.B, 0.U))
        

        // List(io.req.ready, io.rsp.valid) map (_ := 1.B)
        // List(io.cs_n, io.sclk, io.mosi) map (_ := DontCare) 
    }
    .elsewhen(io.req.bits.addrRequest(3,0) === 4.U && io.req.bits.isWrite === 1.B){
        when(ControlReg(4,2) === 0.U){ // READ
            TxDataReg := Mux(io.req.valid, Cat("b00000011".U,(io.req.bits.dataRequest & maskedData.asUInt)(23,0)), 0.U)
            TxDataValidReg := io.req.valid
        }
        .elsewhen(ControlReg(4,2) === 1.U){ // WR_EN
            TxDataReg := Mux(io.req.valid, Cat("b00000110".U, Fill(24,0.B)), 0.U)
            TxDataValidReg := io.req.valid
        }
        .elsewhen(ControlReg(4,2) === 2.U){ // PP_ADDR
            TxDataReg := Mux(io.req.valid, Cat("b00000010".U,(io.req.bits.dataRequest & maskedData.asUInt)(23,0)), 0.U)
            TxDataValidReg := io.req.valid
        }
        .elsewhen(ControlReg(4,2) === 3.U){ // PP_DATA
            TxDataReg := Mux(io.req.valid, io.req.bits.dataRequest & maskedData.asUInt, 0.U)
            TxDataValidReg := io.req.valid
        }
        .elsewhen(ControlReg(4,2) === 4.U){ // WR_DI
            TxDataReg := Mux(io.req.valid, Cat("b00000100".U, Fill(24,0.B)), 0.U)
            TxDataValidReg := io.req.valid
        }
        

        io.rsp.bits.dataResponse := RegNext(Mux(io.rsp.ready, io.req.bits.addrRequest, 0.U))
        io.rsp.valid := RegNext(1.B)

        // List(io.req.ready, io.rsp.valid) map (_ := 1.B)
        // List(io.cs_n, io.sclk, io.mosi) map (_ := DontCare)
    }
    .elsewhen(io.req.bits.addrRequest(3,0) === 4.U && io.req.bits.isWrite === 0.B){
        io.rsp.bits.dataResponse := RegNext(Mux(io.rsp.ready, TxDataReg, 0.U))
        io.rsp.valid := RegNext(io.req.valid)

        // List(io.req.ready, io.rsp.valid) map (_ := 1.B)
        // List(io.cs_n, io.sclk, io.mosi) map (_ := DontCare)
    }
    .elsewhen(io.req.bits.addrRequest(3,0) === 8.U && io.req.bits.isWrite === 0.B){
        io.rsp.bits.dataResponse := RegNext(Mux(io.rsp.ready, RxDataReg, 0.U))
        io.rsp.valid := RxDataValidReg
        // io.rsp.valid := 1.B

        // List(io.req.ready) map (_ := 1.B)
        // List(io.cs_n, io.sclk, io.mosi) map (_ := DontCare)
    }
    .otherwise{
        // List(io.rsp.bits.error, io.rsp.valid) map (_ := 0.B)
        // List(io.rsp.valid) map (_ := 0.B)
        List(io.cs_n, io.sclk, io.mosi, io.rsp.valid) map (_ := DontCare)
        io.rsp.bits.dataResponse := RegNext(io.req.bits.addrRequest)
    }

    // ClockGen
    def counter(max: UInt) = {
        val x = RegInit(0.asUInt(max.getWidth.W))
        x := Mux(x === max, 0.U, x + 1.U)
        x
    }
    def pulse(n: UInt) = counter(n - 1.U) === 0.U
    def toggle(p: Bool) = {
        val x = RegInit(false.B)
        x := Mux(p, !x, x)
        x
    }
    def clockGen(period: UInt) = toggle(pulse(period >> 1))
    //

    // SPI Protocol Logic
    val spiProtocol = Module(new Protocol())

    spiProtocol.clock := clockGen(ControlReg(31,5)).asClock
    spiProtocol.io.data_in.bits  := TxDataReg
    spiProtocol.io.data_in.valid := TxDataValidReg
    spiProtocol.io.CPOL := ControlReg(1)
    spiProtocol.io.CPHA := ControlReg(0)
    spiProtocol.io.miso := io.miso
    spiProtocol.io.data_out.ready := 1.B
    List(io.mosi, io.sclk, io.cs_n) zip List(spiProtocol.io.mosi, spiProtocol.io.sck, spiProtocol.io.ss) map (a => a._1 := a._2)
    when(spiProtocol.io.data_out.valid){
        RxDataReg := spiProtocol.io.data_out.bits
        RxDataValidReg := 1.B
        }
    //

    // Error Logic
    val addr_hit = Wire(Vec(3, Bool()))
    val spiRegMap = Seq(0,4,8)
    val wireAddr = WireInit(io.req.bits.addrRequest(3,0))
    val addr_miss = Wire(Bool())
    
    def go(min:Int, max:Int):Unit = {
        if (min == max){
            return
        }else{
            addr_hit(min) := wireAddr === spiRegMap(min).asUInt()
            go(min+1, max)
        }
    }

    go(0,3)


    addr_miss := ~addr_hit.reduce(_ | _)//~addr_hit.contains(true.B)
    when(wireAddr === 8.U & io.req.bits.isWrite){io.rsp.bits.error := RegNext(io.req.valid)}
    .otherwise{io.rsp.bits.error := RegNext(io.req.valid & addr_miss)}
    //

}
