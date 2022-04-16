package jigsaw.fpga.boards.artyA7

import chisel3._
import chisel3.experimental.Analog

class IOBufBundle extends Bundle {
  val O = Output(Bool())
  val IO = Analog(1.W)
  val I = Input(Bool())
  val T = Input(Bool())

  def connect(input: Bool, output: Bool, inout: Analog, enable: Bool): Unit = {
    I := output
    IO <> inout
    T := ~enable
    input := O
  }
}

object TriStateBuffer {
  def apply(quantity:Int): Seq[IOBUF] = for (i <- 0 until quantity) yield Module(new IOBUF)
}

//class IOBUF extends BlackBox {
//  val io = IO(new Bundle {
//    val O = Output(Bool())
//    val IO = Analog(1.W)
//    val I = Input(Bool())
//    val T = Input(Bool())
//  })
//}

class IOBUF extends BlackBox {
  val io = IO(new IOBufBundle)
}