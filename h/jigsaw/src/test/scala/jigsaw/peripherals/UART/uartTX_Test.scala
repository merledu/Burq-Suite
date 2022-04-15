package jigsaw.peripherals.UART

import chisel3._
import chisel3 . util._
import org.scalatest._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.experimental.TestOptionBuilder._
import chiseltest.internal.VerilatorBackendAnnotation


class uartTX_Test extends FreeSpec with ChiselScalatestTester{
    "uart tx" in {
        test(new uartTX()).withAnnotations(Seq(VerilatorBackendAnnotation)){c =>

            c.io.tx_en.poke(1.B)
            c.io.i_TX_Byte.poke(105.U)
            c.io.CLKS_PER_BIT.poke(87.U)
            c.clock.step(1)
            c.io.tx_en.poke(0.B)
            c.clock.setTimeout(0)
            c.clock.step(8000)
            //c.io.tx_en.poke(0.B)
            //c.clock.step(300)
            
    }
    }
	
}
