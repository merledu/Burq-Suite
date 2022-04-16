package jigsaw.peripherals.spi

import chisel3._
import chisel3 . util._
import caravan.bus.tilelink._
import org.scalatest._
import chisel3.experimental._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation
import jigsaw.peripherals.spi._
import jigsaw.SpiHarness
import caravan.bus.wishbone.WishboneConfig
import caravan.bus.tilelink.TilelinkConfig
import jigsaw.peripherals.spiflash._

class SpiTester extends FreeSpec with ChiselScalatestTester {

//   "Spi Master Tests" in {
//     test(new SpiMaster()).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
//         c.clock.step(20)
//     }
//   }

//   "Spi Slave Tests" in {
//     test(new SpiSlave()).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
//         c.clock.step(20)
//     }
//   }

  //  "Spi Wrapper Tests" in {
  //   test(new SpiWrapper()).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
  //       c.io.dataRequest.bits.poke("b10111011101110111011101110111011".U)
  //       c.io.activeByteLane.poke("b11111111111111111111111111111111".U)
  //       c.io.dataRequest.valid.poke(1.B)
  //       c.io.dataResponse.ready.poke(1.B)
  //       c.clock.step(10)
  //       c.io.dataRequest.bits.poke("b11111110000000001111111111000000".U)
  //       // c.io.dataRequest.valid.poke(1.B)
  //       // c.io.dataResponse.ready.poke(1.B)
  //       var count = 1
  //       while(count != 2000) {
  //           val mosi = c.io.mosi.peek()
  //           c.io.miso.poke(mosi)
  //           // println("This is the real answer ************"+c.io.mosi.peek())
  //           c.clock.step(1)
  //           count += 1
  //       }
  //   }
  // }

  "Spi Flash" in {
    implicit val config = WishboneConfig(32,32)
    // implicit val config = TilelinkConfig()
    implicit val spiConfig = jigsaw.peripherals.spiflash.Config()
    test(new SpiHarness()).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      // c.io.req.bits.addrRequest.poke(0.U)
      // c.io.req.bits.dataRequest.poke(0.U)
      // c.io.req.bits.activeByteLane.poke("b1111".U)
      // c.io.req.bits.isWrite.poke(1.B)
      // c.io.req.valid.poke(1.B)
      // c.clock.step(1)
      // c.io.req.valid.poke(0.B)
      // c.clock.step(1)
      // c.io.req.bits.dataRequest.poke(659.U)
      // c.io.req.bits.activeByteLane.poke("b1111".U)
      // // c.io.req.bits.dataRequest.poke("b00000011101110111011101110111011".U)
      // c.io.req.bits.addrRequest.poke(3.U)
      // c.io.req.bits.isWrite.poke(1.B)
      // c.io.req.valid.poke(1.B)
      // c.clock.step(5)
      // c.io.req.valid.poke(0.B)


    ///////////Set Control Register////////////
      // c.io.req.bits.addrRequest.poke(0.U)
      // c.io.req.bits.dataRequest.poke("b0000".U)
      // c.io.req.bits.activeByteLane.poke("b1111".U)
      // c.io.req.bits.isWrite.poke(1.B)
      // c.io.req.valid.poke(1.B)
      // c.io.rsp.ready.poke(1.B)
      // c.clock.step(2)
      // c.io.req.valid.poke(0.B)
    ///////////Read Control Register////////////
      // c.io.req.bits.addrRequest.poke(0.U)
      // c.io.req.bits.dataRequest.poke(3.U)
      // c.io.req.bits.activeByteLane.poke("b1111".U)
      // c.io.req.bits.isWrite.poke(0.B)
      // c.io.req.valid.poke(1.B)
      // c.io.rsp.ready.poke(1.B)
      // c.clock.step(2)
      // c.io.req.valid.poke(0.B)
    ///////////Set Tx Register////////////
      c.io.req.bits.addrRequest.poke(4.U)
      c.io.req.bits.dataRequest.poke(659.U)
      c.io.req.bits.activeByteLane.poke("b1111".U)
      c.io.req.bits.isWrite.poke(1.B)
      c.io.req.valid.poke(1.B)
      c.clock.step(1)
      c.io.req.valid.poke(0.B)
      c.clock.step(2)
    ///////////Set Control Register////////////
      // c.io.req.bits.addrRequest.poke(12.U)
      // c.io.req.bits.dataRequest.poke("b0000100".U)
      // c.io.req.bits.activeByteLane.poke("b1111".U)
      // c.io.req.bits.isWrite.poke(1.B)
      // c.io.req.valid.poke(1.B)
      // c.io.rsp.ready.poke(1.B)
      // c.clock.step(3)
      // c.io.req.bits.addrRequest.poke(0.U)
      // c.io.req.valid.poke(0.B)
      // c.io.req.bits.dataRequest.poke("b0000000".U)
      // c.io.req.bits.isWrite.poke(1.B)
      // c.io.req.valid.poke(1.B)
      // c.clock.step(3)
      // c.io.req.valid.poke(0.B)
    ///////////Read Tx Register////////////
      // c.io.req.bits.addrRequest.poke(3.U)
      // c.io.req.bits.dataRequest.poke(0.U)
      // c.io.req.bits.activeByteLane.poke("b1111".U)
      // c.io.req.bits.isWrite.poke(0.B)
      // c.io.req.valid.poke(1.B)
      // c.io.rsp.ready.poke(1.B)
      // c.clock.step(2)
      // c.io.req.valid.poke(0.B)
    ///////////Read Rx Register////////////
      // c.io.req.bits.addrRequest.poke(7.U)
      // c.io.req.bits.dataRequest.poke(0.U)
      // c.io.req.bits.activeByteLane.poke("b1111".U)
      // c.io.req.bits.isWrite.poke(0.B)
      // c.io.req.valid.poke(1.B)
      // c.io.rsp.ready.poke(1.B)
      // c.clock.step(20)
      // c.io.req.valid.poke(0.B)


      var count = 1
      while(count != 900) {
        //
        // c.io.req.bits.addrRequest.poke(8.U)
        // c.io.req.bits.isWrite.poke(0.B)
        // c.io.req.valid.poke(1.B)
        // c.io.rsp.ready.poke(1.B)
        //
          val mosi = c.io.mosi.peek()
          c.io.miso.poke(mosi)
          c.clock.step(1)
          count += 1
      }


    }
  }
}