package jigsaw.rams.fpga
import caravan.bus.tilelink.TilelinkConfig
import org.scalatest._
import chiseltest._
import chisel3._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation


class TilelinkBlockRamTester extends FreeSpec with ChiselScalatestTester with MemoryDumpFileHelper {

  "write and read to single location in non-maskable bram" in {
    val programFile = getFile
    test(BlockRam.createNonMaskableRAM(programFile, TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(5)
      sendRequest(0.U, 10.U, "b1111".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending a read request")

      sendRequest(0.U, 10.U, "b1111".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect(10.U)
      println("EXPECTED DATA IS: 10 GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      c.clock.step(4)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }

  "write and read to multiple locations in non-maskable bram" in {
    val programFile = getFile
    test(BlockRam.createNonMaskableRAM(programFile, TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(5)
      sendRequest(0.U, 10.U, "b1111".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending a new write request")

      sendRequest(4.U, 20.U, "b1111".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending a read request")

      sendRequest(0.U, 10.U, "b1111".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect(10.U)
      println("EXPECTED DATA IS: 10 GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      println("Got the response now sending a read request")

      sendRequest(4.U, 0.U, "b1111".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect(20.U)
      println("EXPECTED DATA IS: 20 GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      c.clock.step(4)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }

  "initialize mem with programFile and read" in {
    val programFile = getFile
    test(BlockRam.createNonMaskableRAM(programFile, TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(5)
      sendRequest(0.U, 0.U, "b1111".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("h00100113".U)
      println("EXPECTED DATA IS: " + "h00100113".U.litValue().toInt + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)

      c.clock.step(1)

      sendRequest(4.U, 0.U, "b1111".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("h00200193".U)
      println("EXPECTED DATA IS: " + "h00200193".U.litValue().toInt + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)

      sendRequest(8.U, 0.U, "b1111".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("h00C000EF".U)
      println("EXPECTED DATA IS: " + "h00C000EF".U.litValue().toInt + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)

      c.clock.step(1)

      sendRequest(12.U, 0.U, "b1111".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("h00100793".U)
      println("EXPECTED DATA IS: " + "h00100793".U.litValue().toInt + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)

      c.clock.step(3)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }

  "write and read full word in maskable bram" in {
    val programFile = getFile
    test(BlockRam.createMaskableRAM(TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(5)
      sendRequest(0.U, "habcdef01".U, "b1111".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending a read request")

      sendRequest(0.U, 0.U, "b1111".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("habcdef01".U)
      println("EXPECTED DATA IS: " + "habcdef01".U.litValue().toInt.toString + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      c.clock.step(4)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }

  "write full word, read ls half word in maskable bram" in {
    val programFile = getFile
    test(BlockRam.createMaskableRAM(TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(2)
      sendRequest(0.U, "habcdef01".U, "b1111".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending a read request")

      c.clock.step(2)
      sendRequest(0.U, 0.U, "b0011".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)


      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("h0000ef01".U)

      println("EXPECTED DATA IS: " + "h0000ef01".U.litValue().toInt.toString + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      c.clock.step(8)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }

  "write full word, read ms half word in maskable bram" in {
    val programFile = getFile
    test(BlockRam.createMaskableRAM(TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(2)
      sendRequest(0.U, "habcdef01".U, "b1111".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending a read request")

      c.clock.step(2)
      sendRequest(0.U, 0.U, "b1100".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)


      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("habcd0000".U)

      println("EXPECTED DATA IS: " + "habcd0000".U.litValue().toInt.toString + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      c.clock.step(8)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }

  "write full word, read lsb in maskable bram" in {
    val programFile = getFile
    test(BlockRam.createMaskableRAM(TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(2)
      sendRequest(0.U, "habcdef01".U, "b1111".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending a read request")

      c.clock.step(2)
      sendRequest(0.U, 0.U, "b0001".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)


      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("h00000001".U)

      println("EXPECTED DATA IS: " + "h00000001".U.litValue().toInt.toString + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      c.clock.step(8)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }

  "write full word, read msb in maskable bram" in {
    val programFile = getFile
    test(BlockRam.createMaskableRAM(TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(2)
      sendRequest(0.U, "habcdef01".U, "b1111".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending a read request")

      c.clock.step(2)
      sendRequest(0.U, 0.U, "b1000".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)


      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("hab000000".U)

      println("EXPECTED DATA IS: " + "hab000000".U.litValue().toInt.toString + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      c.clock.step(8)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }

  "write ls half word, read ls half word in maskable bram" in {
    val programFile = getFile
    test(BlockRam.createMaskableRAM(TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(2)
      sendRequest(0.U, "habcdef01".U, "b0011".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending a read request")

      c.clock.step(2)
      sendRequest(0.U, 0.U, "b0011".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)


      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("h0000ef01".U)

      println("EXPECTED DATA IS: " + "h0000ef01".U.litValue().toInt.toString + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      c.clock.step(8)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }

  "write two half word, read full word in maskable bram" in {
    val programFile = getFile
    test(BlockRam.createMaskableRAM(TilelinkConfig(), 1024)).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(2)
      sendRequest(0.U, "h0000ef01".U, "b0011".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending new write request")

      sendRequest(0.U, "habcd0000".U, "b1100".U, true.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now sending read request")

      sendRequest(0.U, 0.U, "b1111".U, false.B)
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      while(c.io.rsp.valid.peek().litToBoolean != true) {
        println("wait")
        c.clock.step(1)
      }
      println("VALID RESPONSE = " + c.io.rsp.valid.peek().litToBoolean.toString)
      println("Got the response now reading expected data")
      c.io.rsp.bits.dataResponse.expect("habcdef01".U)

      println("EXPECTED DATA IS: " + "habcdef01".U.litValue().toInt.toString + " GOT " + c.io.rsp.bits.dataResponse.peek().litValue().toInt.toString)
      c.clock.step(8)

      def sendRequest(addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
        c.clock.step(1)
        c.io.req.valid.poke(true.B)
        c.io.req.bits.addrRequest.poke(addr)
        c.io.req.bits.dataRequest.poke(data)
        c.io.req.bits.activeByteLane.poke(byteLane)
        c.io.req.bits.isWrite.poke(isWrite)
        c.clock.step(1)
        c.io.req.valid.poke(false.B)
      }
    }
  }
}
