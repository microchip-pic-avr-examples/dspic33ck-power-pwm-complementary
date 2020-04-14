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

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_PWM_H
#define	XC_PWM_H

#include <xc.h> // include processor files - each processor file is guarded.  


// *****************************************************************************
// *****************************************************************************
// Section: Functions Prototype
// *****************************************************************************
// *****************************************************************************

extern  volatile uint16_t PWM_Initialize(void);  


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

// GENERIC PWM MODULE SPECIAL FUNCTION REGISTER SET
//    
//  This register set of the PWM module is obsolete as there is only one
//  per device. Providing a 'virtual' register set is therefore not
//  required.
//    
//#ifndef P33C_PWM_MODULE_t     
//    typedef struct {
//        volatile uint16_t PCLKCON;  // PCLKCON: PWM CLOCK CONTROL REGISTER
//        volatile uint16_t FSCL;     // FSCL: FREQUENCY SCALE REGISTER
//        volatile uint16_t FSMINPER; // FSMINPER: FREQUENCY SCALING MINIMUM PERIOD REGISTER
//        volatile uint16_t MPHASE;   // MPHASE: MASTER PHASE REGISTER
//        volatile uint16_t MDC;      // MDC: MASTER DUTY CYCLE REGISTER
//        volatile uint16_t MPER;     // MPER: MASTER PERIOD REGISTER
//        volatile uint16_t LFSR;     // LFSR: LINEAR FEEDBACK SHIFT REGISTER
//        volatile uint16_t CMBTRIGL; // CMBTRIGL: COMBINATIONAL TRIGGER REGISTER LOW
//        volatile uint16_t CMBTRIGH; // CMBTRIGH: COMBINATIONAL TRIGGER REGISTER HIGH
//        volatile uint16_t LOGCONA;  // LOGCONy: COMBINATORIAL PWM LOGIC CONTROL REGISTER y
//        volatile uint16_t LOGCONB;  // LOGCONy: COMBINATORIAL PWM LOGIC CONTROL REGISTER y
//        volatile uint16_t LOGCONC;  // LOGCONy: COMBINATORIAL PWM LOGIC CONTROL REGISTER y
//        volatile uint16_t LOGCOND;  // LOGCONy: COMBINATORIAL PWM LOGIC CONTROL REGISTER y
//        volatile uint16_t LOGCONE;  // LOGCONy: COMBINATORIAL PWM LOGIC CONTROL REGISTER y
//        volatile uint16_t LOGCONF;  // LOGCONy: COMBINATORIAL PWM LOGIC CONTROL REGISTER y
//        volatile uint16_t PWMEVTA;  // PWMEVTy: PWM EVENT OUTPUT CONTROL REGISTER y
//        volatile uint16_t PWMEVTB;  // PWMEVTy: PWM EVENT OUTPUT CONTROL REGISTER y
//        volatile uint16_t PWMEVTC;  // PWMEVTy: PWM EVENT OUTPUT CONTROL REGISTER y
//        volatile uint16_t PWMEVTD;  // PWMEVTy: PWM EVENT OUTPUT CONTROL REGISTER y
//        volatile uint16_t PWMEVTE;  // PWMEVTy: PWM EVENT OUTPUT CONTROL REGISTER y
//        volatile uint16_t PWMEVTF;  // PWMEVTy: PWM EVENT OUTPUT CONTROL REGISTER y
//    } __attribute__((packed)) P33C_PWM_MODULE_t; // PWM MODULE REGISTER SET
//#endif

    
/* GENERIC PWM GENERATOR SPECIAL FUNCTION REGISTER SET
 * ===================================================
 * 
 * Direct addressing of Special Function Registers (SFR) in user code is good 
 * enough for a specific application but makes it harder to maintain the code 
 * r migrate the code from one hardware to another. 
 * 
 * Especially with complex configurations with multiple dependencies across various 
 * peripherals, migrating configurations ca become very challenging to review, debug 
 * and migrate. 
 * 
 * Therefore this PWM configuration example uses a 'virtual PWM generator' to set up 
 * the required PWM configuration but provides a function allowing users to write this 
 * configuration of any PWM generator of choice.
 * 
 * The data types used for each SFR in the P33C_PWM_GENERATOR_t data structure below,
 * are data types declared in the common C-header file of the device (e.g. <d33CK256MP506.h>). 
 * These header files are provided with the XC16 C-Compiler installation and don't have to be 
 * written manually. 
 * 
 */
    
#ifndef P33C_PWM_GENERATOR_t     

    typedef struct {
        union {   
            volatile PG1CONLBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxCONL; // PGxCONH: PWM GENERATOR x CONTROL REGISTER HIGH
        union {
            volatile PG1CONHBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxCONH; // PGxCONH: PWM GENERATOR x CONTROL REGISTER HIGH
        union {
            volatile PG1STATBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxSTAT; // PGxSTAT: PWM GENERATOR x STATUS REGISTER
        union {
            volatile PG1IOCONLBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxIOCONL; // PGxIOCONL: PWM GENERATOR x I/O CONTROL REGISTER LOW
        union {
            volatile PG1IOCONHBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        } PGxIOCONH; // PGxIOCONH: PWM GENERATOR x I/O CONTROL REGISTER HIGH
        union {
            volatile PG1EVTLBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxEVTL;  // PGxEVTL: PWM GENERATOR x EVENT REGISTER LOW
        union {
            volatile PG1EVTHBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxEVTH;  // PGxEVTH: PWM GENERATOR x EVENT REGISTER HIGH
        union {
            volatile PG1FPCILBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxFPCIL; // PGxFPCIL: PWM GENERATOR x FAULT PCI REGISTER LOW
        union {
            volatile PG1FPCIHBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxFPCIH; // PGxFPCIH: PWM GENERATOR x FAULT PCI REGISTER HIGH
        union {
            volatile PG1CLPCILBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxCLPCIL; // PGxCLPCIL: PWM GENERATOR x CURRENT LIMIT PCI REGISTER LOW
        union {
            volatile PG1CLPCIHBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxCLPCIH; // PGxCLPCIH: PWM GENERATOR x CURRENT LIMIT PCI REGISTER HIGH
        union {
            volatile PG1FFPCILBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxFFPCIL; // PGxFFPCIL: PWM GENERATOR x FEED FORWARD PCI REGISTER LOW
        union {
            volatile PG1FFPCIHBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxFFPCIH; // PGxFFPCIH: PWM GENERATOR x FEED FORWARD PCI REGISTER HIGH
        union {
            volatile PG1SPCILBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxSPCIL; // PGxSPCIL: PWM GENERATOR x SOFTWARE PCI REGISTER LOW
        union {
            volatile PG1SPCIHBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxSPCIH; // PGxSPCIH: PWM GENERATOR x SOFTWARE PCI REGISTER HIGH
        union {
            struct {
                volatile uint16_t LEBL : 16; // Register bit-field
            } bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxLEBL;  // PGxLEBL: PWM GENERATOR x LEADING-EDGE BLANKING REGISTER LOW
        union {
            volatile PG1LEBHBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxLEBH;  // PGxLEBH: PWM GENERATOR x LEADING-EDGE BLANKING REGISTER HIGH
        union {
            struct {
                volatile uint16_t PHASE : 16; // Register bit-field
            } bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxPHASE; // PGxPHASE: PWM GENERATOR x PHASE REGISTER
        union {
            struct {
                volatile uint16_t DC : 16; // Register bit-field
            } bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxDC;    // PGxDC: PWM GENERATOR x DUTY CYCLE REGISTER
        union {
            volatile PG1DCABITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxDCA;   // PGxDCA: PWM GENERATOR x DUTY CYCLE ADJUSTMENT REGISTER
        union {
            struct {
                volatile uint16_t PER : 16; // Register bit-field
            } bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxPER;   // PGxPER: PWM GENERATOR x PERIOD REGISTER
        union {
            struct {
                volatile uint16_t TRIG : 16; // Register bit-field
            } bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxTRIGA; // PGxTRIGA: PWM GENERATOR x TRIGGER A REGISTER
        union {
            struct {
                volatile uint16_t TRIG : 16; // Register bit-field
            } bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxTRIGB; // PGxTRIGB: PWM GENERATOR x TRIGGER B REGISTER
        union {
            struct {
                volatile uint16_t TRIG : 16; // Register bit-field
            } bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxTRIGC; // PGxTRIGC: PWM GENERATOR x TRIGGER C REGISTER
        union {
            volatile PG1DTLBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxDTL;   // PGxDTL: PWM GENERATOR x DEAD-TIME REGISTER LOW
        union {
            volatile PG1DTHBITS bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxDTH;   // PGxDTH: PWM GENERATOR x DEAD-TIME REGISTER HIGH
        union {
            struct {
                volatile uint16_t CAP : 16; // Register bit-field
            } bits; // Register bit-field
            volatile uint16_t value; // 16-bit wide register value
        }PGxCAP;   // PGxCAP: PWM GENERATOR x CAPTURE REGISTER
        
    } __attribute__((packed)) P33C_PWM_GENERATOR_t; // PWM INSTANCE REGISTER SET
    #define P33C_PWMGEN_SFR_OFFSET  ((volatile uint16_t)&PG2CONL - (volatile uint16_t)&PG1CONL)
#endif
    
    
extern volatile P33C_PWM_GENERATOR_t PG_Write(volatile uint16_t pwm_instance, volatile P33C_PWM_GENERATOR_t pg_config);
extern volatile P33C_PWM_GENERATOR_t PG_Read(volatile uint16_t pwm_instance);    

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */
