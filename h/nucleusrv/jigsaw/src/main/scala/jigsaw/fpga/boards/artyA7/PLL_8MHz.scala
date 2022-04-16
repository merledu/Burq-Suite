package jigsaw.fpga.boards.artyA7

import chisel3.{BlackBox, _}
import chisel3.util.HasBlackBoxResource

class PLL_8MHz extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clk_in1 = Input(Clock())
    val clk_out1 = Output(Clock())
  })

  addResource("/artyA7/PLL_8MHz.v")
  addResource("/artyA7/clk_wiz_0_clk_wiz.v")

}
