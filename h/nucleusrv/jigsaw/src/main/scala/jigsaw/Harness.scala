package jigsaw
import caravan.bus.wishbone.{WBRequest, WBResponse, WishboneConfig, WishboneDevice, WishboneHost}
import chisel3._
import chisel3.stage.ChiselStage
import chisel3.util.Decoupled
import jigsaw.peripherals.gpio.Gpio

class Harness(implicit val config: WishboneConfig) extends Module {
  val io = IO(new Bundle {
    val req = Flipped(Decoupled(new WBRequest()))
    val rsp = Decoupled(new WBResponse())
    val gpio_i = Input(UInt(32.W))
    val gpio_o = Output(UInt(32.W))
    val gpio_en_o = Output(UInt(32.W))
    val gpio_intr_o = Output(UInt(32.W))
  })
  val hostAdapter = Module(new WishboneHost())
  val deviceAdapter = Module(new WishboneDevice())
  val gpio = Module(new Gpio(new WBRequest(), new WBResponse()))

  hostAdapter.io.reqIn <> io.req
  io.rsp <> hostAdapter.io.rspOut
  hostAdapter.io.wbMasterTransmitter <> deviceAdapter.io.wbMasterReceiver
  hostAdapter.io.wbSlaveReceiver <> deviceAdapter.io.wbSlaveTransmitter

  gpio.io.req <> deviceAdapter.io.reqOut
  gpio.io.rsp <> deviceAdapter.io.rspIn

  gpio.io.cio_gpio_i := io.gpio_i
  io.gpio_o := gpio.io.cio_gpio_o
  io.gpio_en_o := gpio.io.cio_gpio_en_o
  io.gpio_intr_o := gpio.io.intr_gpio_o
}

object HarnessDriver extends App {
  implicit val config = WishboneConfig(32,32)
  println(ChiselStage.emitVerilog(new Harness()))
}
