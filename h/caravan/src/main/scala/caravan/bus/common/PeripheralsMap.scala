
	package caravan.bus.common
	import chisel3._
	import chisel3.experimental.ChiselEnum

	object Peripherals extends ChiselEnum {
	val DCCM = Value(0.U)
	val GPIO = Value(1.U)
	}