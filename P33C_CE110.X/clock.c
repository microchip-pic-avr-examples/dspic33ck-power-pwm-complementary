/*
    (c) 2019 Microchip Technology Inc. and its subsidiaries. You may use this
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

#include <xc.h>
#include "clock.h"

// *****************************************************************************
/* Function:
    volatile uint16_t Aux_PLL_Initialize(void)

  Summary:
    Routine to configure Auxiliary PLL Oscillator

  Description:
    Function configures Auxiliary PLL Oscillator 

  Precondition:
    None.

  Parameters:
    None

  Returns:
    None.

  Remarks:
    None.
 */

volatile uint16_t Aux_PLL_Initialize(void)

{   
    /*Disable first the Aux PLL clock source */
    ACLKCON1bits.APLLEN = 0;
   
    /* Select Internal FRC as a Clock Source */
    
    ACLKCON1bits.FRCSEL = 1; 
    
    /* Internal RC Oscillator is 8MHz
     * 
     * Desired APLLO is 500MHz, Desired AFVCO = 1 GHz
     * 
     * AFVCO calculation:
     * 
     *         ( AFPLLI * M)     (8 * 125)           
     * AFVCO = -------------- = -----------  = 1000 MHz
     *               N1             1    
     *
     * where:
     * AFPPLI = AFPLLI INPUT FREQUENCY = 8
     * M  = APLLFBDIV[7:0] = 125
     * N1 = APLLPRE[3:0] = 1
     * 
     * 
     * AFPLLO Calculation:
     * 
     * 
     * 
     *           (AFPLLI * M)       (8 * 125)           
     * AFPLLO = --------------  = -----------   = 500 MHz
     *          (N1 * N2 * N3)     (1 * 2 * 1)      
     *
     * 
     *
     * where:
     * M  = APLLFBDIV[7:0] = 125
     * N1 = APLLPRE[3:0] = 1
     * N2 = APOST1DIV[2:0] = 2
     * N3 = APOST2DIV[2:0] = 1 
     *
     */
    
        
    ACLKCON1bits.APLLPRE = 1;
    APLLFBD1bits.APLLFBDIV = 125;
    APLLDIV1bits.APOST1DIV = 2; 
    APLLDIV1bits.APOST2DIV = 1;
    
    /* Enable APLL */
    ACLKCON1bits.APLLEN = 1; 
   
    return(1);
    
    }

