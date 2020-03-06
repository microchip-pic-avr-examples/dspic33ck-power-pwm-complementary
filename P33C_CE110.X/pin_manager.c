

/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */
#include <xc.h>
#include "hal_pinmap.h"


 volatile uint16_t  MAP_HARDWARE_GPIO(void);



// *****************************************************************************
/* Function:
    volatile uint16_t PIN_MANAGER_Initialize(void){
  Summary:
    Routine to set-up GPIO ports

  Description:
    Function initializes GPIO pins for input or output ports,analog/digital pins,
    remap the peripheral functions to desires RPx pins.

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Remarks:
    None.
 */
volatile uint16_t PIN_MANAGER_Initialize(void){
    // Reset all PORTx register (all inputs)
    #ifdef TRISA
        TRISA = 0xFFFF;
        LATA  = 0x0000;
        CNPDA = 0x0000;
        CNPUA = 0x0000;
        ODCA  = 0x0000;
    #endif
    #ifdef ANSELA
        ANSELA = 0x0000;
    #endif

    #ifdef TRISB
        TRISB = 0xFFFF;
        LATB  = 0x0000;
        CNPDB = 0x0000;
        CNPUB = 0x0000;
        ODCB  = 0x0000;
    #endif
    #ifdef ANSELB
        ANSELB = 0x0000;
    #endif

    #ifdef TRISC
        TRISC = 0xFFFF;
        LATC  = 0x0000;
        CNPDC = 0x0000;
        CNPUC = 0x0000;
        ODCC  = 0x0000;
    #endif
    #ifdef ANSELC
        ANSELC = 0x0000;
    #endif

    #ifdef TRISD
        TRISD = 0xFFFF;
        LATD  = 0x0000;
        CNPDD = 0x0000;
        CNPUD = 0x0000;
        ODCD  = 0x0000;
    #endif
    #ifdef ANSELD
        ANSELD = 0x0000;
    #endif

    #ifdef TRISE
        TRISE = 0xFFFF;
        LATE  = 0x0000;
        CNPDE = 0x0000;
        CNPUE = 0x0000;
        ODCE  = 0x0000;
    #endif
    #ifdef ANSELE
        ANSELE = 0x0000;
    #endif

    MAP_HARDWARE_GPIO();

    return(1);
}

// *****************************************************************************
/* Function:
    volatile uint16_t MAP_HARDWARE_GPIO(void)

  Summary:
    Routine to set-up GPIO ports

  Description:
    This is where user define the use of the GPIO pins 

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Remarks:
    None.
 */
volatile uint16_t MAP_HARDWARE_GPIO(void){
    
    
    #if defined (__MA330048_dsPIC33CK_DPPIM__)
    // Direct pin addressing fro [TRISBbits.TRISB14 = 0] has been replaced by MCAL label
    TP45_INIT_OUTPUT;
    // Direct pin addressing fro [TRISBbits.TRISB15 = 0] has been replaced by MCAL label
    TP47_INIT_OUTPUT;
    
    #elif defined (__MA330049_dsPIC33CH_DPPIM__)
    // Direct pin addressing fro [TRISBbits.TRISB14 = 0] has been replaced by MCAL label
    TP35_INIT_OUTPUT;
    // Direct pin addressing fro [TRISBbits.TRISB15 = 0] has been replaced by MCAL label
    TP38_INIT_OUTPUT;
    #endif
    
    
    return(1);
}

