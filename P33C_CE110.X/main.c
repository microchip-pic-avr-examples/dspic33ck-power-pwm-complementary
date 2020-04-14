

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
#include "pwm.h"


int main(void)

{
    P33C_PWM_GENERATOR_t my_pg1;
    P33C_PWM_GENERATOR_t my_pg4;
    
    Aux_PLL_Initialize();
    PWM_Initialize();
    PIN_MANAGER_Initialize();
    
    my_pg1 = PWM_Generator_ConfigRead(3);                // Grab existing config of PG3
    my_pg1.PGxIOCONH.bits.PENH = 0;     // Change 'my tihing'
    PWM_Generator_ConfigWrite(5, my_pg1);                 // Write ot PG5

    my_pg4 = PWM_Generator_ConfigRead(3);                // Grab existing config of PG3
    my_pg4.PGxIOCONL.bits.OVRENH = 0;   // Change 'my tihing'
    PWM_Generator_ConfigWrite(6, my_pg4);                // Write ot PG6

    
    while(1);
    
    return 0;
}
