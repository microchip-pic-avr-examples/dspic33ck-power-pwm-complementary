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
#include "pwm.h"

#define PWM_OUT_FREQUENCY    400e+3
#define PWM_OUT_PERIOD       (1.0/PWM_OUT_FREQUENCY)
#define PWM_RESOLUTION       250e-12  // Up to 250 ps PWM Resolution given in Data Sheet
#define PWM_PERIOD           (volatile uint16_t)(PWM_OUT_PERIOD/PWM_RESOLUTION) 

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
    
    PWM_Generator_Config(3);
    
 
    
    return(1);
}

// *****************************************************************************
/* Function: 
 * volatile uint16_t PWM_Generator_Config(volatile uint16_t pwm_instance)
 * 
 * Description:
 *  
   This function initializes the PWM Generator1 to generate a 400Khz, 50% Duty Cycle, High-Resolution, 
   Independent Edge aligned Complementary Mode PWM output
 */
volatile uint16_t PWM_Generator1_Config(void)
{
    /* PWM GENERATOR 1 CONTROL REGISTER LOW */
    
    PG1CONLbits.ON = 0;         // Disable PWM Generator1
    PG1CONLbits.CLKSEL = 0b01;  // Clock Selection: Selected by PCLKCON.MCLKSEL bits  
    PG1CONLbits.MODSEL = 0b000; // Mode Selection: Independent Edge PWM mode 
    PG1CONLbits.TRGCNT = 0b000; // Trigger Count Selection: PWM Generator produces 1 PWM cycle after triggered 
    PG1CONLbits.HREN = 1;       // PWM Generator 1 High-Resolution Enable bit: PWM Generator 1 operates in High-Resolution mode(
    
    
    /* PWM GENERATOR 1 CONTROL REGISTER HIGH */
    PG1CONHbits.MDCSEL = 0;    // Master Duty Cycle Register Selection: Duty Cycle uses PG1DC Register
    PG1CONHbits.MPERSEL = 0;   // Master Period Register Selection: Period uses PG1PER Register
    PG1CONHbits.MPHSEL = 0;    // Master Phase Register Selection: Phase uses PG1PHASE Register
    PG1CONHbits.MSTEN = 0;     // Master Update Enable:PWM Generator does not broadcast the UPDREQ status bit state or EOC signal
    PG1CONHbits.UPDMOD = 0b000;// PWM Buffer Update Mode Selection: SOC update
    PG1CONHbits.TRGMOD = 1;    // PWM Generator Trigger Mode:PWM Generator operates in Retriggerable mode
    PG1CONHbits.SOCS = 0;      //Start of Cycle Selection: Local EOC
    
    /*PWM GENERATOR 1 STATUS REGISTER*/
    PG1STAT = 0x0000; // Reset to default
    
    
    /* PWM GENERATOR 1 I/O CONTROL REGISTER LOW */
    PG1IOCONLbits.CLMOD = 0;    // Current Limit Mode Select: If PCI current limit is active, then the CLDAT<1:0> bits define the PWM output levels
    PG1IOCONLbits.SWAP = 0;     // Swap PWM Signals to PWM1H and PWM1L Device Pins : PWM1H/L signals are mapped to their respective pins
    PG1IOCONLbits.OVRENH = 0;   // User Override Enable for PWM1H Pin : PWM Generator provides data for the PWM1H pin
    PG1IOCONLbits.OVRENL = 0;   // User Override Enable for PWM1L Pin : PWM Generator provides data for the PWM1L pin
    PG1IOCONLbits.OVRDAT = 0b00;// Data for PWM1H/PWM1L Pins if Override is Enabled: If OVERENL = 1, then OVRDAT<0> provides data for PWM1L
    PG1IOCONLbits.OSYNC = 0b00; // User output overrides via the OVRENL/H and OVRDAT<1:0> bits are synchronized to the local PWM time base (next start of cycle
    PG1IOCONLbits.FLTDAT = 0b00; //Data for PWM1H/PWM1L Pins if FLT Event is Active : If Fault is active, then FLTDAT<0> provides data for PWM1L.
    PG1IOCONLbits.CLDAT = 0b00;  //Data for PWM1H/PWM1L Pins if CLMT Event is Active: If current limit is active, then CLDAT<0> provides data for PWM1L
    PG1IOCONLbits.FFDAT = 0b00;  // If feed-forward is active, then FFDAT<0> provides data for PWM1L: If feed-forward is active, then FFDAT<0> provides data for PWM1L
    PG1IOCONLbits.DBDAT = 0b00;  //Data for PWM1H/PWM1L Pins if Debug Mode is Active and PTFRZ = 1: If Debug mode is active and PTFRZ=1,then DBDAT<0> provides PWM1L data
    
        
    /* PWM GENERATOR 1 I/O CONTROL REGISTER HIGH */    
    PG1IOCONH  = 0x0000;
    PG1IOCONHbits.CAPSRC = 0b000; // Time Base Capture Source Selection : No hardware source selected for time base capture ? software only*/
    PG1IOCONHbits.DTCMPSEL = 0;   // Dead-Time Compensation Select: Dead-time compensation is controlled by PCI Sync logic
    PG1IOCONHbits.PMOD = 0b00;    // PWM Generator Output Mode Selection bits: PWM Generator outputs operate in Complementary mode
    PG1IOCONHbits.PENH = 1;       // PWM1H Output Port Enable bit: PWM Generator controls the PWM1H output pin
    PG1IOCONHbits.PENL = 1;       // PWM1L Output Port Enable bit: PWM Generator controls the PWM1L output pin
    PG1IOCONHbits.POLH = 0;       // PWM1H Output Polarity bit: 1 = Output pin is active-low
    PG1IOCONHbits.POLL = 0;       // PWM1L Output Polarity bit:  0 = Output pin is active-high
    
    /*PWM GENERATOR 1 EVENT REGISTER LOW*/
    PG1EVTLbits.ADTR1PS = 0b00000; // ADC Trigger 1 Post-scaler Selection bits: 00000 = 1:1
    PG1EVTLbits.ADTR1EN3  = 0;     // ADC Trigger 1 Source is PG1TRIGC Compare Event Enable bit: PG1TRIGC register compare event is disabled as trigger source for ADC Trigger 1
    PG1EVTLbits.ADTR1EN2 = 0;      // ADC Trigger 1 Source is PG1TRIGB Compare Event Enable bit:  PG1TRIGB register compare event is disabled as trigger source for ADC Trigger 1
    PG1EVTLbits.ADTR1EN1 = 0;      // ADC Trigger 1 Source is PG1TRIGA Compare Event Enable: PG1TRIGA register compare event is disabled as trigger source for ADC Trigger 1
    PG1EVTLbits.UPDTRG = 0b00;     // Update Trigger Select bits: User must set the UPDREQ bit (PGxSTAT[3]) manually
    PG1EVTLbits.PGTRGSEL = 0b000;   // PWM Generator Trigger Output Selection bits: EOC event is the PWM Generator trigger
    
    /* PWM GENERATOR 1 EVENT REGISTER HIGH */
    PG1EVTH = 0x0000;
    PG1EVTHbits.FLTIEN = 0;        // PCI Fault Interrupt Enable bit: Fault interrupt is disabled
    PG1EVTHbits.CLIEN = 0;         // PCI Current Limit Interrupt Enable bit: Current limit interrupt is disabled
    PG1EVTHbits.FFIEN = 0;         // PCI Feed-Forward Interrupt Enable bit: Feed-forward interrupt is disabled
    PG1EVTHbits.SIEN = 0;          // PCI Sync Interrupt Enable bit: Sync interrupt is disabled
    PG1EVTHbits.IEVTSEL = 0b00;    // Interrupt Event Selection bits: Interrupts CPU at EOC
    PG1EVTHbits.ADTR2EN3 = 0;      // ADC Trigger 2 Source is PG1TRIGC Compare Event Enable bit: PG1TRIGC register compare event is disabled as trigger source for ADC Trigger 2
    PG1EVTHbits.ADTR2EN2 = 0;      // ADC Trigger 2 Source is PG1TRIGB Compare Event Enable bit: PG1TRIGB register compare event is disabled as trigger source for ADC Trigger 2
    PG1EVTHbits.ADTR2EN1 = 0;      // ADC Trigger 2 Source is PG1TRIGA Compare Event Enable bit: PG1TRIGA register compare event is disabled as trigger source for ADC Trigger 2       
    PG1EVTHbits.ADTR1OFS = 0b00000;// ADC Trigger 1 Offset Selection bits: No offset
    
    /*Reset further PCI control registers */
    PG1CLPCIH       = 0x0000;          // PWM GENERATOR CL PCI REGISTER HIGH (not used)
    PG1CLPCIL       = 0x0000;          // PWM GENERATOR CL PCI REGISTER LOW  (not used)
    PG1FPCIH        = 0x0000;          // PWM GENERATOR F  PCI REGISTER HIGH (not used)
    PG1FPCIL        = 0x0000;          // PWM GENERATOR F  PCI REGISTER LOW  (not used)
    PG1FFPCIH       = 0x0000;          // PWM GENERATOR FF PCI REGISTER HIGH (not used)
    PG1FFPCIL       = 0x0000;          // PWM GENERATOR FF PCI REGISTER LOW  (not used)
    PG1SPCIH        = 0x0000;          // PWM GENERATOR S  PCI REGISTER HIGH (not used)
    PG1SPCIL        = 0x0000;          // PWM GENERATOR S  PCI REGISTER LOW  (not used)
    
    /*PWM GENERATOR x LEADING-EDGE BLANKING REGISTER HIGH/LOW */
    PG1LEBH     = 0x0000;   // Leading Edge Blanking not used
    PG1LEBL     = 0x0000;   // Leading Edge Blanking not used
    
    /* PGxPHASE: PWM GENERATOR x PHASE REGISTER */
    PG1PHASE    = 0;
    
    /*PGxDC: PWM GENERATOR x DUTY CYCLE REGISTER */
    PG1DC       = PWM_DUTY_CYCLE;     
    
    /* PGxDCA: PWM GENERATOR x DUTY CYCLE ADJUSTMENT REGISTER */
    PG1DCA      = 0x0000;      
    
    /* PGxPER: PWM GENERATOR x PERIOD REGISTER  */       
    PG1PER      = PWM_PERIOD;   

    /*PGxTRIGA: PWM GENERATOR x TRIGGER A REGISTER */
    PG1TRIGA    = 0;  
    
    /* PGxTRIGB: PWM GENERATOR x TRIGGER B REGISTER */      
    PG1TRIGB    = 0;
    
    /* PGxTRIGC: PWM GENERATOR x TRIGGER C REGISTER */        
    PG1TRIGC    = 0;  
    
    /* PGxDTL: PWM GENERATOR x DEAD-TIME REGISTER LOW */       
    PG1DTL      = 0;
    
    /*PGxDTH: PWM GENERATOR x DEAD-TIME REGISTER */
    PG1DTH      = 0;      
             
   
    PG1CONLbits.ON = 1;   // Enable PG1  
    
    return(1);
}
  