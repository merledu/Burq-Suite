package jigsaw.peripherals.spiflash

import chisel3._
import chisel3.util._
import chisel3.experimental.ChiselEnum


class Protocol_IO(DW:Int) extends Bundle{
    val miso = Input(Bool())
    val mosi = Output(Bool())
    val ss = Output(Bool())
    val sck = Output(Bool())
    val data_in = Flipped(Decoupled(UInt(DW.W)))
    val data_out = Decoupled(UInt(DW.W))
    val CPOL = Input(Bool())
    val CPHA = Input(Bool())
    // val config = Input(UInt(DW.W))
    // val resetProtocol = Input(Bool())
}

class Protocol(implicit val spiConfig: Config) extends Module{
    val io = IO(new Protocol_IO(spiConfig.DW))
    
    val CPOL = WireInit(io.CPOL)
    val CPHA = WireInit(io.CPHA)

    val idle :: busy :: Nil = Enum(2)
    val state = RegInit(idle)

    val miso_dataReg = RegInit(0.U(spiConfig.DW.W))
    val count = RegInit(0.U(7.W))
    val dataReg = RegInit(0.U((spiConfig.DW*2).W))

    val clk = WireInit(clock.asUInt()(0))
    io.sck := Mux(state === busy, Mux(CPOL,~clk,clk), 0.B)
    // io.sck := Mux(CPOL,~clk,clk) // Mode 1 and 4
    // io.sck := 0.B

    io.data_in.ready := 0.B
    io.data_out.valid := 0.B
    io.data_out.bits := 0.U
    io.ss := 1.B
    io.mosi := 0.B

    // Transmission
    switch(state){
        is(idle){
            io.data_in.ready := 1.B
            when (io.data_in.valid/* & io.data_in.ready*/){
                dataReg := Cat(io.data_in.bits, Fill(32,0.B)) // it should be this
                state := busy
                // io.data_in.ready := 1.B
                // io.ss := 0.B
                // dataReg := Cat("b00000011".U,Fill(24,0.B),io.data_in.bits) // Fill should be at the end
                // dataReg := Cat(io.data_in.bits,Fill(32,0.B))
                
            }
        }
        is(busy){
            when (count === (spiConfig.DW*2).U){
                io.data_in.ready := 1.B
                io.ss := 1.B
                state := idle
                count := 0.U
            }.otherwise{
                io.ss := 0.B
                io.mosi := dataReg((spiConfig.DW*2)-1)
                dataReg := dataReg << 1
                count := count + 1.U
            }
        }
    }

    // Receiving
    val count1 = RegInit(0.U(7.W))
    switch(state){
        is(busy){
            io.ss := 0.B
            when (count1 === (spiConfig.DW*2).U /*& io.data_out.ready*/){
                io.data_out.bits := miso_dataReg
                io.data_out.valid := 1.B
                count1 := 0.U
            }.otherwise{
                miso_dataReg := miso_dataReg << 1 | io.miso
                count1 := count1 + 1.U
            }
        }
    }
}


