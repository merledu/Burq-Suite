package jigsaw.peripherals.UART

import chisel3._
import chisel3.util._

class uartRX extends Module{
    val io = IO(new Bundle{
        val i_Rx_Serial = Input(Bool())
        val CLKS_PER_BIT = Input(UInt(16.W))

        val o_Rx_DV = Output(Bool())          //valid check
        val o_Rx_Byte = Output(UInt(8.W))     //data
    })

    val idle :: start :: data :: stop :: cleanup :: Nil = Enum(5)


    val rxReg = RegNext(RegNext(io.i_Rx_Serial, 1.U), 1.U)
    val shiftReg = RegInit(0.U(8.W))
    
    val r_SM_Main = RegInit(idle)
    val r_Clock_Count = RegInit(0.U(16.W))
    val r_Bit_Index = RegInit(0.U(3.W))
    val r_Rx_DV = RegInit(0.B)

    switch(r_SM_Main){
        is(idle){
            r_Rx_DV := 0.B
            r_Clock_Count := 0.U
            r_Bit_Index := 0.U
            //r_Rx_Byte := 0.U

            when(io.i_Rx_Serial === 0.B){
                r_SM_Main := start
            }.otherwise{
                r_SM_Main := idle
            }
        }

        is(start){
            when(r_Clock_Count === (io.CLKS_PER_BIT-1.U)/2.U){
                when(io.i_Rx_Serial === 0.B){
                    r_Clock_Count := 0.U
                    r_SM_Main := data
                }.otherwise{
                    r_SM_Main := idle
                }
            }.otherwise{
                r_Clock_Count := r_Clock_Count + 1.U
                r_SM_Main := start
            }
        }

        is(data){
            when(r_Clock_Count < io.CLKS_PER_BIT - 1.U){
                r_Clock_Count := r_Clock_Count + 1.U
                r_SM_Main := data
            }.otherwise{
                r_Clock_Count := 0.U
                shiftReg := Cat(rxReg, shiftReg >> 1)

                when(r_Bit_Index < 7.U){
                    r_Bit_Index := r_Bit_Index + 1.U
                    r_SM_Main := data
                }.otherwise{
                    r_Bit_Index := 0.U
                    r_SM_Main := stop
                }
            }

        }

        is(stop){
            when(r_Clock_Count < io.CLKS_PER_BIT - 1.U){
                r_Clock_Count := r_Clock_Count + 1.U
                r_SM_Main := stop
            }.otherwise{
                r_Rx_DV := 1.B
                r_Clock_Count := 0.U
                r_SM_Main := cleanup
            }
        }

        is(cleanup){
            r_SM_Main := idle
            r_Rx_DV := 0.B
        }
    }

    io.o_Rx_DV := r_Rx_DV
    io.o_Rx_Byte := shiftReg
}

