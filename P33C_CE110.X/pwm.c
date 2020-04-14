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
#include "pwm.h"

#define PWM_GENERATOR       3

#define PWM_OUT_FREQUENCY   400e+3
#define PWM_OUT_PERIOD      (1.0/PWM_OUT_FREQUENCY)
#define PWM_RESOLUTION      250e-12  // Up to 250 ps PWM Resolution given in Data Sheet
#define PWM_PERIOD          (volatile uint16_t)(PWM_OUT_PERIOD/PWM_RESOLUTION) 

#define PWM_DUTY_RATIO      0.50
#define PWM_DUTY_CYCLE      (volatile uint16_t) (PWM_PERIOD* PWM_DUTY_RATIO)


/* Function Prototype*/
volatile uint16_t PWM_Generator_Config(volatile uint16_t pwm_Instance); 
 



/* Function:
    volatile uint16_t PWM_Initialize(void)

   Description:
    This function initializes PWM 
 */

volatile uint16_t PWM_Initialize(void)
{
    
    /*PCLKCON: PWM CLOCK CONTROL REGISTER*/
    PCLKCON = 0x0000;              // Clear PWM CLOCK CONTROL REGISTER
    PCLKCONbits.DIVSEL = 0b00;     // 0b11 = 1:16 ; 0b10 = 1:8 ;0b01 = 1:4 ; 0b00 = 1:2
    PCLKCONbits.MCLKSEL = 0b11;    // 0b11 = AFPLLO ; 0b10 = FPLLO ; 0b01 = AFVCO/2 ; 0b00 = FOSC 
    PCLKCONbits.LOCK = 0;          // Lock bit: 0 = Write-protected registers and bits are unlocked 
    
    /* MASTER PHASE, DUTY CYCLE and PERIOD REGISTERS  */
    MPHASE = 0x0000;               // Reset Master PHASE 
    MDC    = 0x0000;               // Reset Master DUTY CYCLE 
    MPER   = 0x0000;               // Reset Master PERIOD
  
 
    // FREQUENCY SCALE REGISTER & FREQUENCY SCALING MINIMUM PERIOD REGISTER
    FSCL = 0x0000;      // Reset frequency scaling register
    FSMINPER = 0x0000;  // Reset frequency scaling minimum register
    
      // LINEAR FEEDBACK SHIFT REGISTER
    LFSR = 0x0000;      // Reset linear feedback shift register
    
    
     // Reset COMBINATIONAL TRIGGER REGISTERS
    CMBTRIGLbits.CTA1EN = 0; // Disable Trigger Output from PWM Generator #1 as Source for Combinational Trigger A
    CMBTRIGLbits.CTA2EN = 0; // Disable Trigger Output from PWM Generator #2 as Source for Combinational Trigger A
    CMBTRIGLbits.CTA3EN = 0; // Disable Trigger Output from PWM Generator #3 as Source for Combinational Trigger A
    CMBTRIGLbits.CTA4EN = 0; // Disable Trigger Output from PWM Generator #4 as Source for Combinational Trigger A
    CMBTRIGLbits.CTA5EN = 0; // Disable Trigger Output from PWM Generator #5 as Source for Combinational Trigger A
    CMBTRIGLbits.CTA6EN = 0; // Disable Trigger Output from PWM Generator #6 as Source for Combinational Trigger A
    CMBTRIGLbits.CTA7EN = 0; // Disable Trigger Output from PWM Generator #7 as Source for Combinational Trigger A
    CMBTRIGLbits.CTA8EN = 0; // Disable Trigger Output from PWM Generator #8 as Source for Combinational Trigger A
    
    CMBTRIGHbits.CTB1EN = 0; // Disable Trigger Output from PWM Generator #1 as Source for Combinational Trigger B
    CMBTRIGHbits.CTB2EN = 0; // Disable Trigger Output from PWM Generator #2 as Source for Combinational Trigger B
    CMBTRIGHbits.CTB3EN = 0; // Disable Trigger Output from PWM Generator #3 as Source for Combinational Trigger B
    CMBTRIGHbits.CTB4EN = 0; // Disable Trigger Output from PWM Generator #4 as Source for Combinational Trigger B
    CMBTRIGHbits.CTB5EN = 0; // Disable Trigger Output from PWM Generator #5 as Source for Combinational Trigger B
    CMBTRIGHbits.CTB6EN = 0; // Disable Trigger Output from PWM Generator #6 as Source for Combinational Trigger B
    CMBTRIGHbits.CTB7EN = 0; // Disable Trigger Output from PWM Generator #7 as Source for Combinational Trigger B
    CMBTRIGHbits.CTB8EN = 0; // Disable Trigger Output from PWM Generator #8 as Source for Combinational Trigger B
    
    
    // Reset COMBINATORIAL PWM LOGIC A CONTROL REGISTERS 
    LOGCONAbits.PWMS1A = 0b0000; // Combinatorial PWM Logic Source #1 Selection: PWM1H
    LOGCONAbits.S1APOL = 0;      // Combinatorial PWM Logic Source #1 Polarity: Input is positive logic
    LOGCONAbits.PWMS2A = 0b0000; // Combinatorial PWM Logic Source #2 Selection: PWM2H
    LOGCONAbits.S2APOL = 0;      // Combinatorial PWM Logic Source #2 Polarity: Input is positive logic
    LOGCONAbits.PWMLFA = 0b00;   // Combinatorial PWM Logic Function Selection: PWMS1y & PWMS2y (AND)
    LOGCONAbits.PWMLFAD = 0b000; // Combinatorial PWM Logic Destination Selection: No assignment, combinatorial PWM logic function is disabled
    
    // Reset further COMBINATORIAL PWM LOGIC B-F
    LOGCONB = 0x0000;        // LOGCONB: COMBINATORIAL PWM LOGIC CONTROL REGISTER B
    LOGCONC = 0x0000;        // LOGCONC: COMBINATORIAL PWM LOGIC CONTROL REGISTER C
    LOGCOND = 0x0000;        // LOGCOND: COMBINATORIAL PWM LOGIC CONTROL REGISTER D
    LOGCONE = 0x0000;        // LOGCONE: COMBINATORIAL PWM LOGIC CONTROL REGISTER E
    LOGCONF = 0x0000;        // LOGCONF: COMBINATORIAL PWM LOGIC CONTROL REGISTER F
    
    
     // Reset PWM EVENT OUTPUT CONTROL REGISTERS A
    PWMEVTAbits.EVTAOEN = 0;    // PWM Event Output Enable: Event output signal is internal only
    PWMEVTAbits.EVTAPOL = 0;    // PWM Event Output Polarity: Event output signal is active-high
    PWMEVTAbits.EVTASTRD = 0;   // PWM Event Output Stretch Disable: Event output signal is stretched to eight PWM clock cycles minimum
    PWMEVTAbits.EVTASYNC = 0;   // PWM Event Output Sync: Event output is not synchronized to the system clock
    PWMEVTAbits.EVTASEL = 0b0000; // PWM Event Selection: Source is selected by the PGTRGSEL[2:0] bits
    PWMEVTAbits.EVTAPGS = 0b000;  // PWM Event Source Selection: PWM Generator 1
    
    // Reset further PWM EVENT OUTPUT CONTROL REGISTERS B-F
    PWMEVTB = 0x0000;   // PWM EVENT OUTPUT CONTROL REGISTER B
    PWMEVTC = 0x0000;   // PWM EVENT OUTPUT CONTROL REGISTER C
    PWMEVTD = 0x0000;   // PWM EVENT OUTPUT CONTROL REGISTER D
    PWMEVTE = 0x0000;   // PWM EVENT OUTPUT CONTROL REGISTER E
    PWMEVTF = 0x0000;   // PWM EVENT OUTPUT CONTROL REGISTER F
    
    PWM_Generator_Config(PWM_GENERATOR);
    
 
    
    return(1);
}

// *****************************************************************************
/* Function: 
 * volatile uint16_t PWM_Generator_Config(volatile uint16_t pwm_instance)
 * 
 * Description:
 *  
 * This function initializes the PWM Generator specified by 'pwm_Instance' to 
 * generate a 400Khz, 50% Duty Cycle, High-Resolution, Independent Edge aligned 
 * Complementary Mode PWM output
 */
volatile P33C_PWM_GENERATOR_t PG_Read(volatile uint16_t pwm_Instance)
{

    volatile P33C_PWM_GENERATOR_t pg_config;    
    volatile P33C_PWM_GENERATOR_t* pg;    

    // Set pointer to memory address of desired PWM instance
    pg = (volatile P33C_PWM_GENERATOR_t*) ((volatile uint8_t*) &PG1CONL + ((pwm_Instance - 1) * P33C_PWMGEN_SFR_OFFSET));

    
    pg_config.PGxCONL = pg->PGxCONL;
    
    return(pg_config);
    
}

volatile P33C_PWM_GENERATOR_t PG_Write(volatile uint16_t pwm_Instance, volatile P33C_PWM_GENERATOR_t pg_config)
{

    volatile P33C_PWM_GENERATOR_t* pg;    

    // Set pointer to memory address of desired PWM instance
    pg = (volatile P33C_PWM_GENERATOR_t*) ((volatile uint8_t*) &PG1CONL + ((pwm_Instance - 1) * P33C_PWMGEN_SFR_OFFSET));

    *pg = pg_config;
    
    return(pg_config);
    
}


volatile uint16_t PWM_Generator_Config(volatile uint16_t pwm_Instance)
{
    
    volatile P33C_PWM_GENERATOR_t pg_config;    
    volatile P33C_PWM_GENERATOR_t* pg;    

    pg_config.PGxCONL.bits.ON = 1;
    
    
    
    // Set pointer to memory address of desired PWM instance
    pg = (volatile P33C_PWM_GENERATOR_t*) ((volatile uint8_t*) &PG1CONL + ((pwm_Instance - 1) * P33C_PWMGEN_SFR_OFFSET));

    
    /* PWM GENERATOR 1 CONTROL REGISTER LOW */
    
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // The following code is an example for direct register bit-addressing.
    // As this kind of register configuration is hard-coded for a certain
    // peripheral, migrating this code requires to re-write the entire routine.
    
    // Therefore this function applies an alternative approach by configuring
    // a 'virtual PWM module' and writes its configuration to any PWM generator
    // specified.
    
    // PG1CONLbits.ON = 0;         // Disable PWM Generator1
    // PG1CONLbits.CLKSEL = 0b01;  // Clock Selection: Selected by PCLKCON.MCLKSEL bits  
    // PG1CONLbits.MODSEL = 0b000; // Mode Selection: Independent Edge PWM mode 
    // PG1CONLbits.TRGCNT = 0b000; // Trigger Count Selection: PWM Generator produces 1 PWM cycle after triggered 
    // PG1CONLbits.HREN = 1;       // PWM Generator 1 High-Resolution Enable bit: PWM Generator 1 operates in High-Resolution mode(
    // ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    pg->PGxCONL.bits.ON = 0;         // Disable PWM generator
    pg->PGxCONL.bits.CLKSEL = 0b01;  // Clock Selection: Selected by PCLKCON.MCLKSEL bits  
    pg->PGxCONL.bits.MODSEL = 0b000; // Mode Selection: Independent Edge PWM mode 
    pg->PGxCONL.bits.TRGCNT = 0b000; // Trigger Count Selection: PWM Generator produces 1 PWM cycle after triggered 
    pg->PGxCONL.bits.HREN = 1;       // PWM Generator 1 High-Resolution Enable bit: PWM Generator 1 operates in High-Resolution mode(
    
    /* PWM GENERATOR 1 CONTROL REGISTER HIGH */
    pg->PGxCONH.bits.MDCSEL = 0;    // Master Duty Cycle Register Selection: Duty Cycle uses PG1DC Register
    pg->PGxCONH.bits.MPERSEL = 0;   // Master Period Register Selection: Period uses PG1PER Register
    pg->PGxCONH.bits.MPHSEL = 0;    // Master Phase Register Selection: Phase uses PG1PHASE Register
    pg->PGxCONH.bits.MSTEN = 0;     // Master Update Enable:PWM Generator does not broadcast the UPDREQ status bit state or EOC signal
    pg->PGxCONH.bits.UPDMOD = 0b000;// PWM Buffer Update Mode Selection: SOC update
    pg->PGxCONH.bits.TRGMOD = 1;    // PWM Generator Trigger Mode:PWM Generator operates in Retriggerable mode
    pg->PGxCONH.bits.SOCS = 0;      //Start of Cycle Selection: Local EOC
    
    /*PWM GENERATOR 1 STATUS REGISTER*/
    pg->PGxSTAT.value = 0x0000; // Reset to default
    
    
    /* PWM GENERATOR 1 I/O CONTROL REGISTER LOW */
    pg->PGxIOCONL.bits.CLMOD = 0;      // Current Limit Mode Select: If PCI current limit is active, then the CLDAT<1:0> bits define the PWM output levels
    pg->PGxIOCONL.bits.SWAP = 0;       // Swap PWM Signals to PWM1H and PWM1L Device Pins : PWM1H/L signals are mapped to their respective pins
    pg->PGxIOCONL.bits.OVRENH = 0;     // User Override Enable for PWM1H Pin : PWM Generator provides data for the PWM1H pin
    pg->PGxIOCONL.bits.OVRENL = 0;     // User Override Enable for PWM1L Pin : PWM Generator provides data for the PWM1L pin
    pg->PGxIOCONL.bits.OVRDAT = 0b00;  // Data for PWM1H/PWM1L Pins if Override is Enabled: If OVERENL = 1, then OVRDAT<0> provides data for PWM1L
    pg->PGxIOCONL.bits.OSYNC = 0b00;   // User output overrides via the OVRENL/H and OVRDAT<1:0> bits are synchronized to the local PWM time base (next start of cycle
    pg->PGxIOCONL.bits.FLTDAT = 0b00;  //Data for PWM1H/PWM1L Pins if FLT Event is Active : If Fault is active, then FLTDAT<0> provides data for PWM1L.
    pg->PGxIOCONL.bits.CLDAT = 0b00;   //Data for PWM1H/PWM1L Pins if CLMT Event is Active: If current limit is active, then CLDAT<0> provides data for PWM1L
    pg->PGxIOCONL.bits.FFDAT = 0b00;   // If feed-forward is active, then FFDAT<0> provides data for PWM1L: If feed-forward is active, then FFDAT<0> provides data for PWM1L
    pg->PGxIOCONL.bits.DBDAT = 0b00;   //Data for PWM1H/PWM1L Pins if Debug Mode is Active and PTFRZ = 1: If Debug mode is active and PTFRZ=1,then DBDAT<0> provides PWM1L data
    
        
    /* PWM GENERATOR 1 I/O CONTROL REGISTER HIGH */    
    pg->PGxIOCONH.value  = 0x0000; // Reset register
    pg->PGxIOCONH.bits.CAPSRC = 0b000;  // Time Base Capture Source Selection : No hardware source selected for time base capture ? software only*/
    pg->PGxIOCONH.bits.DTCMPSEL = 0;    // Dead-Time Compensation Select: Dead-time compensation is controlled by PCI Sync logic
    pg->PGxIOCONH.bits.PMOD = 0b00;     // PWM Generator Output Mode Selection bits: PWM Generator outputs operate in Complementary mode
    pg->PGxIOCONH.bits.PENH = 1;        // PWM1H Output Port Enable bit: PWM Generator controls the PWM1H output pin
    pg->PGxIOCONH.bits.PENL = 1;        // PWM1L Output Port Enable bit: PWM Generator controls the PWM1L output pin
    pg->PGxIOCONH.bits.POLH = 0;        // PWM1H Output Polarity bit: 1 = Output pin is active-low
    pg->PGxIOCONH.bits.POLL = 0;        // PWM1L Output Polarity bit:  0 = Output pin is active-high
    
    /*PWM GENERATOR 1 EVENT REGISTER LOW*/
    pg->PGxEVTL.bits.ADTR1PS = 0b00000; // ADC Trigger 1 Post-scaler Selection bits: 00000 = 1:1
    pg->PGxEVTL.bits.ADTR1EN3  = 0;     // ADC Trigger 1 Source is PG1TRIGC Compare Event Enable bit: PG1TRIGC register compare event is disabled as trigger source for ADC Trigger 1
    pg->PGxEVTL.bits.ADTR1EN2 = 0;      // ADC Trigger 1 Source is PG1TRIGB Compare Event Enable bit:  PG1TRIGB register compare event is disabled as trigger source for ADC Trigger 1
    pg->PGxEVTL.bits.ADTR1EN1 = 0;      // ADC Trigger 1 Source is PG1TRIGA Compare Event Enable: PG1TRIGA register compare event is disabled as trigger source for ADC Trigger 1
    pg->PGxEVTL.bits.UPDTRG = 0b00;     // Update Trigger Select bits: User must set the UPDREQ bit (PGxSTAT[3]) manually
    pg->PGxEVTL.bits.PGTRGSEL = 0b000;  // PWM Generator Trigger Output Selection bits: EOC event is the PWM Generator trigger
    
    /* PWM GENERATOR 1 EVENT REGISTER HIGH */
    pg->PGxEVTH.value = 0x0000;    // Reset register
    pg->PGxEVTH.bits.FLTIEN = 0;        // PCI Fault Interrupt Enable bit: Fault interrupt is disabled
    pg->PGxEVTH.bits.CLIEN = 0;         // PCI Current Limit Interrupt Enable bit: Current limit interrupt is disabled
    pg->PGxEVTH.bits.FFIEN = 0;         // PCI Feed-Forward Interrupt Enable bit: Feed-forward interrupt is disabled
    pg->PGxEVTH.bits.SIEN = 0;          // PCI Sync Interrupt Enable bit: Sync interrupt is disabled
    pg->PGxEVTH.bits.IEVTSEL = 0b00;    // Interrupt Event Selection bits: Interrupts CPU at EOC
    pg->PGxEVTH.bits.ADTR2EN3 = 0;      // ADC Trigger 2 Source is PG1TRIGC Compare Event Enable bit: PG1TRIGC register compare event is disabled as trigger source for ADC Trigger 2
    pg->PGxEVTH.bits.ADTR2EN2 = 0;      // ADC Trigger 2 Source is PG1TRIGB Compare Event Enable bit: PG1TRIGB register compare event is disabled as trigger source for ADC Trigger 2
    pg->PGxEVTH.bits.ADTR2EN1 = 0;      // ADC Trigger 2 Source is PG1TRIGA Compare Event Enable bit: PG1TRIGA register compare event is disabled as trigger source for ADC Trigger 2       
    pg->PGxEVTH.bits.ADTR1OFS = 0b00000;// ADC Trigger 1 Offset Selection bits: No offset
    
    /*Reset further PCI control registers */
    pg->PGxCLPCIH.value     = 0x0000;   // PWM GENERATOR CL PCI REGISTER HIGH (not used)
    pg->PGxCLPCIL.value     = 0x0000;   // PWM GENERATOR CL PCI REGISTER LOW  (not used)
    pg->PGxFPCIH.value      = 0x0000;   // PWM GENERATOR F  PCI REGISTER HIGH (not used)
    pg->PGxFPCIL.value      = 0x0000;   // PWM GENERATOR F  PCI REGISTER LOW  (not used)
    pg->PGxFFPCIH.value     = 0x0000;   // PWM GENERATOR FF PCI REGISTER HIGH (not used)
    pg->PGxFFPCIL.value     = 0x0000;   // PWM GENERATOR FF PCI REGISTER LOW  (not used)
    pg->PGxSPCIH.value      = 0x0000;   // PWM GENERATOR S  PCI REGISTER HIGH (not used)
    pg->PGxSPCIL.value      = 0x0000;   // PWM GENERATOR S  PCI REGISTER LOW  (not used)
    
    /*PWM GENERATOR x LEADING-EDGE BLANKING REGISTER HIGH/LOW */
    pg->PGxLEBH.value  = 0x0000;   // Leading Edge Blanking not used
    pg->PGxLEBL.value  = 0x0000;   // Leading Edge Blanking not used
    
    /* PGxPHASE: PWM GENERATOR x PHASE REGISTER */
    pg->PGxPHASE.value = 0;
    
    /*PGxDC: PWM GENERATOR x DUTY CYCLE REGISTER */
    pg->PGxDC.value    = PWM_DUTY_CYCLE;     
    
    /* PGxDCA: PWM GENERATOR x DUTY CYCLE ADJUSTMENT REGISTER */
    pg->PGxDCA.value   = 0x0000;      
    
    /* PGxPER: PWM GENERATOR x PERIOD REGISTER  */       
    pg->PGxPER.value   = PWM_PERIOD;   

    /*PGxTRIGA: PWM GENERATOR x TRIGGER A REGISTER */
    pg->PGxTRIGA.value = 0;  
    
    /* PGxTRIGB: PWM GENERATOR x TRIGGER B REGISTER */      
    pg->PGxTRIGB.value = 0;
    
    /* PGxTRIGC: PWM GENERATOR x TRIGGER C REGISTER */        
    pg->PGxTRIGC.value = 0;  
    
    /* PGxDTL: PWM GENERATOR x DEAD-TIME REGISTER LOW */       
    pg->PGxDTL.bits.DTL = 0;
    
    /*PGxDTH: PWM GENERATOR x DEAD-TIME REGISTER */
    pg->PGxDTH.bits.DTH = 0;      
            
   
    pg->PGxCONL.bits.ON = 1;   // Enable PG1  
    
    return(pg->PGxCONL.bits.ON); // Return Enable bit
}
  