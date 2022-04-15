#!/usr/bin/python3

def peripheralSwitch():
	first_comb = """
	package caravan.bus.common
	import chisel3._
	import chisel3.experimental.ChiselEnum

	object Peripherals extends ChiselEnum {
	val DCCM = Value(0.U)
	val GPIO = Value(1.U)
	}"""

	second_comb = """
	package caravan.bus.common
	import chisel3._
	import chisel3.experimental.ChiselEnum

	object Peripherals extends ChiselEnum {
	val DCCM = Value(0.U)
	val GPIO = Value(1.U)
	val SPI  = Value(2.U)
	}"""

	third_comb = """
	package caravan.bus.common
	import chisel3._
	import chisel3.experimental.ChiselEnum

	object Peripherals extends ChiselEnum {
	val DCCM = Value(0.U)
	val GPIO = Value(1.U)
	val UART = Value(2.U)
	}"""

	fourth_comb = """
	package caravan.bus.common
	import chisel3._
	import chisel3.experimental.ChiselEnum

	object Peripherals extends ChiselEnum {
	val DCCM = Value(0.U)
	val GPIO = Value(1.U)
	val SPI  = Value(2.U)
	val UART = Value(3.U)
	}"""

	import json,os
	from xmlrpc.client import Boolean
	file = open("src/main/scala/config.json", "r")
	data = json.load(file)
	print(data)
	file.close()
	uart = bool(data["uart"])
	spi_flash = bool(data["spi_flash"])
	print(spi_flash)
	caravan_path = "caravan/src/main/scala/caravan/bus/common/PeripheralsMap.scala"
	if not uart and not spi_flash:
		print(first_comb)
		caravan1 = open(caravan_path, "w")
		caravan1.write(first_comb)
		caravan1.close()

	elif not uart and spi_flash:
		print(second_comb)
		caravan1 = open(caravan_path, "w")
		caravan1.write(second_comb)
		caravan1.close()

	elif uart and not spi_flash:
		print(third_comb)
		caravan1 = open(caravan_path, "w")
		caravan1.write(third_comb)
		caravan1.close()

	elif uart and spi_flash:
		print(fourth_comb)
		caravan1 = open(caravan_path, "w")
		caravan1.write(fourth_comb)
		caravan1.close()

peripheralSwitch()