package jigsaw.peripherals.gpio
import chisel3._
import caravan.bus.wishbone.WishboneConfig
import chiseltest._
import chiseltest.internal.VerilatorBackendAnnotation
import chiseltest.experimental.TestOptionBuilder._
import jigsaw.Harness
import org.scalatest._
import GpioRegistersMap._

trait HelperFunctions {
  def sendRequest(c: Harness, addr: UInt, data: UInt, byteLane: UInt, isWrite: Bool): Unit = {
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

class GpioTester extends FreeSpec with ChiselScalatestTester with HelperFunctions {
  "configuring pins 0,1,2,3 to be HIGH" in {
    implicit val config = WishboneConfig(32, 32)
    test(new Harness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(5)

      // writing to the gpio enable register, enabling four pins 0,1,2,3
      sendRequest(c, 28.U, "h0000000f".U, "b1111".U, true.B)

      while (c.io.req.ready.peek().litToBoolean != true) {
        println("waiting for host adapter to get ready again")
        c.clock.step(1)
      }

      println("host ready to accept another request")

      // writing to the gpio direct_out register, turning pins 0,1,2,3 HIGH
      sendRequest(c, 16.U, "h0000000f".U, "b1111".U, true.B)

      while (c.io.req.ready.peek().litToBoolean != true) {
        println("waiting for host adapter to get ready again")
        c.clock.step(1)
      }

      // reading from the gpio direct_out register
      sendRequest(c, 16.U, 0.U, "b1111".U, false.B)
      c.clock.step(10)
    }
  }

  "creating an interrupt using the intr_test register" in {
    implicit val config = WishboneConfig(32, 32)
    test(new Harness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(5)

      // writing to the intr_test register for setting interrupt on pins 0 and 1
      sendRequest(c, 8.U, "h00000003".U, "b1111".U, true.B)

      while (c.io.req.ready.peek().litToBoolean != true) {
        println("waiting for host adapter to get ready again")
        c.clock.step(1)
      }

      println("host ready to accept another request")

      // reading the intr_state register to validate if interrupt was generated
      sendRequest(c, 0.U, 0.U, "b1111".U, false.B)

      c.clock.step(10)

    }

  }

  "generating an error by writing non-word data to gpio registers" in {
    implicit val config = WishboneConfig(32, 32)
    test(new Harness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(5)
      // writing to the gpio direct_out register, turning pins 0,1,2,3 HIGH
      sendRequest(c, 16.U, "h0000000f".U, "b1110".U, true.B)
      while (c.io.req.ready.peek().litToBoolean != true) {
        println("waiting for host adapter to get ready again")
        c.clock.step(1)
      }
      // reading the gpio direct_out register
      sendRequest(c, 16.U, "h0000000f".U, "b1110".U, true.B)
      c.clock.step(10)
    }
  }

  "generating an error by writing to address that is not present" in {
    implicit val config = WishboneConfig(32, 32)
    test(new Harness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.clock.step(5)
      // writing to an undefined address
      sendRequest(c, 56.U, "h0000000f".U, "b1111".U, true.B)
      while (c.io.req.ready.peek().litToBoolean != true) {
        println("waiting for host adapter to get ready again")
        c.clock.step(1)
      }

      c.io.rsp.bits.error.expect(true.B)

      c.clock.step(10)
    }
  }

  "setting gpio pins and reading the DATA_IN register" in {
    implicit val config = WishboneConfig(32, 32)
    test(new Harness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      c.io.gpio_i.poke("h00000FFF".U)
      c.clock.step(5)
      // reading DATA_IN register
      sendRequest(c, 12.U, 0.U, "b1111".U, false.B)
      while (c.io.req.ready.peek().litToBoolean != true) {
        println("waiting for host adapter to get ready again")
        c.clock.step(1)
      }

      c.clock.step(10)
    }
  }


}
