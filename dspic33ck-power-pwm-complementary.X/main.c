/**
  Generated main.c file from MPLAB Code Configurator

  @Company
    Microchip Technology Inc.

  @File Name
    main.c

  @Summary
    This is the generated main.c using PIC24 / dsPIC33 / PIC32MM MCUs.

  @Description
    This source file provides main entry point for system initialization and application code development.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.167.0
        Device            :  dsPIC33CK256MP506
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.50
        MPLAB 	          :  MPLAB X v5.35
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

/**
  Section: Included Files
*/
#include <xc.h>
#include "mcc_generated_files/system.h"
#include "main.h"

/* ********************************************************************* *
 * PWM Complementary Output PWM Configuration Example
 * 
 * Description:
 * 
   In this code example PWM generator channel #3 is initialized 
 *   to produce a complementary output signal at pins PWM3H and PWM3L.
 *   Between rising and falling edges of the output signals a dead time 
 *   is added (100ns at rising edge of PWMxH and 150ns at falling edge of
 *   PWMxH). The initial frequency after startup is set to 200 kHz. By
 *   pressing push button [USER], the frequency is stepped to 1 MHz. By 
 *   pressing [USER] again, the frequency switches back to 200 kHz,
 *   The duty ratio will always remain 25% of the switching period.
 * 
 * Please note:
 *   This code example can be run on dsPIC33CK as well as on dsPIC33CH
 *   devices. The PWM outputs of each device may be routed to different 
 *   test points. Please refer to the table below to quickly find the 
 *   right signal outputs. 
 * 
 * Recommended Use of this example:
 *   In this example Microchip Code Configurator (MCC) is used to set 
 *   up the device main and auxiliary clock as well as Timer1 used
 *   to create a deterministic execution of code within the main() 
 *   loop.The project folder 'drivers' contains generic PWM module 
 *   driver files,which are independent from MCC to better demonstrate 
 *   the PWM generator register configuration in more detail. 
 *   These driver files are providing an abstraction layer of the 
 *   user code, allowing quick migration of code across different 
 *   device peripherals and device families.
 * 
 *   To better understand these mechanisms please open file 'pwm.h' on
 *   code line 49 and change the following PWM generator index number to
 *   configure another PWM generator than #3.
 *
 *     #define MY_PWM_GENERATOR    3 
 * 
 *   Valid numbers are 1-8 for PG1 through PG8 on dsPIC33CK and 
 *   1-4 for PG1 through PG4 on dsPIC33CH. Due to hardware limitations
 *   not all PWM generator outputs may be accessible. Please refer to 
 *   the Test Pin table below to review if the selected PWM generator 
 *   outputs are available and accessible.
 * 
 * Hardware:
 *  - Digital Power Development Board (DM330029) 
 *  - dsPIC33CK Digital Power Plug-In Module (MA330048)
 *
 * Software:
 *  - MPLAB X IDE, v6.20
 *  - Microchip Code Configuration (MCC), v4.05.0
 *  - XC-DSC C-Compiler, v3.00
 *  - dsPIC33CK-MP Device File Pack v1.13.366
 * 
 * ********************************************************************* */  

/* ********************************************************************* *
 * Digital Power Development Board (DM330029) Test Pin Assignment:
 * *********************************************************************
 * 
 * Board Overview:
 * 
 *         ------------------------------------
 *        |        DIGITAL TEST POINTS         |
 *        |------------------------------------|
 *        |           __________           ----|
 *        |          |__________|         | USB|
 *        |         DP PIM SOCKET          ----|
 *        |                               -----|
 *        |                   RESET O    | ICSP|
 *        |      _   _                    -----|
 *        |   P2|O| |O|P1      USER O          |
 *         ------------------------------------ 
 * 
 * Signal     | Test-Pin              | Comment
 *            | dsPIC33CK | dsPIC33CH | 
 * ---------------------------------------------------------------------
 * PWM1H      | TP45      | TP35      | PWM Generator #1 output HIGH
 * PWM1L      | TP47      | TP38      | PWM Generator #1 output LOW
 *            |           |           | 
 * PWM2H      | TP42      | TP25      | PWM Generator #2 output HIGH
 * PWM2L      | TP40      | TP27  (2) | PWM Generator #2 output LOW
 *            |           |           | 
 * PWM3H      | TP37      | TP36      | PWM Generator #3 output HIGH (default)
 * PWM3L      | TP41      | TP34      | PWM Generator #3 output LOW  (default)
 *            |           |           | 
 * PWM4H      | TP43      | TP46      | PWM Generator #4 output HIGH
 * PWM4L      | TP44      | TP48      | PWM Generator #4 output LOW
 *            |           |           | 
 * PWM5H      | TP35      | (n/a) (3) | PWM Generator #5 output HIGH
 * PWM5L      | TP38      | (n/a) (3) | PWM Generator #5 output LOW
 *            |           |           | 
 * PWM6H      | TP31      | (n/a) (3) | PWM Generator #6 output HIGH
 * PWM6L      | TP33      | (n/a) (3) | PWM Generator #6 output LOW
 *            |           |           | 
 * PWM7H      | TP25      | (n/a) (3) | PWM Generator #7 output HIGH
 * PWM7L      | TP27 (1)  | (n/a) (3) | PWM Generator #7 output LOW
 *            |           |           | 
 * PWM8H      | TP46      | (n/a) (3) | PWM Generator #8 output HIGH
 * PWM8L      | TP48      | (n/a) (3) | PWM Generator #8 output LOW
 * ---------------------------------------------------------------------
 *
 * (1): not available on dsPIC33CK DP PIM; Shared with on-board push button SW1
 * (2): not available on dsPIC33CH DP PIM Master Core; Shared with on-board push button SW1
 * (3): not available on dsPIC33CH DP PIM Master Core
 * 
 * ********************************************************************* */

// Digital Power Plug-In Module On-Board LED control
#define LED_INTERVAL    3000
volatile uint16_t dbgled_cnt = 0;


/*
                         Main application
 */
int main(void)
{
    
    // initialize the device
    SYSTEM_Initialize();
    
    // User PWM Initialization
    PWM_Initialize();
    
    // Initialize DP PIM and DP DevBoard function pins
    _T1IF = 0;
    DBGPIN_InitAsOutput();
    DBGLED_InitAsOutput();
    SW_InitAsInput();
    
    /* main loop */
    while (1)
    {
        while(!_T1IF);  // Wait for Timer1 to expire
        _T1IF = 0;      // Reset interrupt flag bit
        DBGPIN_Clear(); // Clear device debug pin
        
        // Count main-loop execution cycles until on-board LED needs to be toggled
        if(++dbgled_cnt > LED_INTERVAL)
        {
            dbgled_cnt = 0;     // Reset LED toggle counter
            DBGLED_Toggle();    // Toggle on-board LED
        }
        
        // Check if on-board push button has been pressed
        if (SW_Read() == SW_PRESSED)
        {
            // Wait until switch is released
            while(SW_Read() == SW_PRESSED); 

            // Update PWM timing registers
            if(my_pg->PGxPER.value == 20000)   // IF period is set to 200 kHz)
            {
                my_pg->PGxPER.value = 4000;    // set period to 1 MHz
                my_pg->PGxDC.value = 1000;     // rescale to 25% duty cycle
            }
            else
            {
                my_pg->PGxPER.value = 20000;   // set period to 200 kHz
                my_pg->PGxDC.value = 5000;     // rescale to 25% duty cycle
            }

            // Set UPDATE bit of master PWM generator #1
            DBGPIN_Set();                   // Set debug pin as oscilloscope trigger
            my_pg->PGxSTAT.bits.UPDREQ = 1;  // Set Update Bit (apply new timing to PWM generator)
        }
        
    }
    
    return(1);  // If this line is ever reached, something really bad happened....
}
/**
 End of File
*/

