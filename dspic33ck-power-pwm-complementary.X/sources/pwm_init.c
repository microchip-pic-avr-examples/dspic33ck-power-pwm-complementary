/*
 * File:   pwm.c
 * Author: M91406
 *
 * Created on July 20, 2020, 12:20 PM
 */


#include <xc.h>
#include "pwm_init.h"

/* Declare global, user-defined PWM generator object */
volatile struct P33C_PWM_GENERATOR_s* my_pg;    // user-defined PWM generator object 



volatile uint16_t PWM_Initialize(void) {
    
    volatile uint16_t retval=1;
    volatile uint16_t pgInstance=0;
    
    // Default PWM Initialization for 500 MHz input clock from AUX PLL
    p33c_PwmModule_Initialize();

    // Capture handle to the desired PWM generator 
    my_pg = p33c_PwmGenerator_GetHandle(MY_PWM_GENERATOR);

    // Reset PGx SFRs to RESET conditions
    pgInstance = p33c_PwmGenerator_GetInstance(my_pg);
    p33c_PwmGenerator_ConfigWrite(pgInstance, pgConfigDispose);

    // Set individual PWM generator configuration
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    // PGxCONL: PWM GENERATOR x CONTROL REGISTER LOW
    my_pg->PGxCONL.bits.CLKSEL = 0b01; // PWM Generator uses Master clock selected by the MCLKSEL[1:0] (PCLKCON[1:0]) control bits
    my_pg->PGxCONL.bits.MODSEL = 0b000; // Independent Edge PWM mode
    my_pg->PGxCONL.bits.HREN = 1; // PWM Generator x operates in High-Resolution mode
    
    // PGxCONH: PWM GENERATOR x CONTROL REGISTER HIGH
    my_pg->PGxCONH.bits.UPDMOD = 0b00; // SOC update: Data registers at start of next PWM cycle if UPDREQ = 1
    my_pg->PGxCONH.bits.TRGMOD = 0b0; // PWM Generator operates in Single Trigger mode
    my_pg->PGxCONH.bits.SOCS = 0b0000; // SOCS[3:0]: Start-of-Cycle Selection: Local EOC ? PWM Generator is self-triggered
    
    // PGxIOCONL: PWM GENERATOR x I/O CONTROL REGISTER LOW
    my_pg->PGxIOCONL.bits.OSYNC = 0b00; // User output overrides via the OVRENH/L and OVRDAT[1:0] 
                                                 // bits are synchronized to the local PWM time base (next Start-of-Cycle)
    my_pg->PGxIOCONL.bits.OVRDAT = 0b00; // Both PWM outputs are LOW in override mode
    my_pg->PGxIOCONL.bits.OVRENL = 1; // OVRDAT0 provides data for output on the PWMxL pin
    my_pg->PGxIOCONL.bits.OVRENH = 1; // OVRDAT1 provides data for output on the PWMxH pin
        
    // PGxIOCONH: PWM GENERATOR x I/O CONTROL REGISTER HIGH
    my_pg->PGxIOCONH.bits.PMOD = 0b00; // PWM Generator outputs operate in Complementary mode
    
    // Set PWM signal generation timing of this generator 
    
    my_pg->PGxPER.value = 20000;   // Set Period (n = 20000 => 1 / (n * 250 ps) = 200 kHz )
    my_pg->PGxDC.value  = 5000;    // Set Duty Cycle (n = 5000 => n / PGxPER = 25.0 %)
    my_pg->PGxDTH.value = 400;     // Set Rising Edge Dead Time (n = 400 => n * 250 ps = 100 ns)
    my_pg->PGxDTL.value = 600;     // Set Falling Edge Dead Time (n = 600 => n * 250 ps = 150 ns)

    // Enable PWM generator with outputs DISABLED
    p33c_PwmGenerator_Enable(my_pg); 
    
    Nop(); // Place breakpoint to review PWM configuration
    Nop(); // using the Watch Window
    Nop();
    
    // Enable PWM generator outputs (starts signal generation at next period transition)
    p33c_PwmGenerator_Resume(my_pg);
    
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // PLEASE NOTE:
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // Digital Power Plug-In Modules may have additional circuits dedicated to 
    // specific functions connected to some of their device pins. The following  
    // pre-compiler instructions disabling certain PWM outputs interfering with  
    // analog filter circuits and are therefore not available on the hardware
    // you may be using.
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    #if defined (__MA330048_dsPIC33CK_DPPIM__)

    // On dsPIC33CK DP PIM (MA330048) PWM generator output PWM7L is shared
    // with the on-board push button of the Digital Power Development
    // Board (DM330029). The PWM7L output signal will get filtered and
    // distorted by the switch debounce capacitor and is therefore 
    // being turned off here.

    pgInstance = p33c_PwmGenerator_GetInstance(my_pg);
    
    if (pgInstance == 7) 
    {
        my_pg->PGxIOCONL.bits.OVRENL = 1;
        my_pg->PGxIOCONH.bits.PENL = 0;
    }
    
    #elif defined (__MA330049_dsPIC33CH_DPPIM__)

    // On dsPIC33CH DP PIM (MA330049) PWM generator output PWM2L is shared
    // with the on-board push button of the Digital Power Development
    // Board (DM330029). The PWM7L output signal will get filtered and
    // distorted by the switch debounce capacitor and is therefore 
    // being turned off here.

    pgInstance = p33c_PwmGenerator_GetInstance(my_pg);
    
    if (pgInstance == 2) 
    {
        my_pg->PGxIOCONL.bits.OVRENL = 1;
        my_pg->PGxIOCONH.bits.PENL = 0;
    }
    #endif

    // Check return value
    retval = (bool)(my_pg->PGxCONL.bits.ON) &&         // Check if PWM generator is turned on
                   (!my_pg->PGxIOCONL.bits.OVRENH);    // Check if PWM generator outputs are active
    
    return(retval); // Return 1=success, 0=failure
}
