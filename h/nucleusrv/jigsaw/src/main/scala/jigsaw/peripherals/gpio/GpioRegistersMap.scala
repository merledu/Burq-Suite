package jigsaw.peripherals.gpio
import chisel3._
import chisel3.experimental.ChiselEnum

object GpioRegistersMap extends ChiselEnum {
  val GPIO_INTR_STATE_OFFSET = Value(0.U)
  val GPIO_INTR_ENABLE_OFFSET = Value(4.U)
  val GPIO_INTR_TEST_OFFSET = Value(8.U)
  val GPIO_DATA_IN_OFFSET = Value(12.U)
  val GPIO_DIRECT_OUT_OFFSET = Value(16.U)
  val GPIO_MASKED_OUT_LOWER_OFFSET = Value(20.U)
  val GPIO_MASKED_OUT_UPPER_OFFSET = Value(24.U)
  val GPIO_DIRECT_OE_OFFSET = Value(28.U)
  val GPIO_MASKED_OE_LOWER_OFFSET = Value(32.U)
  val GPIO_MASKED_OE_UPPER_OFFSET = Value(36.U)
  val GPIO_INTR_CTRL_EN_RISING_OFFSET = Value(40.U)
  val GPIO_INTR_CTRL_EN_FALLING_OFFSET = Value(44.U)
  val GPIO_INTR_CTRL_EN_LVLHIGH_OFFSET = Value(48.U)
  val GPIO_INTR_CTRL_EN_LVLLOW_OFFSET = Value(52.U)
}
