
module uart_core (
    input  clk_i,
    input  rst_ni,
    
    input  ren,
    input  we,
    input  [31:0] wdata,
    output [31:0] rdata,
    input  [7:0]  addr,    
    output tx_o,
    input  rx_i,
    
    output intr_tx
);
    
    localparam ADDR_CTRL = 0;
    localparam ADDR_TX   = 4;
    localparam ADDR_RX   = 8;
    localparam RX_EN     = 12;
    localparam TX_EN     = 16;
    localparam RX_STATUS = 20;
    localparam RX_SC     = 24;
    
    reg [15:0] control;
    reg [7:0]  tx;
    wire [7:0] rx;
    reg  [7:0] rx_reg;
    reg        rx_en;
    reg        tx_en;
    reg        rx_status;
    reg        rx_clr;
    wire       rx_done; 
  
  localparam IDLE         = 3'b000;     //waits for tx_en signal to be high else no operation is performed
  localparam TX_START_BIT = 3'b001;     //start bit is sent in this state
  localparam TX_DATA_BITS = 3'b010;     //data bits are transfered in this state
  localparam TX_STOP_BIT  = 3'b011;     //stop bit is sent in this state, which shows that the data is transfered
  localparam CLEANUP      = 3'b100;     //tx_done signal set to high and moves back to idle state
  
  reg [2:0] r_SM_Main     ;     //contains all the states
  reg [15:0] r_Clock_Count ;    //counts the number of clocks
  reg [2:0] r_Bit_Index   ;     //tells the index of data
  reg [7:0] r_TX_Data     ;     //data is transfered from i_TX_byte to r_TX_data buffer
  reg       r_TX_Done     ;     //this signal is high when the transfer is done 
 

   wire       i_Rx_Serial;                 //serial input
   wire [15:0] CLKS_PER_BIT;               
   wire        o_Rx_DV;                    //high when the data is recieved
   wire  [7:0] o_Rx_Byte ;                  //Outputs Data recieved



////////////////
    wire [7:0] i_TX_Byte; //contains the data to be transfered
    reg  o_TX_Serial; //outputs the data serially
    wire     o_TX_Done ; //this signal is high when the transfer is done


  parameter s_IDLE         = 3'b000;              //First state i.e. IDLE
  parameter s_RX_START_BIT = 3'b001;              //Second state i.e. START_BIT
  parameter s_RX_DATA_BITS = 3'b010;              //Third state i.e. DATA_BITS
  parameter s_RX_STOP_BIT  = 3'b011;              //Fourth state i.e. STOP_BIT
  parameter s_CLEANUP      = 3'b100;              //Fifth state i.e. CLEANUP
   
  reg           r_Rx_Data_R ;                 
  reg           r_Rx_Data   ;
   
 
  reg [7:0]     r_Rx_Byte   ;
  reg           r_Rx_DV     ;

////////////////////////////////////
 
 assign i_TX_Byte = tx;             //
 assign tx_o =  o_TX_Serial ;        ///
 assign intr_tx = o_TX_Done ;        ///

    

 
  
//  reg       r_TX_Active   ;
    
  always @(posedge clk_i)
  begin
    if(~rst_ni) begin     //if reset = 0 then all the signals will be reset
        r_SM_Main     <= 3'b0;
        r_Clock_Count <= 16'b0;
        r_Bit_Index   <= 3'b0;
        r_TX_Data     <= 8'b0;
        r_TX_Done     <= 1'b0;
       // r_TX_Active   = 0;
    end else begin        //if reset = 1 then other operations will be performed
    case (r_SM_Main)      
      IDLE :
        begin
          o_TX_Serial   <= 1'b1;         // Drive Line High for Idle
          r_TX_Done     <= 1'b0;          
          r_Clock_Count <= 16'b0;
          r_Bit_Index   <= 3'b0;
          
          if (tx_en == 1'b1)        //if transfer is enabled 
          begin
           // r_TX_Active <= 1'b1;
            r_TX_Data   <= i_TX_Byte;     //data is transfered to register
            r_SM_Main   <= TX_START_BIT;  //after tx_en is high state will move to START_BIT state
          end
          else          //if tx_en = 0
            r_SM_Main <= IDLE;  //it will jump to IDLE state 
        end // case: IDLE
      
      
      // Send out Start Bit. Start bit = 0
      TX_START_BIT :
        begin
          o_TX_Serial <= 1'b0;      //sends start bit which is equal to 0 , to start the transfer of data
          
          // Wait CLKS_PER_BIT-1 clock cycles for start bit to finish
          if (r_Clock_Count < CLKS_PER_BIT-1)   
          begin
            r_Clock_Count <= r_Clock_Count + 16'b1; //increment in clock count till the condition breaks
            r_SM_Main     <= TX_START_BIT;    //jumps backs to state START_BIT until start bit is finished
          end
          else
          begin
            r_Clock_Count <= 16'b0;   //resets the counter
            r_SM_Main     <= TX_DATA_BITS;    //jumps to DATA_BITS state,where the data is transfered
          end
        end // case: TX_START_BIT
      
      
      // Wait CLKS_PER_BIT-1 clock cycles for data bits to finish         
      TX_DATA_BITS :
        begin
          o_TX_Serial <= r_TX_Data[r_Bit_Index];  //sends the data to output one by one
          
          if (r_Clock_Count < CLKS_PER_BIT-16'b1)
          begin
            r_Clock_Count <= r_Clock_Count + 16'b1; //increment in clock count till the condition breaks
            r_SM_Main     <= TX_DATA_BITS;  //jumps backs to state START_BIT until 1 bit is sent completely
          end
          else    //when 1 bit is sent
          begin
            r_Clock_Count <= 3'b0;  //resets the counter
            
            // Check if we have sent out all bits
            if (r_Bit_Index < 7)  //total index of the register containing data
            begin
              r_Bit_Index <= r_Bit_Index + 3'b1;    //increment in index, so next bit can be transfered
              r_SM_Main   <= TX_DATA_BITS;    //move back to state DATA_BITS to transfer next bit
            end
            else    //when all the bits are transfered
            begin
              r_Bit_Index <= 3'b0;    //reset the index
              r_SM_Main   <= TX_STOP_BIT;   //as all the bits are transfered
            end
          end 
        end // case: TX_DATA_BITS
      
      
      // Send out Stop bit.  Stop bit = 1
      TX_STOP_BIT :
        begin
          o_TX_Serial <= 1'b1;      //sents the stop bit,which show that the data is transfered
          
          // Wait CLKS_PER_BIT-1 clock cycles for Stop bit to finish
          if (r_Clock_Count < CLKS_PER_BIT- 16'b1)
          begin
            r_Clock_Count <= r_Clock_Count + 16'b1;
            r_SM_Main     <= TX_STOP_BIT;
          end
          else
          begin
            r_TX_Done     <= 1'b1;  //this signal is high when the transfer is done
            r_Clock_Count <= 16'b0; //reset the clock count
            r_SM_Main     <= CLEANUP; //move to CLEANUP state
           // r_TX_Active   <= 1'b0;
          end 
        end // case: TX_STOP_BIT
      
      
      // Stay here 1 clock
      CLEANUP :
      begin
          r_TX_Done <= 1'b1;  
          r_SM_Main <= IDLE;    //sent to idle state, to clear the registers
        end
      
      
      default :
        r_SM_Main <= IDLE;  //is none of the case is select,default case is IDLE
      
    endcase
    end 
  end
  
  //assign o_TX_Active = r_TX_Active;
  assign o_TX_Done   = r_TX_Done;     //r_TX_DONE signal is transfered to the output pin.
  
//////////////////



  

  assign i_Rx_Serial = rx_en? rx_i: 1'b1 ;  //
  assign rx_done =  o_Rx_DV;//
  assign CLKS_PER_BIT = control;//
  assign rx =   o_Rx_Byte;//






   
  // Purpose: Double-register the incoming data.
  // This allows it to be used in the UART RX Clock Domain.
  // (It removes problems caused by metastability)
  always @(posedge clk_i)
    begin
    if (~rst_ni) begin                            //when reset = 0, it reset the registers as reset is active low 
      r_Rx_Data_R <= 1'b1;                        
      r_Rx_Data   <= 1'b1;
    end else begin                                //if reset = 1
      r_Rx_Data_R <= i_Rx_Serial;                 //1st bit is trasnferd in buffer
      r_Rx_Data   <= r_Rx_Data_R;                 
    end
  end
   
   
  // Purpose: Control RX state machine
  always @(posedge clk_i or negedge rst_ni)
    begin
      if (~rst_ni) begin                          //if reset = 0 
        r_SM_Main <= s_IDLE;                      //Starts jumps to IDLE
        r_Rx_DV       <= 1'b0;                    //Done signal resets
        r_Clock_Count <= 16'b0;                   //Clock count resets
        r_Bit_Index   <= 3'b0;                    //resets index
	      r_Rx_Byte     <= 8'b0;            
      end else begin                              //when reset = 1
      case (r_SM_Main)                            
        s_IDLE :
          begin
            r_Rx_DV       <= 1'b0;                
            r_Clock_Count <= 16'b0;
            r_Bit_Index   <= 3'b0;
            r_Rx_Byte     <= 8'b0; 
            if (r_Rx_Data == 1'b0)                 // Start bit detected
              r_SM_Main <= s_RX_START_BIT;         //state change to START_BIT
            else
              r_SM_Main <= s_IDLE;                //if start bit is detected, state jumps back to IDLE
          end
         
        // Check middle of start bit to make sure it's still low
        s_RX_START_BIT :
          begin
            if (r_Clock_Count == ((CLKS_PER_BIT-1)>>1))   //shifts 1 bit towards right i.e. divide by two , to check the middle of start bit if it's still low 
              begin
                if (r_Rx_Data == 1'b0)                    //start bit detected i.e. equal to 0
                  begin
                    r_Clock_Count <= 16'b0;               // reset counter, found the middle
                    r_SM_Main     <= s_RX_DATA_BITS;      //when start bit is detected,state shifts to  DATA_BITS
                  end
                else
                  r_SM_Main <= s_IDLE;                    //If start bit is not there,then it jumps back to IDLE state 31
              end
            else
              begin
                r_Clock_Count <= r_Clock_Count + 16'b1;   //increment in clock count until the middle of the start bit
                r_SM_Main     <= s_RX_START_BIT;          //jumps to start bit until the middle of start bit
              end
          end // case: s_RX_START_BIT
         
         
        // Wait CLKS_PER_BIT-1 clock cycles to sample serial data
        s_RX_DATA_BITS :                                  
          begin
            if (r_Clock_Count < CLKS_PER_BIT-1)           
              begin
                r_Clock_Count <= r_Clock_Count + 16'b1;    //Increments clock counts until next bit 
                r_SM_Main     <= s_RX_DATA_BITS;           //jumps to state bit until next bit
              end
            else                                           
              begin
                r_Clock_Count          <= 16'b0;           //when 1 bit recieved, it reset the clock count
                r_Rx_Byte[r_Bit_Index] <= r_Rx_Data;       //transfers the serial bit
                 
                // Check if we have received all bits
                if (r_Bit_Index < 7)                      //as 8 bit have to be transfered
                  begin
                    r_Bit_Index <= r_Bit_Index + 3'b1;      //increment in index till 8 bits are transfered
                    r_SM_Main   <= s_RX_DATA_BITS;          //jump back to DATA_BIT state till all the bits are transfered
                  end
                else
                  begin
                    r_Bit_Index <= 3'b0;                    //resets index
                    r_SM_Main   <= s_RX_STOP_BIT;           //jump to STOP_BIT state
                  end
              end
          end // case: s_RX_DATA_BITS
     
     
        // Receive Stop bit.  Stop bit = 1
        s_RX_STOP_BIT :
          begin
            // Wait CLKS_PER_BIT-1 clock cycles for Stop bit to finish
            if (r_Clock_Count < CLKS_PER_BIT-1)
              begin
                r_Clock_Count <= r_Clock_Count + 16'b1;       //increment till the stop bit finishes
                r_SM_Main     <= s_RX_STOP_BIT;               //jumps back to STOP_BIT state
              end
            else
              begin
                r_Rx_DV       <= 1'b1;                      //once the data is recieved this signal is high
                r_Clock_Count <= 16'b0;                     //clock count resets once the data is recived
                r_SM_Main     <= s_CLEANUP;                 //jumps to CLEANUP state
              end
          end // case: s_RX_STOP_BIT
     
         
        // Stay here 1 clock
        s_CLEANUP :
          begin
            r_SM_Main <= s_IDLE;                          //jumps back to IDLE state to reset the registers
            r_Rx_DV   <= 1'b0;                            //resets the signal after one cycle
          end
         
         
        default :
          r_SM_Main <= s_IDLE;                            //Default state is set to IDLE
         
      endcase
      end
    end   
   
  assign o_Rx_DV   = r_Rx_DV;                              //signal outputs from register to output pin
  assign o_Rx_Byte = r_Rx_Byte;                            //data outputs from register to output pin
   










    
    always @(posedge clk_i or negedge rst_ni) begin
        if(~rst_ni) begin
            control <= 16'b0;
            tx      <= 8'b0;
            rx_en   <= 1'b0;
            tx_en   <= 1'b0;
	        rx_clr  <= 1'b1;
        end else begin
          if(~ren & we) begin
            if(addr == ADDR_CTRL) begin
                control  <= wdata[15:0];
            end else if (addr == ADDR_TX) begin
                tx  <= wdata[7:0];
            end else if (addr == RX_EN) begin
                rx_en <= wdata[0];
            end else if(addr == TX_EN) begin
                tx_en <= wdata[0];
            end else if(addr == RX_SC) begin
	            rx_clr <= wdata[0];
	    end else begin
                control <= 16'b0;
                tx      <= 8'b0;
                rx_en   <= 1'b0;
                tx_en   <= 1'b0;
		        rx_clr  <= 1'b1;
            end
        end 
    end     
  end
    
 


always @(posedge clk_i or negedge rst_ni) begin
    if(!rst_ni) begin
        rx_status <= 1'b0;
    	rx_reg    <= 8'b0;
    end else begin
        
	if (rx_done) begin
	   rx_reg  <= rx;
	   rx_status <= 1'b1;	
	end else if(!rx_clr) begin
	   rx_status <= 1'b0;	
	end
    end
end
  
 assign rdata = (addr == 20)? rx_status : (addr == 8)? rx_reg : 0;   





      
   
endmodule
 