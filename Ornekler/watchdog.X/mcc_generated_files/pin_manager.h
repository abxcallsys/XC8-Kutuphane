/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.35
        Device            :  PIC16F1827
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set Led_Test aliases
#define Led_Test_TRIS               TRISBbits.TRISB0
#define Led_Test_LAT                LATBbits.LATB0
#define Led_Test_PORT               PORTBbits.RB0
#define Led_Test_WPU                WPUBbits.WPUB0
#define Led_Test_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define Led_Test_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define Led_Test_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define Led_Test_GetValue()           PORTBbits.RB0
#define Led_Test_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define Led_Test_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define Led_Test_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define Led_Test_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)

// get/set IO_RB1 aliases
#define IO_RB1_TRIS               TRISBbits.TRISB1
#define IO_RB1_LAT                LATBbits.LATB1
#define IO_RB1_PORT               PORTBbits.RB1
#define IO_RB1_WPU                WPUBbits.WPUB1
#define IO_RB1_ANS                ANSELBbits.ANSB1
#define IO_RB1_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define IO_RB1_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define IO_RB1_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define IO_RB1_GetValue()           PORTBbits.RB1
#define IO_RB1_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define IO_RB1_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define IO_RB1_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define IO_RB1_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define IO_RB1_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define IO_RB1_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set IO_RB4 aliases
#define IO_RB4_TRIS               TRISBbits.TRISB4
#define IO_RB4_LAT                LATBbits.LATB4
#define IO_RB4_PORT               PORTBbits.RB4
#define IO_RB4_WPU                WPUBbits.WPUB4
#define IO_RB4_ANS                ANSELBbits.ANSB4
#define IO_RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define IO_RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define IO_RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define IO_RB4_GetValue()           PORTBbits.RB4
#define IO_RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define IO_RB4_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define IO_RB4_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define IO_RB4_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/