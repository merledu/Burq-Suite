package jigsaw.peripherals.UART

import chisel3._
import chisel3.util._


class uartTX extends Module{
    val io = IO(new Bundle{
        val tx_en = Input(Bool())						//transmitter enable
        val i_TX_Byte = Input(UInt(8.W))					//data byte to be transferred
        val CLKS_PER_BIT = Input(UInt(16.W))					//baud rate (clocks)

        val o_TX_Serial = Output(Bool())					//serially out data
        val o_TX_Done = Output(Bool())						//indicate that data is transffered


    })


    

    val idle :: start :: data :: stop :: cleanup :: Nil = Enum(5)		//create 5 states
    val r_SM_Main = RegInit(idle)						//main state as idle
    val r_Clock_Count = RegInit(0.U(16.W))					// create a counter register
    val r_Bit_Index = RegInit(0.U(3.W))						//index that indicate (which bit)
    val r_TX_Data = RegInit(0.U(8.W))
    val r_TX_Done = RegInit(0.B)


    

    io.o_TX_Serial := 1.B							//by default 0
    switch(r_SM_Main){								//switch case 
        is(idle){								//if main state is idle 
            io.o_TX_Serial := 1.B						//in idle state tx serial is 1.
            r_TX_Done := 0.B	
            r_Clock_Count := 0.U
            r_Bit_Index := 0.U

            when(io.tx_en === 1.B){						//if transmitter is enable
                r_TX_Data := io.i_TX_Byte
                r_SM_Main := start						//move main state to start 
            }.otherwise{
                r_SM_Main := idle						//if transmitter is not enable then remain on idle
            }
        }

        is(start){								//if main state is start
            io.o_TX_Serial := 0.B						//in start state tx serial changes from 1 to 0 for indaicate data is start transferring

            when(r_Clock_Count < io.CLKS_PER_BIT-1.U){				//remain at start state if frequecy is not acc to set frequency
                r_Clock_Count := r_Clock_Count + 1.U				//increment
                r_SM_Main := start
            }.otherwise{							//if frequency is set then move to data state and set counter to 0
                r_Clock_Count := 0.U
                r_SM_Main := data
            }
        }

        is(data){								//if main state is data
            io.o_TX_Serial := r_TX_Data(r_Bit_Index)				//start getting the data from 0 index and wire to tx serial

            when(r_Clock_Count < io.CLKS_PER_BIT - 1.U){			//again check the frequency (baud rate)
                r_Clock_Count := r_Clock_Count + 1.U
                r_SM_Main := data
            }.otherwise{							//otherwise reset the counter 					
                r_Clock_Count := 0.U
                when(r_Bit_Index < 7.U){					//if index is less than 7 (8 bit data)
                    r_Bit_Index := r_Bit_Index + 1.U				//increment the index
                    r_SM_Main := data						//remain at data state to get the next index data bit
                }.otherwise{							
                    r_Bit_Index := 0.U						//reset the bit index
                    r_SM_Main := stop						// move to stop state
                }
            }
        }



        is(stop){								//stop state
            io.o_TX_Serial := 1.B						//in stop state tx serial changes to 1 for indaicate data is transffered
            
            when(r_Clock_Count < io.CLKS_PER_BIT - 1.U){			//again check frequency(baud rate)
                r_Clock_Count := r_Clock_Count + 1.U
                r_SM_Main := stop
            }.otherwise{						
                r_TX_Done := 1.B						//tx done wired to high to indicate data is transferred
                r_Clock_Count := 0.U						//set counter to 0 
                r_SM_Main := cleanup						//move to cleanup state
            }

        }

        is(cleanup){								//at cleanup back to idle
            io.o_TX_Serial := 1.B
            r_TX_Done := 1.B
            r_SM_Main := idle
        }
    }

    

    io.o_TX_Done := r_TX_Done							//indicate done transmit data by high signal
}
