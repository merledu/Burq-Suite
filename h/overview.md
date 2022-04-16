```
                                                                                                      
      #######                     # ###           ##### #     ##                                      
    /       ###                 /  /###  /     ######  /#    #### /                                   
   /         ##                /  /  ###/     /#   /  / ##    ###/                                    
   ##        #                /  ##   ##     /    /  /  ##    # #              ##                     
    ###                      /  ###              /  /    ##   #                ##                     
   ## ###           /###    ##   ##             ## ##    ##   #        /###     ##    ###    ####     
    ### ###        / ###  / ##   ##             ## ##     ##  #       / ###  /   ##    ###     ###  / 
      ### ###     /   ###/  ##   ##             ## ##     ##  #      /   ###/    ##     ###     ###/  
        ### /##  ##    ##   ##   ##             ## ##      ## #     ##    ##     ##      ##      ##   
          #/ /## ##    ##   ##   ##             ## ##      ## #     ##    ##     ##      ##      ##   
           #/ ## ##    ##    ##  ##             #  ##       ###     ##    ##     ##      ##      ##   
            # /  ##    ##     ## #      /          /        ###     ##    ##     ##      ##      ##   
  /##        /   ##    ##      ###     /       /##/          ##     ##    ##     ##      /#      /    
 /  ########/     ######        ######/       /  #####               ######       ######/ ######/     
/     #####        ####           ###        /     ##                 ####         #####   #####      
|                                                  #                                                        
 \)                                               ##                                                      
                                                                                                     
                                                                                                    
                                                                      
```

<!-- # SoC Now -->
- This Mini SoC Generator will generate an System on Chip (SoC)
- It will be based on RISC-V ISA (IMFC extensions) (32-bit)
- It will take specifications of the SoC as parameters
- All the Modules will be parametrised and re-usable, for anyone who requires just a single part instead on an entire SoC
- High Level approaches will be used by using CHISEL (Constructing Hardware in Scala Embedded Language)

## Scope
- There will be parameters to select the extensions, which will be included in core.
    - Integer (I) extension will be the base extension
    - Multiplication (M) extension will be optional
    - Floating-Point (F) extension will be optional
    - Compressed (C) extenison will be optional
- There will be parameters to select device(s) as well, to include in the SoC (any one or all can be selected). The list of devices are as follows.
    - GPIO
    - UART
    - SPI
    - SPI-Flash
- There will be parameters to select Bus Architecture which will be the communication medium within the SoC. The choices for Bus Architecture are:
    - Tilelink Uncached (TL-UL)

## Block Diagram
<img src="https://github.com/merledu/SoC-Now/blob/main/blockDiagram.png" width="100%">

## Team Members
1. Shahzaib Kashif      (Undergraduate Student, Software Engineering, UIT)
2. Talha Ahmed          (Undergraduate Student, Software Engineering, UIT)
3. Syeda Fizza Jaffery  (Undergraduate Student, Software Engineering, UIT)
4. Almas Ibrahim        (Undergraduate Student, Software Engineering, UIT)
5. Muhammad Shahzaib    (Undergraduate Student, Software Engineering, UIT)
6. Hadir Khan           (Graduate Research Associate, Microelectronics Research lab)
7. Farhan Ahmed Karim   (Software Team Lead, Microelectronics Research lab)
