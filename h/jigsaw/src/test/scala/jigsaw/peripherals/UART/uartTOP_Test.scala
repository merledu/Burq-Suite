package jigsaw.peripherals.UART

import chisel3._
import chisel3 . util._
import org.scalatest._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation


class uartTOP_Test extends FreeSpec with ChiselScalatestTester{
    "UART TOP" in {
        test(new UartTOP()).withAnnotations(Seq(VerilatorBackendAnnotation)){c =>
            c.io.ren.poke(0.B)
            c.io.we.poke(0.B)
            c.clock.step(1)

            c.io.addr.poke("b00000000".U)
            c.clock.step(1)
            c.io.wdata.poke(87.U)
            c.clock.step(1)
            c.io.we.poke(1.B)
            c.clock.step(1)
            c.io.we.poke(0.B)
            c.clock.step(1)

            c.io.addr.poke(4.U)
            c.clock.step(1)
            c.io.wdata.poke(71.U)
            c.clock.step(1)
            c.io.we.poke(1.B)
            c.clock.step(1)
            c.io.we.poke(0.B)
            c.clock.step(1)

            c.io.addr.poke(16.U)
            c.clock.step(1)
            c.io.wdata.poke(1.U)
            c.clock.step(1)
            c.io.we.poke(1.B)
            c.clock.step(1)
            c.io.we.poke(0.B)
            c.clock.step(1)

            c.io.addr.poke(16.U)
            c.clock.step(1)
            c.io.wdata.poke(0.U)
            c.clock.step(1)
            c.io.we.poke(1.B)
            c.clock.step(1)
            c.io.we.poke(0.B)

            c.clock.setTimeout(0)
            c.clock.step(8000)
            
    }}}