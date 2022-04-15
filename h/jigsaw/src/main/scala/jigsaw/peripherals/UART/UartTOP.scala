package jigsaw.peripherals.UART

import chisel3._
import chisel3.util._


class UartTOP extends Module{
    val io = IO(new Bundle{
        val ren = Input(Bool())
        val we = Input(Bool())
        val wdata = Input(UInt(32.W))
        val addr = Input(UInt(8.W))
        val rx_i = Input(Bool())

        val rdata = Output(UInt(32.W))
        val tx_o = Output(Bool())
        val intr_tx = Output(Bool())

    })

    val ADDR_CTRL = 0.U
    val ADDR_TX = 4.U
    val ADDR_RX = 8.U
    val RX_EN = 12.U
    val TX_EN = 16.U
    val RX_STATUS = 20.U
    val RX_SC = 24.U

    val control = RegInit(0.U(16.W))
    val tx = RegInit(0.U(8.W))
    val rx = RegInit(0.U(8.W))
    val rx_reg = RegInit(0.U(8.W))
    val rx_en = RegInit(0.B)
    val tx_en = RegInit(0.B)
    val rx_status = RegInit(0.B)
    val rx_clr = RegInit(1.B)
    val rx_done = RegInit(0.B)

    when(!(io.ren) && io.we){
        when(io.addr === ADDR_CTRL){
            control := io.wdata(15,0)
        }.elsewhen(io.addr === ADDR_TX){
            tx := io.wdata(7,0)
        }.elsewhen(io.addr === RX_EN){
            rx_en := io.wdata(0)
        }.elsewhen(io.addr === TX_EN){
            tx_en := io.wdata(0)
        }.elsewhen(io.addr === RX_SC){
            rx_clr := io.wdata(0)
        }.otherwise{
            //control := 0.U
            tx := 0.U
            rx_en := 0.B
            tx_en := 0.B
            rx_clr := 0.B
        }

    }

    val uart_tx = Module(new uartTX)
    uart_tx.io.tx_en := tx_en
    uart_tx.io.i_TX_Byte := tx
    uart_tx.io.CLKS_PER_BIT := control


    io.tx_o := uart_tx.io.o_TX_Serial
    io.intr_tx := uart_tx.io.o_TX_Done

    val uart_rx = Module(new uartRX)
    when(rx_en){
        uart_rx.io.i_Rx_Serial := io.rx_i
    }.otherwise{
        uart_rx.io.i_Rx_Serial := 1.B
    }
    uart_rx.io.CLKS_PER_BIT := control

    rx_done := uart_rx.io.o_Rx_DV
    rx := uart_rx.io.o_Rx_Byte


    when(rx_done){
        rx_reg := rx
        rx_status := 1.B
    }.elsewhen(!(rx_clr)){
        rx_status := 0.B
    }

    io.rdata := Mux(io.addr === 20.U , rx_status , Mux(io.addr === 8.U , rx_reg , 0.U))




}