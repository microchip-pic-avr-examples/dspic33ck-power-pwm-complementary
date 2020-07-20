/* ***********************************************************************************************
 * File:        DM330029_R20_R20_pinmap.h                                                             
 * Author:      M91406                                                                         
 * Comments:    Hardware abstraction layer device pinout descriptor                                
 * Board ID:    DM330029_R20                                                                       
 * Date:        02/20/2020                                                                             
 * Build:       0039                                                                       
 * Build Tool:  1.2                                                                                
 *                                                                                                 
 * Description:                                                                                    
 * This is a header file template adding signal labels for the hardware abstraction layer          
 * In this example user defined signals are directly associated to specific device pins.           
 * These associations have been created using the MS Excel macro-based code generation tool        
 * MyBoard_RXX_pinout.xlsm located in the h/hal/config directory of the project.                   
 *                                                                                                 
 * Note:                                                                                           
 * This file is the junction point between hardware and microcontroller abstraction layer.         
 * To better separate them from each other (e.g. for supporting CPU cards in hardware platforms),  
 * generic signal labels may be used in these declarations, which can be used to associate MCU     
 * device pins in MCAL to signals defined in HAL.                                                  
 *                                                                                     
 * EXAMPLE OF BOTH USE CASES                                                           
 *                                                                                     
 * a) Direct pin assignment using ONE header file in HAL                               
 *                                                                                     
 *  File:       MyBoard_RXX_pinmap.h                                                   
 * -----------------------------------------------------------------------             
 *                                                                                     
 *              #define CLKOUT  _LATB1                                                 
 *                                                                                     
 * Any usage of the label CLKOUT in user code will automatically be mapped to the      
 * specific device pin RB1. Thus board hardware and MCU itself become independent,     
 * exchangeable elements in the firmware and pin-out changes made won't affect         
 * the rest of the firmware.                                                           
 *                                                                                     
 * However, although this assignment simplifies the hardware abstraction, HAL and MCAL 
 * are not clearly separated as MCU specific registers are assigned here.              
 *                                                                                     
 *                                                                                     
 * b) Indirect pin assignment using TWO header files in HAL and MCAL                   
 *          
 *  File:       MyBoard_RXX_pinmap.h            MyController_pinmap.h                  
 * -----------------------------------------------------------------------             
 *          
 *              #define CLKOUT  TP08            #define TP08    _LATB1                 
 *     
 * Any usage of the label CLKOUT in user code will automatically be mapped to the          
 * specific device pin RB1. Thus board hardware, MCU adapter card and MCU itself become    
 * independent, exchangeable elements in the firmware and changes made here won't affect   
 * the rest of the firmware.                                                           
 *                                                                                     
 * This functional assignment scheme clearly separates HAL and MCAL, but adds more complexity  
 * to the structure. This scheme works best when working with CPU adapter cards like   
 * Microchip's Digital Power Plug-In Modules.                                          
 *                                                                                     
 *                                                                                     
 * ***********************************************************************************************/    
// This is a guard condition so that contents of this file are not included
// more than once.
#ifndef __DM330029_R20_R20_PINMAP_H__
#define __DM330029_R20_R20_PINMAP_H__

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

#include "hal.h"

/* @@PNMAP_VERSION
 * ***********************************************************************************************
 * Description:
 * This flag is a user defined flag helping to provide version information about the
 * pinmap file. This string can be used universally across the firmware to identify the
 * hardware version this firmware was written for.
 *
 * Please Note:
 * His label is not connected to the generic macro specified in the compiler settings
 * and need to maintained by the designer independently.
 * ***********************************************************************************************/

#define DM330029_PINMAP_VERSION  "R20"

/* ***********************************************************************************************/

// Generated Content: Generic defines used to map device pins to board signals
#ifndef PINDIR_INPUT
    #define PINDIR_INPUT 1
#endif
#ifndef PINDIR_OUTPUT
    #define PINDIR_OUTPUT 0
#endif

#ifndef PINSTATE_HIGH
    #define PINSTATE_HIGH 1
#endif
#ifndef PINSTATE_LOW
    #define PINSTATE_LOW 0
#endif

#ifndef PINCFG_OPEN_DRAIN
    #define PINCFG_OPEN_DRAIN 1
#endif
#ifndef PINCFG_PUSH_PULL
    #define PINCFG_PUSH_PULL 0
#endif

#ifndef LED_ON
    #define LED_ON 0
#endif
#ifndef LED_OFF
    #define LED_OFF 1
#endif

#ifndef SW_PRESSED
    #define SW_PRESSED 0
#endif
#ifndef SW_OPEN
    #define SW_OPEN 1
#endif

// Device Pin #1 is VSS

// Device Pin #2 is VSS

// Device Pin #3 is TP03
#define TP03_TRIS    ECP03_TRIS // GPIO direction register bit
#define TP03_Write() ECP03_Write() // GPIO port latch register bit
#define TP03_Read()  ECP03_Read() // GPIO port register bit
#define TP03_ODC     ECP03_ODC // GPIO port open drain configuration register bit
#define TP03_CNPU    ECP03_CNPU // GPIO port pull-up resistor register bit
#define TP03_CNPD    ECP03_CNPD // GPIO port pull-down resistor register bit
#define TP03_CNEN0   ECP03_CNEN0 // GPIO port change notification Enable register bit
#define TP03_CNSTAT  ECP03_CNSTAT // GPIO port change notification Status register bit
#define TP03_CNEN1   ECP03_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP03_CNF     ECP03_CNF // GPIO port change notification flag bit register bit
#if defined ECP03_RP
  #define TP03_RP       ECP03_RP // Number of Remappable Pin
  #define _TP03_RPxR    ECP03_RPxR // Remappable Pin Register
#endif
#define TP03_Set()    ECP03_Set() 
#define TP03_Clear()  ECP03_Clear()
#define TP03_Toggle() ECP03_Toggle() 
#define TP03_IS_ANALOG_INPUT    ECP03_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP03_ANSEL
  #define TP03_ANSEL          ECP03_ANSEL            // analog/digital pin configuration register bit
  #define TP03_ADCCORE        ECP03_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP03_IS_SHARED_CORE ECP03_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP03_ADC_AN_INPUT   ECP03_ADC_AN_INPUT     // ANx input pin number
  #define TP03_ADCBUF         ECP03_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP03_ADC_ANIE ADIELbits.IE      ECP03_ADC_ANIE ADIELbits.IE
  #define TP03_ADC_ANEIE ADEIELbits.EIEN  ECP03_ADC_ANEIE ADEIELbits.EIEN
  #define TP03_ADC_IF         ECP03_ADC_IF           // interrupt flag bit
  #define TP03_ADC_IE         ECP03_ADC_IE           // interrupt enable bit
  #define TP03_ADC_IP         ECP03_ADC_IP           // interrupt priority for this analog input
  #define TP03_ADC_RDY        ECP03_ADC_RDY          // ADC buffer ready bit
  #define _TP03_ADC_Interrupt ECP03_ADC_Interrupt   
  #define TP03_INIT_ANALOG    ECP03_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP03_InitAsOutput()   ECP03_InitAsOutput()             // initialization macro for digital output
#define TP03_InitAsInput()    ECP03_InitAsInput()              // initialization macro for digital input
#if defined (ECP03_PGx_CHANNEL)
  #define TP03_PGx_CHANNEL      ECP03_PGx_CHANNEL // PWM channel index
  #define TP03_PGx_PER          TP03_PGx_PER // PWM channel period register
  #define TP03_PGx_PHASE        TP03_PGx_PHASE // PWM channel phase register
  #define TP03_PGx_DC           TP03_PGx_DC // PWM channel duty cycle register
  #define TP03_PGx_DCA          TP03_PGx_DCA // PWM channel duty cycle A register
  #define TP03_PGx_DTH          TP03_PGx_DTH // PWM channel rising edge dead time register
  #define TP03_PGx_DTL          TP03_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP03_PGx_OVRENH)
    #define TP03_PGx_OVRENH       ECP03_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP03_PGx_PENH         ECP03_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP03_PGx_OVRENL)
    #define TP03_PGx_OVRENL       ECP03_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP03_PGx_PENL         ECP03_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP03_PGxUPDREQ        ECP03_PGxUPDREQ // PWM channel register update request 
  #define TP03_PGxTRIGA         ECP03_PGxTRIGA // PWM channel ADC trigger A register
  #define TP03_PGxTRIGB         ECP03_PGxTRIGB // PWM channel ADC trigger B register
  #define TP03_PGxTRIGC         ECP03_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP03_PWM_IF)
    #define TP03_PWM_IF         ECP03_PWM_IF  // interrupt flag bit
    #define TP03_PWM_IE         ECP03_PWM_IE  // interrupt enable bit
    #define TP03_PWM_IP         ECP03_PWM_IP  // interrupt priority for this analog input
    #define _TP03_PWM_Interrupt ECP03_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #4 is TP04
#define TP04_TRIS    ECP04_TRIS // GPIO direction register bit
#define TP04_Write() ECP04_Write() // GPIO port latch register bit
#define TP04_Read()  ECP04_Read() // GPIO port register bit
#define TP04_ODC     ECP04_ODC // GPIO port open drain configuration register bit
#define TP04_CNPU    ECP04_CNPU // GPIO port pull-up resistor register bit
#define TP04_CNPD    ECP04_CNPD // GPIO port pull-down resistor register bit
#define TP04_CNEN0   ECP04_CNEN0 // GPIO port change notification Enable register bit
#define TP04_CNSTAT  ECP04_CNSTAT // GPIO port change notification Status register bit
#define TP04_CNEN1   ECP04_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP04_CNF     ECP04_CNF // GPIO port change notification flag bit register bit
#if defined ECP04_RP
  #define TP04_RP       ECP04_RP // Number of Remappable Pin
  #define _TP04_RPxR    ECP04_RPxR // Remappable Pin Register
#endif
#define TP04_Set()    ECP04_Set() 
#define TP04_Clear()  ECP04_Clear()
#define TP04_Toggle() ECP04_Toggle() 
#define TP04_IS_ANALOG_INPUT    ECP04_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP04_ANSEL
  #define TP04_ANSEL          ECP04_ANSEL            // analog/digital pin configuration register bit
  #define TP04_ADCCORE        ECP04_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP04_IS_SHARED_CORE ECP04_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP04_ADC_AN_INPUT   ECP04_ADC_AN_INPUT     // ANx input pin number
  #define TP04_ADCBUF         ECP04_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP04_ADC_ANIE ADIELbits.IE      ECP04_ADC_ANIE ADIELbits.IE
  #define TP04_ADC_ANEIE ADEIELbits.EIEN  ECP04_ADC_ANEIE ADEIELbits.EIEN
  #define TP04_ADC_IF         ECP04_ADC_IF           // interrupt flag bit
  #define TP04_ADC_IE         ECP04_ADC_IE           // interrupt enable bit
  #define TP04_ADC_IP         ECP04_ADC_IP           // interrupt priority for this analog input
  #define TP04_ADC_RDY        ECP04_ADC_RDY          // ADC buffer ready bit
  #define _TP04_ADC_Interrupt ECP04_ADC_Interrupt   
  #define TP04_INIT_ANALOG    ECP04_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP04_InitAsOutput()   ECP04_InitAsOutput()             // initialization macro for digital output
#define TP04_InitAsInput()    ECP04_InitAsInput()              // initialization macro for digital input
#if defined (ECP04_PGx_CHANNEL)
  #define TP04_PGx_CHANNEL      ECP04_PGx_CHANNEL // PWM channel index
  #define TP04_PGx_PER          TP04_PGx_PER // PWM channel period register
  #define TP04_PGx_PHASE        TP04_PGx_PHASE // PWM channel phase register
  #define TP04_PGx_DC           TP04_PGx_DC // PWM channel duty cycle register
  #define TP04_PGx_DCA          TP04_PGx_DCA // PWM channel duty cycle A register
  #define TP04_PGx_DTH          TP04_PGx_DTH // PWM channel rising edge dead time register
  #define TP04_PGx_DTL          TP04_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP04_PGx_OVRENH)
    #define TP04_PGx_OVRENH       ECP04_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP04_PGx_PENH         ECP04_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP04_PGx_OVRENL)
    #define TP04_PGx_OVRENL       ECP04_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP04_PGx_PENL         ECP04_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP04_PGxUPDREQ        ECP04_PGxUPDREQ // PWM channel register update request 
  #define TP04_PGxTRIGA         ECP04_PGxTRIGA // PWM channel ADC trigger A register
  #define TP04_PGxTRIGB         ECP04_PGxTRIGB // PWM channel ADC trigger B register
  #define TP04_PGxTRIGC         ECP04_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP04_PWM_IF)
    #define TP04_PWM_IF         ECP04_PWM_IF  // interrupt flag bit
    #define TP04_PWM_IE         ECP04_PWM_IE  // interrupt enable bit
    #define TP04_PWM_IP         ECP04_PWM_IP  // interrupt priority for this analog input
    #define _TP04_PWM_Interrupt ECP04_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #5 is TP05
#define TP05_TRIS    ECP05_TRIS // GPIO direction register bit
#define TP05_Write() ECP05_Write() // GPIO port latch register bit
#define TP05_Read()  ECP05_Read() // GPIO port register bit
#define TP05_ODC     ECP05_ODC // GPIO port open drain configuration register bit
#define TP05_CNPU    ECP05_CNPU // GPIO port pull-up resistor register bit
#define TP05_CNPD    ECP05_CNPD // GPIO port pull-down resistor register bit
#define TP05_CNEN0   ECP05_CNEN0 // GPIO port change notification Enable register bit
#define TP05_CNSTAT  ECP05_CNSTAT // GPIO port change notification Status register bit
#define TP05_CNEN1   ECP05_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP05_CNF     ECP05_CNF // GPIO port change notification flag bit register bit
#if defined ECP05_RP
  #define TP05_RP       ECP05_RP // Number of Remappable Pin
  #define _TP05_RPxR    ECP05_RPxR // Remappable Pin Register
#endif
#define TP05_Set()    ECP05_Set() 
#define TP05_Clear()  ECP05_Clear()
#define TP05_Toggle() ECP05_Toggle() 
#define TP05_IS_ANALOG_INPUT    ECP05_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP05_ANSEL
  #define TP05_ANSEL          ECP05_ANSEL            // analog/digital pin configuration register bit
  #define TP05_ADCCORE        ECP05_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP05_IS_SHARED_CORE ECP05_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP05_ADC_AN_INPUT   ECP05_ADC_AN_INPUT     // ANx input pin number
  #define TP05_ADCBUF         ECP05_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP05_ADC_ANIE ADIELbits.IE      ECP05_ADC_ANIE ADIELbits.IE
  #define TP05_ADC_ANEIE ADEIELbits.EIEN  ECP05_ADC_ANEIE ADEIELbits.EIEN
  #define TP05_ADC_IF         ECP05_ADC_IF           // interrupt flag bit
  #define TP05_ADC_IE         ECP05_ADC_IE           // interrupt enable bit
  #define TP05_ADC_IP         ECP05_ADC_IP           // interrupt priority for this analog input
  #define TP05_ADC_RDY        ECP05_ADC_RDY          // ADC buffer ready bit
  #define _TP05_ADC_Interrupt ECP05_ADC_Interrupt   
  #define TP05_INIT_ANALOG    ECP05_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP05_InitAsOutput()   ECP05_InitAsOutput()             // initialization macro for digital output
#define TP05_InitAsInput()    ECP05_InitAsInput()              // initialization macro for digital input
#if defined (ECP05_PGx_CHANNEL)
  #define TP05_PGx_CHANNEL      ECP05_PGx_CHANNEL // PWM channel index
  #define TP05_PGx_PER          TP05_PGx_PER // PWM channel period register
  #define TP05_PGx_PHASE        TP05_PGx_PHASE // PWM channel phase register
  #define TP05_PGx_DC           TP05_PGx_DC // PWM channel duty cycle register
  #define TP05_PGx_DCA          TP05_PGx_DCA // PWM channel duty cycle A register
  #define TP05_PGx_DTH          TP05_PGx_DTH // PWM channel rising edge dead time register
  #define TP05_PGx_DTL          TP05_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP05_PGx_OVRENH)
    #define TP05_PGx_OVRENH       ECP05_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP05_PGx_PENH         ECP05_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP05_PGx_OVRENL)
    #define TP05_PGx_OVRENL       ECP05_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP05_PGx_PENL         ECP05_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP05_PGxUPDREQ        ECP05_PGxUPDREQ // PWM channel register update request 
  #define TP05_PGxTRIGA         ECP05_PGxTRIGA // PWM channel ADC trigger A register
  #define TP05_PGxTRIGB         ECP05_PGxTRIGB // PWM channel ADC trigger B register
  #define TP05_PGxTRIGC         ECP05_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP05_PWM_IF)
    #define TP05_PWM_IF         ECP05_PWM_IF  // interrupt flag bit
    #define TP05_PWM_IE         ECP05_PWM_IE  // interrupt enable bit
    #define TP05_PWM_IP         ECP05_PWM_IP  // interrupt priority for this analog input
    #define _TP05_PWM_Interrupt ECP05_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #6 is TP06
#define TP06_TRIS    ECP06_TRIS // GPIO direction register bit
#define TP06_Write() ECP06_Write() // GPIO port latch register bit
#define TP06_Read()  ECP06_Read() // GPIO port register bit
#define TP06_ODC     ECP06_ODC // GPIO port open drain configuration register bit
#define TP06_CNPU    ECP06_CNPU // GPIO port pull-up resistor register bit
#define TP06_CNPD    ECP06_CNPD // GPIO port pull-down resistor register bit
#define TP06_CNEN0   ECP06_CNEN0 // GPIO port change notification Enable register bit
#define TP06_CNSTAT  ECP06_CNSTAT // GPIO port change notification Status register bit
#define TP06_CNEN1   ECP06_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP06_CNF     ECP06_CNF // GPIO port change notification flag bit register bit
#if defined ECP06_RP
  #define TP06_RP       ECP06_RP // Number of Remappable Pin
  #define _TP06_RPxR    ECP06_RPxR // Remappable Pin Register
#endif
#define TP06_Set()    ECP06_Set() 
#define TP06_Clear()  ECP06_Clear()
#define TP06_Toggle() ECP06_Toggle() 
#define TP06_IS_ANALOG_INPUT    ECP06_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP06_ANSEL
  #define TP06_ANSEL          ECP06_ANSEL            // analog/digital pin configuration register bit
  #define TP06_ADCCORE        ECP06_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP06_IS_SHARED_CORE ECP06_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP06_ADC_AN_INPUT   ECP06_ADC_AN_INPUT     // ANx input pin number
  #define TP06_ADCBUF         ECP06_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP06_ADC_ANIE ADIELbits.IE      ECP06_ADC_ANIE ADIELbits.IE
  #define TP06_ADC_ANEIE ADEIELbits.EIEN  ECP06_ADC_ANEIE ADEIELbits.EIEN
  #define TP06_ADC_IF         ECP06_ADC_IF           // interrupt flag bit
  #define TP06_ADC_IE         ECP06_ADC_IE           // interrupt enable bit
  #define TP06_ADC_IP         ECP06_ADC_IP           // interrupt priority for this analog input
  #define TP06_ADC_RDY        ECP06_ADC_RDY          // ADC buffer ready bit
  #define _TP06_ADC_Interrupt ECP06_ADC_Interrupt   
  #define TP06_INIT_ANALOG    ECP06_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP06_InitAsOutput()   ECP06_InitAsOutput()             // initialization macro for digital output
#define TP06_InitAsInput()    ECP06_InitAsInput()              // initialization macro for digital input
#if defined (ECP06_PGx_CHANNEL)
  #define TP06_PGx_CHANNEL      ECP06_PGx_CHANNEL // PWM channel index
  #define TP06_PGx_PER          TP06_PGx_PER // PWM channel period register
  #define TP06_PGx_PHASE        TP06_PGx_PHASE // PWM channel phase register
  #define TP06_PGx_DC           TP06_PGx_DC // PWM channel duty cycle register
  #define TP06_PGx_DCA          TP06_PGx_DCA // PWM channel duty cycle A register
  #define TP06_PGx_DTH          TP06_PGx_DTH // PWM channel rising edge dead time register
  #define TP06_PGx_DTL          TP06_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP06_PGx_OVRENH)
    #define TP06_PGx_OVRENH       ECP06_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP06_PGx_PENH         ECP06_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP06_PGx_OVRENL)
    #define TP06_PGx_OVRENL       ECP06_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP06_PGx_PENL         ECP06_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP06_PGxUPDREQ        ECP06_PGxUPDREQ // PWM channel register update request 
  #define TP06_PGxTRIGA         ECP06_PGxTRIGA // PWM channel ADC trigger A register
  #define TP06_PGxTRIGB         ECP06_PGxTRIGB // PWM channel ADC trigger B register
  #define TP06_PGxTRIGC         ECP06_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP06_PWM_IF)
    #define TP06_PWM_IF         ECP06_PWM_IF  // interrupt flag bit
    #define TP06_PWM_IE         ECP06_PWM_IE  // interrupt enable bit
    #define TP06_PWM_IP         ECP06_PWM_IP  // interrupt priority for this analog input
    #define _TP06_PWM_Interrupt ECP06_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #7 is TP07
#define TP07_TRIS    ECP07_TRIS // GPIO direction register bit
#define TP07_Write() ECP07_Write() // GPIO port latch register bit
#define TP07_Read()  ECP07_Read() // GPIO port register bit
#define TP07_ODC     ECP07_ODC // GPIO port open drain configuration register bit
#define TP07_CNPU    ECP07_CNPU // GPIO port pull-up resistor register bit
#define TP07_CNPD    ECP07_CNPD // GPIO port pull-down resistor register bit
#define TP07_CNEN0   ECP07_CNEN0 // GPIO port change notification Enable register bit
#define TP07_CNSTAT  ECP07_CNSTAT // GPIO port change notification Status register bit
#define TP07_CNEN1   ECP07_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP07_CNF     ECP07_CNF // GPIO port change notification flag bit register bit
#if defined ECP07_RP
  #define TP07_RP       ECP07_RP // Number of Remappable Pin
  #define _TP07_RPxR    ECP07_RPxR // Remappable Pin Register
#endif
#define TP07_Set()    ECP07_Set() 
#define TP07_Clear()  ECP07_Clear()
#define TP07_Toggle() ECP07_Toggle() 
#define TP07_IS_ANALOG_INPUT    ECP07_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP07_ANSEL
  #define TP07_ANSEL          ECP07_ANSEL            // analog/digital pin configuration register bit
  #define TP07_ADCCORE        ECP07_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP07_IS_SHARED_CORE ECP07_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP07_ADC_AN_INPUT   ECP07_ADC_AN_INPUT     // ANx input pin number
  #define TP07_ADCBUF         ECP07_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP07_ADC_ANIE ADIELbits.IE      ECP07_ADC_ANIE ADIELbits.IE
  #define TP07_ADC_ANEIE ADEIELbits.EIEN  ECP07_ADC_ANEIE ADEIELbits.EIEN
  #define TP07_ADC_IF         ECP07_ADC_IF           // interrupt flag bit
  #define TP07_ADC_IE         ECP07_ADC_IE           // interrupt enable bit
  #define TP07_ADC_IP         ECP07_ADC_IP           // interrupt priority for this analog input
  #define TP07_ADC_RDY        ECP07_ADC_RDY          // ADC buffer ready bit
  #define _TP07_ADC_Interrupt ECP07_ADC_Interrupt   
  #define TP07_INIT_ANALOG    ECP07_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP07_InitAsOutput()   ECP07_InitAsOutput()             // initialization macro for digital output
#define TP07_InitAsInput()    ECP07_InitAsInput()              // initialization macro for digital input
#if defined (ECP07_PGx_CHANNEL)
  #define TP07_PGx_CHANNEL      ECP07_PGx_CHANNEL // PWM channel index
  #define TP07_PGx_PER          TP07_PGx_PER // PWM channel period register
  #define TP07_PGx_PHASE        TP07_PGx_PHASE // PWM channel phase register
  #define TP07_PGx_DC           TP07_PGx_DC // PWM channel duty cycle register
  #define TP07_PGx_DCA          TP07_PGx_DCA // PWM channel duty cycle A register
  #define TP07_PGx_DTH          TP07_PGx_DTH // PWM channel rising edge dead time register
  #define TP07_PGx_DTL          TP07_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP07_PGx_OVRENH)
    #define TP07_PGx_OVRENH       ECP07_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP07_PGx_PENH         ECP07_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP07_PGx_OVRENL)
    #define TP07_PGx_OVRENL       ECP07_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP07_PGx_PENL         ECP07_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP07_PGxUPDREQ        ECP07_PGxUPDREQ // PWM channel register update request 
  #define TP07_PGxTRIGA         ECP07_PGxTRIGA // PWM channel ADC trigger A register
  #define TP07_PGxTRIGB         ECP07_PGxTRIGB // PWM channel ADC trigger B register
  #define TP07_PGxTRIGC         ECP07_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP07_PWM_IF)
    #define TP07_PWM_IF         ECP07_PWM_IF  // interrupt flag bit
    #define TP07_PWM_IE         ECP07_PWM_IE  // interrupt enable bit
    #define TP07_PWM_IP         ECP07_PWM_IP  // interrupt priority for this analog input
    #define _TP07_PWM_Interrupt ECP07_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #8 is TP08
#define TP08_TRIS    ECP08_TRIS // GPIO direction register bit
#define TP08_Write() ECP08_Write() // GPIO port latch register bit
#define TP08_Read()  ECP08_Read() // GPIO port register bit
#define TP08_ODC     ECP08_ODC // GPIO port open drain configuration register bit
#define TP08_CNPU    ECP08_CNPU // GPIO port pull-up resistor register bit
#define TP08_CNPD    ECP08_CNPD // GPIO port pull-down resistor register bit
#define TP08_CNEN0   ECP08_CNEN0 // GPIO port change notification Enable register bit
#define TP08_CNSTAT  ECP08_CNSTAT // GPIO port change notification Status register bit
#define TP08_CNEN1   ECP08_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP08_CNF     ECP08_CNF // GPIO port change notification flag bit register bit
#if defined ECP08_RP
  #define TP08_RP       ECP08_RP // Number of Remappable Pin
  #define _TP08_RPxR    ECP08_RPxR // Remappable Pin Register
#endif
#define TP08_Set()    ECP08_Set() 
#define TP08_Clear()  ECP08_Clear()
#define TP08_Toggle() ECP08_Toggle() 
#define TP08_IS_ANALOG_INPUT    ECP08_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP08_ANSEL
  #define TP08_ANSEL          ECP08_ANSEL            // analog/digital pin configuration register bit
  #define TP08_ADCCORE        ECP08_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP08_IS_SHARED_CORE ECP08_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP08_ADC_AN_INPUT   ECP08_ADC_AN_INPUT     // ANx input pin number
  #define TP08_ADCBUF         ECP08_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP08_ADC_ANIE ADIELbits.IE      ECP08_ADC_ANIE ADIELbits.IE
  #define TP08_ADC_ANEIE ADEIELbits.EIEN  ECP08_ADC_ANEIE ADEIELbits.EIEN
  #define TP08_ADC_IF         ECP08_ADC_IF           // interrupt flag bit
  #define TP08_ADC_IE         ECP08_ADC_IE           // interrupt enable bit
  #define TP08_ADC_IP         ECP08_ADC_IP           // interrupt priority for this analog input
  #define TP08_ADC_RDY        ECP08_ADC_RDY          // ADC buffer ready bit
  #define _TP08_ADC_Interrupt ECP08_ADC_Interrupt   
  #define TP08_INIT_ANALOG    ECP08_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP08_InitAsOutput()   ECP08_InitAsOutput()             // initialization macro for digital output
#define TP08_InitAsInput()    ECP08_InitAsInput()              // initialization macro for digital input
#if defined (ECP08_PGx_CHANNEL)
  #define TP08_PGx_CHANNEL      ECP08_PGx_CHANNEL // PWM channel index
  #define TP08_PGx_PER          TP08_PGx_PER // PWM channel period register
  #define TP08_PGx_PHASE        TP08_PGx_PHASE // PWM channel phase register
  #define TP08_PGx_DC           TP08_PGx_DC // PWM channel duty cycle register
  #define TP08_PGx_DCA          TP08_PGx_DCA // PWM channel duty cycle A register
  #define TP08_PGx_DTH          TP08_PGx_DTH // PWM channel rising edge dead time register
  #define TP08_PGx_DTL          TP08_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP08_PGx_OVRENH)
    #define TP08_PGx_OVRENH       ECP08_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP08_PGx_PENH         ECP08_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP08_PGx_OVRENL)
    #define TP08_PGx_OVRENL       ECP08_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP08_PGx_PENL         ECP08_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP08_PGxUPDREQ        ECP08_PGxUPDREQ // PWM channel register update request 
  #define TP08_PGxTRIGA         ECP08_PGxTRIGA // PWM channel ADC trigger A register
  #define TP08_PGxTRIGB         ECP08_PGxTRIGB // PWM channel ADC trigger B register
  #define TP08_PGxTRIGC         ECP08_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP08_PWM_IF)
    #define TP08_PWM_IF         ECP08_PWM_IF  // interrupt flag bit
    #define TP08_PWM_IE         ECP08_PWM_IE  // interrupt enable bit
    #define TP08_PWM_IP         ECP08_PWM_IP  // interrupt priority for this analog input
    #define _TP08_PWM_Interrupt ECP08_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #9 is TP09
#define TP09_TRIS    ECP09_TRIS // GPIO direction register bit
#define TP09_Write() ECP09_Write() // GPIO port latch register bit
#define TP09_Read()  ECP09_Read() // GPIO port register bit
#define TP09_ODC     ECP09_ODC // GPIO port open drain configuration register bit
#define TP09_CNPU    ECP09_CNPU // GPIO port pull-up resistor register bit
#define TP09_CNPD    ECP09_CNPD // GPIO port pull-down resistor register bit
#define TP09_CNEN0   ECP09_CNEN0 // GPIO port change notification Enable register bit
#define TP09_CNSTAT  ECP09_CNSTAT // GPIO port change notification Status register bit
#define TP09_CNEN1   ECP09_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP09_CNF     ECP09_CNF // GPIO port change notification flag bit register bit
#if defined ECP09_RP
  #define TP09_RP       ECP09_RP // Number of Remappable Pin
  #define _TP09_RPxR    ECP09_RPxR // Remappable Pin Register
#endif
#define TP09_Set()    ECP09_Set() 
#define TP09_Clear()  ECP09_Clear()
#define TP09_Toggle() ECP09_Toggle() 
#define TP09_IS_ANALOG_INPUT    ECP09_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP09_ANSEL
  #define TP09_ANSEL          ECP09_ANSEL            // analog/digital pin configuration register bit
  #define TP09_ADCCORE        ECP09_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP09_IS_SHARED_CORE ECP09_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP09_ADC_AN_INPUT   ECP09_ADC_AN_INPUT     // ANx input pin number
  #define TP09_ADCBUF         ECP09_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP09_ADC_ANIE ADIELbits.IE      ECP09_ADC_ANIE ADIELbits.IE
  #define TP09_ADC_ANEIE ADEIELbits.EIEN  ECP09_ADC_ANEIE ADEIELbits.EIEN
  #define TP09_ADC_IF         ECP09_ADC_IF           // interrupt flag bit
  #define TP09_ADC_IE         ECP09_ADC_IE           // interrupt enable bit
  #define TP09_ADC_IP         ECP09_ADC_IP           // interrupt priority for this analog input
  #define TP09_ADC_RDY        ECP09_ADC_RDY          // ADC buffer ready bit
  #define _TP09_ADC_Interrupt ECP09_ADC_Interrupt   
  #define TP09_INIT_ANALOG    ECP09_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP09_InitAsOutput()   ECP09_InitAsOutput()             // initialization macro for digital output
#define TP09_InitAsInput()    ECP09_InitAsInput()              // initialization macro for digital input
#if defined (ECP09_PGx_CHANNEL)
  #define TP09_PGx_CHANNEL      ECP09_PGx_CHANNEL // PWM channel index
  #define TP09_PGx_PER          TP09_PGx_PER // PWM channel period register
  #define TP09_PGx_PHASE        TP09_PGx_PHASE // PWM channel phase register
  #define TP09_PGx_DC           TP09_PGx_DC // PWM channel duty cycle register
  #define TP09_PGx_DCA          TP09_PGx_DCA // PWM channel duty cycle A register
  #define TP09_PGx_DTH          TP09_PGx_DTH // PWM channel rising edge dead time register
  #define TP09_PGx_DTL          TP09_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP09_PGx_OVRENH)
    #define TP09_PGx_OVRENH       ECP09_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP09_PGx_PENH         ECP09_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP09_PGx_OVRENL)
    #define TP09_PGx_OVRENL       ECP09_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP09_PGx_PENL         ECP09_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP09_PGxUPDREQ        ECP09_PGxUPDREQ // PWM channel register update request 
  #define TP09_PGxTRIGA         ECP09_PGxTRIGA // PWM channel ADC trigger A register
  #define TP09_PGxTRIGB         ECP09_PGxTRIGB // PWM channel ADC trigger B register
  #define TP09_PGxTRIGC         ECP09_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP09_PWM_IF)
    #define TP09_PWM_IF         ECP09_PWM_IF  // interrupt flag bit
    #define TP09_PWM_IE         ECP09_PWM_IE  // interrupt enable bit
    #define TP09_PWM_IP         ECP09_PWM_IP  // interrupt priority for this analog input
    #define _TP09_PWM_Interrupt ECP09_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #10 is TP10
#define TP10_TRIS    ECP10_TRIS // GPIO direction register bit
#define TP10_Write() ECP10_Write() // GPIO port latch register bit
#define TP10_Read()  ECP10_Read() // GPIO port register bit
#define TP10_ODC     ECP10_ODC // GPIO port open drain configuration register bit
#define TP10_CNPU    ECP10_CNPU // GPIO port pull-up resistor register bit
#define TP10_CNPD    ECP10_CNPD // GPIO port pull-down resistor register bit
#define TP10_CNEN0   ECP10_CNEN0 // GPIO port change notification Enable register bit
#define TP10_CNSTAT  ECP10_CNSTAT // GPIO port change notification Status register bit
#define TP10_CNEN1   ECP10_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP10_CNF     ECP10_CNF // GPIO port change notification flag bit register bit
#if defined ECP10_RP
  #define TP10_RP       ECP10_RP // Number of Remappable Pin
  #define _TP10_RPxR    ECP10_RPxR // Remappable Pin Register
#endif
#define TP10_Set()    ECP10_Set() 
#define TP10_Clear()  ECP10_Clear()
#define TP10_Toggle() ECP10_Toggle() 
#define TP10_IS_ANALOG_INPUT    ECP10_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP10_ANSEL
  #define TP10_ANSEL          ECP10_ANSEL            // analog/digital pin configuration register bit
  #define TP10_ADCCORE        ECP10_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP10_IS_SHARED_CORE ECP10_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP10_ADC_AN_INPUT   ECP10_ADC_AN_INPUT     // ANx input pin number
  #define TP10_ADCBUF         ECP10_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP10_ADC_ANIE ADIELbits.IE      ECP10_ADC_ANIE ADIELbits.IE
  #define TP10_ADC_ANEIE ADEIELbits.EIEN  ECP10_ADC_ANEIE ADEIELbits.EIEN
  #define TP10_ADC_IF         ECP10_ADC_IF           // interrupt flag bit
  #define TP10_ADC_IE         ECP10_ADC_IE           // interrupt enable bit
  #define TP10_ADC_IP         ECP10_ADC_IP           // interrupt priority for this analog input
  #define TP10_ADC_RDY        ECP10_ADC_RDY          // ADC buffer ready bit
  #define _TP10_ADC_Interrupt ECP10_ADC_Interrupt   
  #define TP10_INIT_ANALOG    ECP10_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP10_InitAsOutput()   ECP10_InitAsOutput()             // initialization macro for digital output
#define TP10_InitAsInput()    ECP10_InitAsInput()              // initialization macro for digital input
#if defined (ECP10_PGx_CHANNEL)
  #define TP10_PGx_CHANNEL      ECP10_PGx_CHANNEL // PWM channel index
  #define TP10_PGx_PER          TP10_PGx_PER // PWM channel period register
  #define TP10_PGx_PHASE        TP10_PGx_PHASE // PWM channel phase register
  #define TP10_PGx_DC           TP10_PGx_DC // PWM channel duty cycle register
  #define TP10_PGx_DCA          TP10_PGx_DCA // PWM channel duty cycle A register
  #define TP10_PGx_DTH          TP10_PGx_DTH // PWM channel rising edge dead time register
  #define TP10_PGx_DTL          TP10_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP10_PGx_OVRENH)
    #define TP10_PGx_OVRENH       ECP10_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP10_PGx_PENH         ECP10_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP10_PGx_OVRENL)
    #define TP10_PGx_OVRENL       ECP10_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP10_PGx_PENL         ECP10_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP10_PGxUPDREQ        ECP10_PGxUPDREQ // PWM channel register update request 
  #define TP10_PGxTRIGA         ECP10_PGxTRIGA // PWM channel ADC trigger A register
  #define TP10_PGxTRIGB         ECP10_PGxTRIGB // PWM channel ADC trigger B register
  #define TP10_PGxTRIGC         ECP10_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP10_PWM_IF)
    #define TP10_PWM_IF         ECP10_PWM_IF  // interrupt flag bit
    #define TP10_PWM_IE         ECP10_PWM_IE  // interrupt enable bit
    #define TP10_PWM_IP         ECP10_PWM_IP  // interrupt priority for this analog input
    #define _TP10_PWM_Interrupt ECP10_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #11 is TP11
#define TP11_TRIS    ECP11_TRIS // GPIO direction register bit
#define TP11_Write() ECP11_Write() // GPIO port latch register bit
#define TP11_Read()  ECP11_Read() // GPIO port register bit
#define TP11_ODC     ECP11_ODC // GPIO port open drain configuration register bit
#define TP11_CNPU    ECP11_CNPU // GPIO port pull-up resistor register bit
#define TP11_CNPD    ECP11_CNPD // GPIO port pull-down resistor register bit
#define TP11_CNEN0   ECP11_CNEN0 // GPIO port change notification Enable register bit
#define TP11_CNSTAT  ECP11_CNSTAT // GPIO port change notification Status register bit
#define TP11_CNEN1   ECP11_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP11_CNF     ECP11_CNF // GPIO port change notification flag bit register bit
#if defined ECP11_RP
  #define TP11_RP       ECP11_RP // Number of Remappable Pin
  #define _TP11_RPxR    ECP11_RPxR // Remappable Pin Register
#endif
#define TP11_Set()    ECP11_Set() 
#define TP11_Clear()  ECP11_Clear()
#define TP11_Toggle() ECP11_Toggle() 
#define TP11_IS_ANALOG_INPUT    ECP11_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP11_ANSEL
  #define TP11_ANSEL          ECP11_ANSEL            // analog/digital pin configuration register bit
  #define TP11_ADCCORE        ECP11_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP11_IS_SHARED_CORE ECP11_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP11_ADC_AN_INPUT   ECP11_ADC_AN_INPUT     // ANx input pin number
  #define TP11_ADCBUF         ECP11_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP11_ADC_ANIE ADIELbits.IE      ECP11_ADC_ANIE ADIELbits.IE
  #define TP11_ADC_ANEIE ADEIELbits.EIEN  ECP11_ADC_ANEIE ADEIELbits.EIEN
  #define TP11_ADC_IF         ECP11_ADC_IF           // interrupt flag bit
  #define TP11_ADC_IE         ECP11_ADC_IE           // interrupt enable bit
  #define TP11_ADC_IP         ECP11_ADC_IP           // interrupt priority for this analog input
  #define TP11_ADC_RDY        ECP11_ADC_RDY          // ADC buffer ready bit
  #define _TP11_ADC_Interrupt ECP11_ADC_Interrupt   
  #define TP11_INIT_ANALOG    ECP11_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP11_InitAsOutput()   ECP11_InitAsOutput()             // initialization macro for digital output
#define TP11_InitAsInput()    ECP11_InitAsInput()              // initialization macro for digital input
#if defined (ECP11_PGx_CHANNEL)
  #define TP11_PGx_CHANNEL      ECP11_PGx_CHANNEL // PWM channel index
  #define TP11_PGx_PER          TP11_PGx_PER // PWM channel period register
  #define TP11_PGx_PHASE        TP11_PGx_PHASE // PWM channel phase register
  #define TP11_PGx_DC           TP11_PGx_DC // PWM channel duty cycle register
  #define TP11_PGx_DCA          TP11_PGx_DCA // PWM channel duty cycle A register
  #define TP11_PGx_DTH          TP11_PGx_DTH // PWM channel rising edge dead time register
  #define TP11_PGx_DTL          TP11_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP11_PGx_OVRENH)
    #define TP11_PGx_OVRENH       ECP11_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP11_PGx_PENH         ECP11_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP11_PGx_OVRENL)
    #define TP11_PGx_OVRENL       ECP11_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP11_PGx_PENL         ECP11_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP11_PGxUPDREQ        ECP11_PGxUPDREQ // PWM channel register update request 
  #define TP11_PGxTRIGA         ECP11_PGxTRIGA // PWM channel ADC trigger A register
  #define TP11_PGxTRIGB         ECP11_PGxTRIGB // PWM channel ADC trigger B register
  #define TP11_PGxTRIGC         ECP11_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP11_PWM_IF)
    #define TP11_PWM_IF         ECP11_PWM_IF  // interrupt flag bit
    #define TP11_PWM_IE         ECP11_PWM_IE  // interrupt enable bit
    #define TP11_PWM_IP         ECP11_PWM_IP  // interrupt priority for this analog input
    #define _TP11_PWM_Interrupt ECP11_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #12 is TP12
#define TP12_TRIS    ECP12_TRIS // GPIO direction register bit
#define TP12_Write() ECP12_Write() // GPIO port latch register bit
#define TP12_Read()  ECP12_Read() // GPIO port register bit
#define TP12_ODC     ECP12_ODC // GPIO port open drain configuration register bit
#define TP12_CNPU    ECP12_CNPU // GPIO port pull-up resistor register bit
#define TP12_CNPD    ECP12_CNPD // GPIO port pull-down resistor register bit
#define TP12_CNEN0   ECP12_CNEN0 // GPIO port change notification Enable register bit
#define TP12_CNSTAT  ECP12_CNSTAT // GPIO port change notification Status register bit
#define TP12_CNEN1   ECP12_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP12_CNF     ECP12_CNF // GPIO port change notification flag bit register bit
#if defined ECP12_RP
  #define TP12_RP       ECP12_RP // Number of Remappable Pin
  #define _TP12_RPxR    ECP12_RPxR // Remappable Pin Register
#endif
#define TP12_Set()    ECP12_Set() 
#define TP12_Clear()  ECP12_Clear()
#define TP12_Toggle() ECP12_Toggle() 
#define TP12_IS_ANALOG_INPUT    ECP12_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP12_ANSEL
  #define TP12_ANSEL          ECP12_ANSEL            // analog/digital pin configuration register bit
  #define TP12_ADCCORE        ECP12_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP12_IS_SHARED_CORE ECP12_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP12_ADC_AN_INPUT   ECP12_ADC_AN_INPUT     // ANx input pin number
  #define TP12_ADCBUF         ECP12_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP12_ADC_ANIE ADIELbits.IE      ECP12_ADC_ANIE ADIELbits.IE
  #define TP12_ADC_ANEIE ADEIELbits.EIEN  ECP12_ADC_ANEIE ADEIELbits.EIEN
  #define TP12_ADC_IF         ECP12_ADC_IF           // interrupt flag bit
  #define TP12_ADC_IE         ECP12_ADC_IE           // interrupt enable bit
  #define TP12_ADC_IP         ECP12_ADC_IP           // interrupt priority for this analog input
  #define TP12_ADC_RDY        ECP12_ADC_RDY          // ADC buffer ready bit
  #define _TP12_ADC_Interrupt ECP12_ADC_Interrupt   
  #define TP12_INIT_ANALOG    ECP12_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP12_InitAsOutput()   ECP12_InitAsOutput()             // initialization macro for digital output
#define TP12_InitAsInput()    ECP12_InitAsInput()              // initialization macro for digital input
#if defined (ECP12_PGx_CHANNEL)
  #define TP12_PGx_CHANNEL      ECP12_PGx_CHANNEL // PWM channel index
  #define TP12_PGx_PER          TP12_PGx_PER // PWM channel period register
  #define TP12_PGx_PHASE        TP12_PGx_PHASE // PWM channel phase register
  #define TP12_PGx_DC           TP12_PGx_DC // PWM channel duty cycle register
  #define TP12_PGx_DCA          TP12_PGx_DCA // PWM channel duty cycle A register
  #define TP12_PGx_DTH          TP12_PGx_DTH // PWM channel rising edge dead time register
  #define TP12_PGx_DTL          TP12_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP12_PGx_OVRENH)
    #define TP12_PGx_OVRENH       ECP12_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP12_PGx_PENH         ECP12_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP12_PGx_OVRENL)
    #define TP12_PGx_OVRENL       ECP12_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP12_PGx_PENL         ECP12_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP12_PGxUPDREQ        ECP12_PGxUPDREQ // PWM channel register update request 
  #define TP12_PGxTRIGA         ECP12_PGxTRIGA // PWM channel ADC trigger A register
  #define TP12_PGxTRIGB         ECP12_PGxTRIGB // PWM channel ADC trigger B register
  #define TP12_PGxTRIGC         ECP12_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP12_PWM_IF)
    #define TP12_PWM_IF         ECP12_PWM_IF  // interrupt flag bit
    #define TP12_PWM_IE         ECP12_PWM_IE  // interrupt enable bit
    #define TP12_PWM_IP         ECP12_PWM_IP  // interrupt priority for this analog input
    #define _TP12_PWM_Interrupt ECP12_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #13 is TP13
#define TP13_TRIS    ECP13_TRIS // GPIO direction register bit
#define TP13_Write() ECP13_Write() // GPIO port latch register bit
#define TP13_Read()  ECP13_Read() // GPIO port register bit
#define TP13_ODC     ECP13_ODC // GPIO port open drain configuration register bit
#define TP13_CNPU    ECP13_CNPU // GPIO port pull-up resistor register bit
#define TP13_CNPD    ECP13_CNPD // GPIO port pull-down resistor register bit
#define TP13_CNEN0   ECP13_CNEN0 // GPIO port change notification Enable register bit
#define TP13_CNSTAT  ECP13_CNSTAT // GPIO port change notification Status register bit
#define TP13_CNEN1   ECP13_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP13_CNF     ECP13_CNF // GPIO port change notification flag bit register bit
#if defined ECP13_RP
  #define TP13_RP       ECP13_RP // Number of Remappable Pin
  #define _TP13_RPxR    ECP13_RPxR // Remappable Pin Register
#endif
#define TP13_Set()    ECP13_Set() 
#define TP13_Clear()  ECP13_Clear()
#define TP13_Toggle() ECP13_Toggle() 
#define TP13_IS_ANALOG_INPUT    ECP13_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP13_ANSEL
  #define TP13_ANSEL          ECP13_ANSEL            // analog/digital pin configuration register bit
  #define TP13_ADCCORE        ECP13_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP13_IS_SHARED_CORE ECP13_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP13_ADC_AN_INPUT   ECP13_ADC_AN_INPUT     // ANx input pin number
  #define TP13_ADCBUF         ECP13_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP13_ADC_ANIE ADIELbits.IE      ECP13_ADC_ANIE ADIELbits.IE
  #define TP13_ADC_ANEIE ADEIELbits.EIEN  ECP13_ADC_ANEIE ADEIELbits.EIEN
  #define TP13_ADC_IF         ECP13_ADC_IF           // interrupt flag bit
  #define TP13_ADC_IE         ECP13_ADC_IE           // interrupt enable bit
  #define TP13_ADC_IP         ECP13_ADC_IP           // interrupt priority for this analog input
  #define TP13_ADC_RDY        ECP13_ADC_RDY          // ADC buffer ready bit
  #define _TP13_ADC_Interrupt ECP13_ADC_Interrupt   
  #define TP13_INIT_ANALOG    ECP13_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP13_InitAsOutput()   ECP13_InitAsOutput()             // initialization macro for digital output
#define TP13_InitAsInput()    ECP13_InitAsInput()              // initialization macro for digital input
#if defined (ECP13_PGx_CHANNEL)
  #define TP13_PGx_CHANNEL      ECP13_PGx_CHANNEL // PWM channel index
  #define TP13_PGx_PER          TP13_PGx_PER // PWM channel period register
  #define TP13_PGx_PHASE        TP13_PGx_PHASE // PWM channel phase register
  #define TP13_PGx_DC           TP13_PGx_DC // PWM channel duty cycle register
  #define TP13_PGx_DCA          TP13_PGx_DCA // PWM channel duty cycle A register
  #define TP13_PGx_DTH          TP13_PGx_DTH // PWM channel rising edge dead time register
  #define TP13_PGx_DTL          TP13_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP13_PGx_OVRENH)
    #define TP13_PGx_OVRENH       ECP13_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP13_PGx_PENH         ECP13_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP13_PGx_OVRENL)
    #define TP13_PGx_OVRENL       ECP13_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP13_PGx_PENL         ECP13_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP13_PGxUPDREQ        ECP13_PGxUPDREQ // PWM channel register update request 
  #define TP13_PGxTRIGA         ECP13_PGxTRIGA // PWM channel ADC trigger A register
  #define TP13_PGxTRIGB         ECP13_PGxTRIGB // PWM channel ADC trigger B register
  #define TP13_PGxTRIGC         ECP13_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP13_PWM_IF)
    #define TP13_PWM_IF         ECP13_PWM_IF  // interrupt flag bit
    #define TP13_PWM_IE         ECP13_PWM_IE  // interrupt enable bit
    #define TP13_PWM_IP         ECP13_PWM_IP  // interrupt priority for this analog input
    #define _TP13_PWM_Interrupt ECP13_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #14 is TP14
#define TP14_TRIS    ECP14_TRIS // GPIO direction register bit
#define TP14_Write() ECP14_Write() // GPIO port latch register bit
#define TP14_Read()  ECP14_Read() // GPIO port register bit
#define TP14_ODC     ECP14_ODC // GPIO port open drain configuration register bit
#define TP14_CNPU    ECP14_CNPU // GPIO port pull-up resistor register bit
#define TP14_CNPD    ECP14_CNPD // GPIO port pull-down resistor register bit
#define TP14_CNEN0   ECP14_CNEN0 // GPIO port change notification Enable register bit
#define TP14_CNSTAT  ECP14_CNSTAT // GPIO port change notification Status register bit
#define TP14_CNEN1   ECP14_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP14_CNF     ECP14_CNF // GPIO port change notification flag bit register bit
#if defined ECP14_RP
  #define TP14_RP       ECP14_RP // Number of Remappable Pin
  #define _TP14_RPxR    ECP14_RPxR // Remappable Pin Register
#endif
#define TP14_Set()    ECP14_Set() 
#define TP14_Clear()  ECP14_Clear()
#define TP14_Toggle() ECP14_Toggle() 
#define TP14_IS_ANALOG_INPUT    ECP14_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP14_ANSEL
  #define TP14_ANSEL          ECP14_ANSEL            // analog/digital pin configuration register bit
  #define TP14_ADCCORE        ECP14_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP14_IS_SHARED_CORE ECP14_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP14_ADC_AN_INPUT   ECP14_ADC_AN_INPUT     // ANx input pin number
  #define TP14_ADCBUF         ECP14_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP14_ADC_ANIE ADIELbits.IE      ECP14_ADC_ANIE ADIELbits.IE
  #define TP14_ADC_ANEIE ADEIELbits.EIEN  ECP14_ADC_ANEIE ADEIELbits.EIEN
  #define TP14_ADC_IF         ECP14_ADC_IF           // interrupt flag bit
  #define TP14_ADC_IE         ECP14_ADC_IE           // interrupt enable bit
  #define TP14_ADC_IP         ECP14_ADC_IP           // interrupt priority for this analog input
  #define TP14_ADC_RDY        ECP14_ADC_RDY          // ADC buffer ready bit
  #define _TP14_ADC_Interrupt ECP14_ADC_Interrupt   
  #define TP14_INIT_ANALOG    ECP14_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP14_InitAsOutput()   ECP14_InitAsOutput()             // initialization macro for digital output
#define TP14_InitAsInput()    ECP14_InitAsInput()              // initialization macro for digital input
#if defined (ECP14_PGx_CHANNEL)
  #define TP14_PGx_CHANNEL      ECP14_PGx_CHANNEL // PWM channel index
  #define TP14_PGx_PER          TP14_PGx_PER // PWM channel period register
  #define TP14_PGx_PHASE        TP14_PGx_PHASE // PWM channel phase register
  #define TP14_PGx_DC           TP14_PGx_DC // PWM channel duty cycle register
  #define TP14_PGx_DCA          TP14_PGx_DCA // PWM channel duty cycle A register
  #define TP14_PGx_DTH          TP14_PGx_DTH // PWM channel rising edge dead time register
  #define TP14_PGx_DTL          TP14_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP14_PGx_OVRENH)
    #define TP14_PGx_OVRENH       ECP14_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP14_PGx_PENH         ECP14_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP14_PGx_OVRENL)
    #define TP14_PGx_OVRENL       ECP14_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP14_PGx_PENL         ECP14_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP14_PGxUPDREQ        ECP14_PGxUPDREQ // PWM channel register update request 
  #define TP14_PGxTRIGA         ECP14_PGxTRIGA // PWM channel ADC trigger A register
  #define TP14_PGxTRIGB         ECP14_PGxTRIGB // PWM channel ADC trigger B register
  #define TP14_PGxTRIGC         ECP14_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP14_PWM_IF)
    #define TP14_PWM_IF         ECP14_PWM_IF  // interrupt flag bit
    #define TP14_PWM_IE         ECP14_PWM_IE  // interrupt enable bit
    #define TP14_PWM_IP         ECP14_PWM_IP  // interrupt priority for this analog input
    #define _TP14_PWM_Interrupt ECP14_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #15 is TP15
#define TP15_TRIS    ECP15_TRIS // GPIO direction register bit
#define TP15_Write() ECP15_Write() // GPIO port latch register bit
#define TP15_Read()  ECP15_Read() // GPIO port register bit
#define TP15_ODC     ECP15_ODC // GPIO port open drain configuration register bit
#define TP15_CNPU    ECP15_CNPU // GPIO port pull-up resistor register bit
#define TP15_CNPD    ECP15_CNPD // GPIO port pull-down resistor register bit
#define TP15_CNEN0   ECP15_CNEN0 // GPIO port change notification Enable register bit
#define TP15_CNSTAT  ECP15_CNSTAT // GPIO port change notification Status register bit
#define TP15_CNEN1   ECP15_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP15_CNF     ECP15_CNF // GPIO port change notification flag bit register bit
#if defined ECP15_RP
  #define TP15_RP       ECP15_RP // Number of Remappable Pin
  #define _TP15_RPxR    ECP15_RPxR // Remappable Pin Register
#endif
#define TP15_Set()    ECP15_Set() 
#define TP15_Clear()  ECP15_Clear()
#define TP15_Toggle() ECP15_Toggle() 
#define TP15_IS_ANALOG_INPUT    ECP15_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP15_ANSEL
  #define TP15_ANSEL          ECP15_ANSEL            // analog/digital pin configuration register bit
  #define TP15_ADCCORE        ECP15_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP15_IS_SHARED_CORE ECP15_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP15_ADC_AN_INPUT   ECP15_ADC_AN_INPUT     // ANx input pin number
  #define TP15_ADCBUF         ECP15_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP15_ADC_ANIE ADIELbits.IE      ECP15_ADC_ANIE ADIELbits.IE
  #define TP15_ADC_ANEIE ADEIELbits.EIEN  ECP15_ADC_ANEIE ADEIELbits.EIEN
  #define TP15_ADC_IF         ECP15_ADC_IF           // interrupt flag bit
  #define TP15_ADC_IE         ECP15_ADC_IE           // interrupt enable bit
  #define TP15_ADC_IP         ECP15_ADC_IP           // interrupt priority for this analog input
  #define TP15_ADC_RDY        ECP15_ADC_RDY          // ADC buffer ready bit
  #define _TP15_ADC_Interrupt ECP15_ADC_Interrupt   
  #define TP15_INIT_ANALOG    ECP15_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP15_InitAsOutput()   ECP15_InitAsOutput()             // initialization macro for digital output
#define TP15_InitAsInput()    ECP15_InitAsInput()              // initialization macro for digital input
#if defined (ECP15_PGx_CHANNEL)
  #define TP15_PGx_CHANNEL      ECP15_PGx_CHANNEL // PWM channel index
  #define TP15_PGx_PER          TP15_PGx_PER // PWM channel period register
  #define TP15_PGx_PHASE        TP15_PGx_PHASE // PWM channel phase register
  #define TP15_PGx_DC           TP15_PGx_DC // PWM channel duty cycle register
  #define TP15_PGx_DCA          TP15_PGx_DCA // PWM channel duty cycle A register
  #define TP15_PGx_DTH          TP15_PGx_DTH // PWM channel rising edge dead time register
  #define TP15_PGx_DTL          TP15_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP15_PGx_OVRENH)
    #define TP15_PGx_OVRENH       ECP15_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP15_PGx_PENH         ECP15_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP15_PGx_OVRENL)
    #define TP15_PGx_OVRENL       ECP15_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP15_PGx_PENL         ECP15_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP15_PGxUPDREQ        ECP15_PGxUPDREQ // PWM channel register update request 
  #define TP15_PGxTRIGA         ECP15_PGxTRIGA // PWM channel ADC trigger A register
  #define TP15_PGxTRIGB         ECP15_PGxTRIGB // PWM channel ADC trigger B register
  #define TP15_PGxTRIGC         ECP15_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP15_PWM_IF)
    #define TP15_PWM_IF         ECP15_PWM_IF  // interrupt flag bit
    #define TP15_PWM_IE         ECP15_PWM_IE  // interrupt enable bit
    #define TP15_PWM_IP         ECP15_PWM_IP  // interrupt priority for this analog input
    #define _TP15_PWM_Interrupt ECP15_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #16 is TP16
#define TP16_TRIS    ECP16_TRIS // GPIO direction register bit
#define TP16_Write() ECP16_Write() // GPIO port latch register bit
#define TP16_Read()  ECP16_Read() // GPIO port register bit
#define TP16_ODC     ECP16_ODC // GPIO port open drain configuration register bit
#define TP16_CNPU    ECP16_CNPU // GPIO port pull-up resistor register bit
#define TP16_CNPD    ECP16_CNPD // GPIO port pull-down resistor register bit
#define TP16_CNEN0   ECP16_CNEN0 // GPIO port change notification Enable register bit
#define TP16_CNSTAT  ECP16_CNSTAT // GPIO port change notification Status register bit
#define TP16_CNEN1   ECP16_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP16_CNF     ECP16_CNF // GPIO port change notification flag bit register bit
#if defined ECP16_RP
  #define TP16_RP       ECP16_RP // Number of Remappable Pin
  #define _TP16_RPxR    ECP16_RPxR // Remappable Pin Register
#endif
#define TP16_Set()    ECP16_Set() 
#define TP16_Clear()  ECP16_Clear()
#define TP16_Toggle() ECP16_Toggle() 
#define TP16_IS_ANALOG_INPUT    ECP16_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP16_ANSEL
  #define TP16_ANSEL          ECP16_ANSEL            // analog/digital pin configuration register bit
  #define TP16_ADCCORE        ECP16_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP16_IS_SHARED_CORE ECP16_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP16_ADC_AN_INPUT   ECP16_ADC_AN_INPUT     // ANx input pin number
  #define TP16_ADCBUF         ECP16_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP16_ADC_ANIE ADIELbits.IE      ECP16_ADC_ANIE ADIELbits.IE
  #define TP16_ADC_ANEIE ADEIELbits.EIEN  ECP16_ADC_ANEIE ADEIELbits.EIEN
  #define TP16_ADC_IF         ECP16_ADC_IF           // interrupt flag bit
  #define TP16_ADC_IE         ECP16_ADC_IE           // interrupt enable bit
  #define TP16_ADC_IP         ECP16_ADC_IP           // interrupt priority for this analog input
  #define TP16_ADC_RDY        ECP16_ADC_RDY          // ADC buffer ready bit
  #define _TP16_ADC_Interrupt ECP16_ADC_Interrupt   
  #define TP16_INIT_ANALOG    ECP16_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP16_InitAsOutput()   ECP16_InitAsOutput()             // initialization macro for digital output
#define TP16_InitAsInput()    ECP16_InitAsInput()              // initialization macro for digital input
#if defined (ECP16_PGx_CHANNEL)
  #define TP16_PGx_CHANNEL      ECP16_PGx_CHANNEL // PWM channel index
  #define TP16_PGx_PER          TP16_PGx_PER // PWM channel period register
  #define TP16_PGx_PHASE        TP16_PGx_PHASE // PWM channel phase register
  #define TP16_PGx_DC           TP16_PGx_DC // PWM channel duty cycle register
  #define TP16_PGx_DCA          TP16_PGx_DCA // PWM channel duty cycle A register
  #define TP16_PGx_DTH          TP16_PGx_DTH // PWM channel rising edge dead time register
  #define TP16_PGx_DTL          TP16_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP16_PGx_OVRENH)
    #define TP16_PGx_OVRENH       ECP16_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP16_PGx_PENH         ECP16_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP16_PGx_OVRENL)
    #define TP16_PGx_OVRENL       ECP16_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP16_PGx_PENL         ECP16_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP16_PGxUPDREQ        ECP16_PGxUPDREQ // PWM channel register update request 
  #define TP16_PGxTRIGA         ECP16_PGxTRIGA // PWM channel ADC trigger A register
  #define TP16_PGxTRIGB         ECP16_PGxTRIGB // PWM channel ADC trigger B register
  #define TP16_PGxTRIGC         ECP16_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP16_PWM_IF)
    #define TP16_PWM_IF         ECP16_PWM_IF  // interrupt flag bit
    #define TP16_PWM_IE         ECP16_PWM_IE  // interrupt enable bit
    #define TP16_PWM_IP         ECP16_PWM_IP  // interrupt priority for this analog input
    #define _TP16_PWM_Interrupt ECP16_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #17 is TP17
#define TP17_TRIS    ECP17_TRIS // GPIO direction register bit
#define TP17_Write() ECP17_Write() // GPIO port latch register bit
#define TP17_Read()  ECP17_Read() // GPIO port register bit
#define TP17_ODC     ECP17_ODC // GPIO port open drain configuration register bit
#define TP17_CNPU    ECP17_CNPU // GPIO port pull-up resistor register bit
#define TP17_CNPD    ECP17_CNPD // GPIO port pull-down resistor register bit
#define TP17_CNEN0   ECP17_CNEN0 // GPIO port change notification Enable register bit
#define TP17_CNSTAT  ECP17_CNSTAT // GPIO port change notification Status register bit
#define TP17_CNEN1   ECP17_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP17_CNF     ECP17_CNF // GPIO port change notification flag bit register bit
#if defined ECP17_RP
  #define TP17_RP       ECP17_RP // Number of Remappable Pin
  #define _TP17_RPxR    ECP17_RPxR // Remappable Pin Register
#endif
#define TP17_Set()    ECP17_Set() 
#define TP17_Clear()  ECP17_Clear()
#define TP17_Toggle() ECP17_Toggle() 
#define TP17_IS_ANALOG_INPUT    ECP17_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP17_ANSEL
  #define TP17_ANSEL          ECP17_ANSEL            // analog/digital pin configuration register bit
  #define TP17_ADCCORE        ECP17_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP17_IS_SHARED_CORE ECP17_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP17_ADC_AN_INPUT   ECP17_ADC_AN_INPUT     // ANx input pin number
  #define TP17_ADCBUF         ECP17_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP17_ADC_ANIE ADIELbits.IE      ECP17_ADC_ANIE ADIELbits.IE
  #define TP17_ADC_ANEIE ADEIELbits.EIEN  ECP17_ADC_ANEIE ADEIELbits.EIEN
  #define TP17_ADC_IF         ECP17_ADC_IF           // interrupt flag bit
  #define TP17_ADC_IE         ECP17_ADC_IE           // interrupt enable bit
  #define TP17_ADC_IP         ECP17_ADC_IP           // interrupt priority for this analog input
  #define TP17_ADC_RDY        ECP17_ADC_RDY          // ADC buffer ready bit
  #define _TP17_ADC_Interrupt ECP17_ADC_Interrupt   
  #define TP17_INIT_ANALOG    ECP17_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP17_InitAsOutput()   ECP17_InitAsOutput()             // initialization macro for digital output
#define TP17_InitAsInput()    ECP17_InitAsInput()              // initialization macro for digital input
#if defined (ECP17_PGx_CHANNEL)
  #define TP17_PGx_CHANNEL      ECP17_PGx_CHANNEL // PWM channel index
  #define TP17_PGx_PER          TP17_PGx_PER // PWM channel period register
  #define TP17_PGx_PHASE        TP17_PGx_PHASE // PWM channel phase register
  #define TP17_PGx_DC           TP17_PGx_DC // PWM channel duty cycle register
  #define TP17_PGx_DCA          TP17_PGx_DCA // PWM channel duty cycle A register
  #define TP17_PGx_DTH          TP17_PGx_DTH // PWM channel rising edge dead time register
  #define TP17_PGx_DTL          TP17_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP17_PGx_OVRENH)
    #define TP17_PGx_OVRENH       ECP17_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP17_PGx_PENH         ECP17_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP17_PGx_OVRENL)
    #define TP17_PGx_OVRENL       ECP17_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP17_PGx_PENL         ECP17_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP17_PGxUPDREQ        ECP17_PGxUPDREQ // PWM channel register update request 
  #define TP17_PGxTRIGA         ECP17_PGxTRIGA // PWM channel ADC trigger A register
  #define TP17_PGxTRIGB         ECP17_PGxTRIGB // PWM channel ADC trigger B register
  #define TP17_PGxTRIGC         ECP17_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP17_PWM_IF)
    #define TP17_PWM_IF         ECP17_PWM_IF  // interrupt flag bit
    #define TP17_PWM_IE         ECP17_PWM_IE  // interrupt enable bit
    #define TP17_PWM_IP         ECP17_PWM_IP  // interrupt priority for this analog input
    #define _TP17_PWM_Interrupt ECP17_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #18 is TP18
#define TP18_TRIS    ECP18_TRIS // GPIO direction register bit
#define TP18_Write() ECP18_Write() // GPIO port latch register bit
#define TP18_Read()  ECP18_Read() // GPIO port register bit
#define TP18_ODC     ECP18_ODC // GPIO port open drain configuration register bit
#define TP18_CNPU    ECP18_CNPU // GPIO port pull-up resistor register bit
#define TP18_CNPD    ECP18_CNPD // GPIO port pull-down resistor register bit
#define TP18_CNEN0   ECP18_CNEN0 // GPIO port change notification Enable register bit
#define TP18_CNSTAT  ECP18_CNSTAT // GPIO port change notification Status register bit
#define TP18_CNEN1   ECP18_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP18_CNF     ECP18_CNF // GPIO port change notification flag bit register bit
#if defined ECP18_RP
  #define TP18_RP       ECP18_RP // Number of Remappable Pin
  #define _TP18_RPxR    ECP18_RPxR // Remappable Pin Register
#endif
#define TP18_Set()    ECP18_Set() 
#define TP18_Clear()  ECP18_Clear()
#define TP18_Toggle() ECP18_Toggle() 
#define TP18_IS_ANALOG_INPUT    ECP18_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP18_ANSEL
  #define TP18_ANSEL          ECP18_ANSEL            // analog/digital pin configuration register bit
  #define TP18_ADCCORE        ECP18_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP18_IS_SHARED_CORE ECP18_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP18_ADC_AN_INPUT   ECP18_ADC_AN_INPUT     // ANx input pin number
  #define TP18_ADCBUF         ECP18_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP18_ADC_ANIE ADIELbits.IE      ECP18_ADC_ANIE ADIELbits.IE
  #define TP18_ADC_ANEIE ADEIELbits.EIEN  ECP18_ADC_ANEIE ADEIELbits.EIEN
  #define TP18_ADC_IF         ECP18_ADC_IF           // interrupt flag bit
  #define TP18_ADC_IE         ECP18_ADC_IE           // interrupt enable bit
  #define TP18_ADC_IP         ECP18_ADC_IP           // interrupt priority for this analog input
  #define TP18_ADC_RDY        ECP18_ADC_RDY          // ADC buffer ready bit
  #define _TP18_ADC_Interrupt ECP18_ADC_Interrupt   
  #define TP18_INIT_ANALOG    ECP18_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP18_InitAsOutput()   ECP18_InitAsOutput()             // initialization macro for digital output
#define TP18_InitAsInput()    ECP18_InitAsInput()              // initialization macro for digital input
#if defined (ECP18_PGx_CHANNEL)
  #define TP18_PGx_CHANNEL      ECP18_PGx_CHANNEL // PWM channel index
  #define TP18_PGx_PER          TP18_PGx_PER // PWM channel period register
  #define TP18_PGx_PHASE        TP18_PGx_PHASE // PWM channel phase register
  #define TP18_PGx_DC           TP18_PGx_DC // PWM channel duty cycle register
  #define TP18_PGx_DCA          TP18_PGx_DCA // PWM channel duty cycle A register
  #define TP18_PGx_DTH          TP18_PGx_DTH // PWM channel rising edge dead time register
  #define TP18_PGx_DTL          TP18_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP18_PGx_OVRENH)
    #define TP18_PGx_OVRENH       ECP18_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP18_PGx_PENH         ECP18_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP18_PGx_OVRENL)
    #define TP18_PGx_OVRENL       ECP18_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP18_PGx_PENL         ECP18_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP18_PGxUPDREQ        ECP18_PGxUPDREQ // PWM channel register update request 
  #define TP18_PGxTRIGA         ECP18_PGxTRIGA // PWM channel ADC trigger A register
  #define TP18_PGxTRIGB         ECP18_PGxTRIGB // PWM channel ADC trigger B register
  #define TP18_PGxTRIGC         ECP18_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP18_PWM_IF)
    #define TP18_PWM_IF         ECP18_PWM_IF  // interrupt flag bit
    #define TP18_PWM_IE         ECP18_PWM_IE  // interrupt enable bit
    #define TP18_PWM_IP         ECP18_PWM_IP  // interrupt priority for this analog input
    #define _TP18_PWM_Interrupt ECP18_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #19 is TP19
#define TP19_TRIS    ECP19_TRIS // GPIO direction register bit
#define TP19_Write() ECP19_Write() // GPIO port latch register bit
#define TP19_Read()  ECP19_Read() // GPIO port register bit
#define TP19_ODC     ECP19_ODC // GPIO port open drain configuration register bit
#define TP19_CNPU    ECP19_CNPU // GPIO port pull-up resistor register bit
#define TP19_CNPD    ECP19_CNPD // GPIO port pull-down resistor register bit
#define TP19_CNEN0   ECP19_CNEN0 // GPIO port change notification Enable register bit
#define TP19_CNSTAT  ECP19_CNSTAT // GPIO port change notification Status register bit
#define TP19_CNEN1   ECP19_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP19_CNF     ECP19_CNF // GPIO port change notification flag bit register bit
#if defined ECP19_RP
  #define TP19_RP       ECP19_RP // Number of Remappable Pin
  #define _TP19_RPxR    ECP19_RPxR // Remappable Pin Register
#endif
#define TP19_Set()    ECP19_Set() 
#define TP19_Clear()  ECP19_Clear()
#define TP19_Toggle() ECP19_Toggle() 
#define TP19_IS_ANALOG_INPUT    ECP19_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP19_ANSEL
  #define TP19_ANSEL          ECP19_ANSEL            // analog/digital pin configuration register bit
  #define TP19_ADCCORE        ECP19_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP19_IS_SHARED_CORE ECP19_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP19_ADC_AN_INPUT   ECP19_ADC_AN_INPUT     // ANx input pin number
  #define TP19_ADCBUF         ECP19_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP19_ADC_ANIE ADIELbits.IE      ECP19_ADC_ANIE ADIELbits.IE
  #define TP19_ADC_ANEIE ADEIELbits.EIEN  ECP19_ADC_ANEIE ADEIELbits.EIEN
  #define TP19_ADC_IF         ECP19_ADC_IF           // interrupt flag bit
  #define TP19_ADC_IE         ECP19_ADC_IE           // interrupt enable bit
  #define TP19_ADC_IP         ECP19_ADC_IP           // interrupt priority for this analog input
  #define TP19_ADC_RDY        ECP19_ADC_RDY          // ADC buffer ready bit
  #define _TP19_ADC_Interrupt ECP19_ADC_Interrupt   
  #define TP19_INIT_ANALOG    ECP19_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP19_InitAsOutput()   ECP19_InitAsOutput()             // initialization macro for digital output
#define TP19_InitAsInput()    ECP19_InitAsInput()              // initialization macro for digital input
#if defined (ECP19_PGx_CHANNEL)
  #define TP19_PGx_CHANNEL      ECP19_PGx_CHANNEL // PWM channel index
  #define TP19_PGx_PER          TP19_PGx_PER // PWM channel period register
  #define TP19_PGx_PHASE        TP19_PGx_PHASE // PWM channel phase register
  #define TP19_PGx_DC           TP19_PGx_DC // PWM channel duty cycle register
  #define TP19_PGx_DCA          TP19_PGx_DCA // PWM channel duty cycle A register
  #define TP19_PGx_DTH          TP19_PGx_DTH // PWM channel rising edge dead time register
  #define TP19_PGx_DTL          TP19_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP19_PGx_OVRENH)
    #define TP19_PGx_OVRENH       ECP19_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP19_PGx_PENH         ECP19_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP19_PGx_OVRENL)
    #define TP19_PGx_OVRENL       ECP19_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP19_PGx_PENL         ECP19_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP19_PGxUPDREQ        ECP19_PGxUPDREQ // PWM channel register update request 
  #define TP19_PGxTRIGA         ECP19_PGxTRIGA // PWM channel ADC trigger A register
  #define TP19_PGxTRIGB         ECP19_PGxTRIGB // PWM channel ADC trigger B register
  #define TP19_PGxTRIGC         ECP19_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP19_PWM_IF)
    #define TP19_PWM_IF         ECP19_PWM_IF  // interrupt flag bit
    #define TP19_PWM_IE         ECP19_PWM_IE  // interrupt enable bit
    #define TP19_PWM_IP         ECP19_PWM_IP  // interrupt priority for this analog input
    #define _TP19_PWM_Interrupt ECP19_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #20 is TP20
#define TP20_TRIS    ECP20_TRIS // GPIO direction register bit
#define TP20_Write() ECP20_Write() // GPIO port latch register bit
#define TP20_Read()  ECP20_Read() // GPIO port register bit
#define TP20_ODC     ECP20_ODC // GPIO port open drain configuration register bit
#define TP20_CNPU    ECP20_CNPU // GPIO port pull-up resistor register bit
#define TP20_CNPD    ECP20_CNPD // GPIO port pull-down resistor register bit
#define TP20_CNEN0   ECP20_CNEN0 // GPIO port change notification Enable register bit
#define TP20_CNSTAT  ECP20_CNSTAT // GPIO port change notification Status register bit
#define TP20_CNEN1   ECP20_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP20_CNF     ECP20_CNF // GPIO port change notification flag bit register bit
#if defined ECP20_RP
  #define TP20_RP       ECP20_RP // Number of Remappable Pin
  #define _TP20_RPxR    ECP20_RPxR // Remappable Pin Register
#endif
#define TP20_Set()    ECP20_Set() 
#define TP20_Clear()  ECP20_Clear()
#define TP20_Toggle() ECP20_Toggle() 
#define TP20_IS_ANALOG_INPUT    ECP20_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP20_ANSEL
  #define TP20_ANSEL          ECP20_ANSEL            // analog/digital pin configuration register bit
  #define TP20_ADCCORE        ECP20_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP20_IS_SHARED_CORE ECP20_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP20_ADC_AN_INPUT   ECP20_ADC_AN_INPUT     // ANx input pin number
  #define TP20_ADCBUF         ECP20_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP20_ADC_ANIE ADIELbits.IE      ECP20_ADC_ANIE ADIELbits.IE
  #define TP20_ADC_ANEIE ADEIELbits.EIEN  ECP20_ADC_ANEIE ADEIELbits.EIEN
  #define TP20_ADC_IF         ECP20_ADC_IF           // interrupt flag bit
  #define TP20_ADC_IE         ECP20_ADC_IE           // interrupt enable bit
  #define TP20_ADC_IP         ECP20_ADC_IP           // interrupt priority for this analog input
  #define TP20_ADC_RDY        ECP20_ADC_RDY          // ADC buffer ready bit
  #define _TP20_ADC_Interrupt ECP20_ADC_Interrupt   
  #define TP20_INIT_ANALOG    ECP20_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP20_InitAsOutput()   ECP20_InitAsOutput()             // initialization macro for digital output
#define TP20_InitAsInput()    ECP20_InitAsInput()              // initialization macro for digital input
#if defined (ECP20_PGx_CHANNEL)
  #define TP20_PGx_CHANNEL      ECP20_PGx_CHANNEL // PWM channel index
  #define TP20_PGx_PER          TP20_PGx_PER // PWM channel period register
  #define TP20_PGx_PHASE        TP20_PGx_PHASE // PWM channel phase register
  #define TP20_PGx_DC           TP20_PGx_DC // PWM channel duty cycle register
  #define TP20_PGx_DCA          TP20_PGx_DCA // PWM channel duty cycle A register
  #define TP20_PGx_DTH          TP20_PGx_DTH // PWM channel rising edge dead time register
  #define TP20_PGx_DTL          TP20_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP20_PGx_OVRENH)
    #define TP20_PGx_OVRENH       ECP20_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP20_PGx_PENH         ECP20_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP20_PGx_OVRENL)
    #define TP20_PGx_OVRENL       ECP20_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP20_PGx_PENL         ECP20_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP20_PGxUPDREQ        ECP20_PGxUPDREQ // PWM channel register update request 
  #define TP20_PGxTRIGA         ECP20_PGxTRIGA // PWM channel ADC trigger A register
  #define TP20_PGxTRIGB         ECP20_PGxTRIGB // PWM channel ADC trigger B register
  #define TP20_PGxTRIGC         ECP20_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP20_PWM_IF)
    #define TP20_PWM_IF         ECP20_PWM_IF  // interrupt flag bit
    #define TP20_PWM_IE         ECP20_PWM_IE  // interrupt enable bit
    #define TP20_PWM_IP         ECP20_PWM_IP  // interrupt priority for this analog input
    #define _TP20_PWM_Interrupt ECP20_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #23 is TP23
#define TP23_TRIS    ECP23_TRIS // GPIO direction register bit
#define TP23_Write() ECP23_Write() // GPIO port latch register bit
#define TP23_Read()  ECP23_Read() // GPIO port register bit
#define TP23_ODC     ECP23_ODC // GPIO port open drain configuration register bit
#define TP23_CNPU    ECP23_CNPU // GPIO port pull-up resistor register bit
#define TP23_CNPD    ECP23_CNPD // GPIO port pull-down resistor register bit
#define TP23_CNEN0   ECP23_CNEN0 // GPIO port change notification Enable register bit
#define TP23_CNSTAT  ECP23_CNSTAT // GPIO port change notification Status register bit
#define TP23_CNEN1   ECP23_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP23_CNF     ECP23_CNF // GPIO port change notification flag bit register bit
#if defined ECP23_RP
  #define TP23_RP       ECP23_RP // Number of Remappable Pin
  #define _TP23_RPxR    ECP23_RPxR // Remappable Pin Register
#endif
#define TP23_Set()    ECP23_Set() 
#define TP23_Clear()  ECP23_Clear()
#define TP23_Toggle() ECP23_Toggle() 
#define TP23_IS_ANALOG_INPUT    ECP23_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP23_ANSEL
  #define TP23_ANSEL          ECP23_ANSEL            // analog/digital pin configuration register bit
  #define TP23_ADCCORE        ECP23_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP23_IS_SHARED_CORE ECP23_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP23_ADC_AN_INPUT   ECP23_ADC_AN_INPUT     // ANx input pin number
  #define TP23_ADCBUF         ECP23_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP23_ADC_ANIE ADIELbits.IE      ECP23_ADC_ANIE ADIELbits.IE
  #define TP23_ADC_ANEIE ADEIELbits.EIEN  ECP23_ADC_ANEIE ADEIELbits.EIEN
  #define TP23_ADC_IF         ECP23_ADC_IF           // interrupt flag bit
  #define TP23_ADC_IE         ECP23_ADC_IE           // interrupt enable bit
  #define TP23_ADC_IP         ECP23_ADC_IP           // interrupt priority for this analog input
  #define TP23_ADC_RDY        ECP23_ADC_RDY          // ADC buffer ready bit
  #define _TP23_ADC_Interrupt ECP23_ADC_Interrupt   
  #define TP23_INIT_ANALOG    ECP23_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP23_InitAsOutput()   ECP23_InitAsOutput()             // initialization macro for digital output
#define TP23_InitAsInput()    ECP23_InitAsInput()              // initialization macro for digital input
#if defined (ECP23_PGx_CHANNEL)
  #define TP23_PGx_CHANNEL      ECP23_PGx_CHANNEL // PWM channel index
  #define TP23_PGx_PER          TP23_PGx_PER // PWM channel period register
  #define TP23_PGx_PHASE        TP23_PGx_PHASE // PWM channel phase register
  #define TP23_PGx_DC           TP23_PGx_DC // PWM channel duty cycle register
  #define TP23_PGx_DCA          TP23_PGx_DCA // PWM channel duty cycle A register
  #define TP23_PGx_DTH          TP23_PGx_DTH // PWM channel rising edge dead time register
  #define TP23_PGx_DTL          TP23_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP23_PGx_OVRENH)
    #define TP23_PGx_OVRENH       ECP23_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP23_PGx_PENH         ECP23_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP23_PGx_OVRENL)
    #define TP23_PGx_OVRENL       ECP23_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP23_PGx_PENL         ECP23_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP23_PGxUPDREQ        ECP23_PGxUPDREQ // PWM channel register update request 
  #define TP23_PGxTRIGA         ECP23_PGxTRIGA // PWM channel ADC trigger A register
  #define TP23_PGxTRIGB         ECP23_PGxTRIGB // PWM channel ADC trigger B register
  #define TP23_PGxTRIGC         ECP23_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP23_PWM_IF)
    #define TP23_PWM_IF         ECP23_PWM_IF  // interrupt flag bit
    #define TP23_PWM_IE         ECP23_PWM_IE  // interrupt enable bit
    #define TP23_PWM_IP         ECP23_PWM_IP  // interrupt priority for this analog input
    #define _TP23_PWM_Interrupt ECP23_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #24 is TP24
#define TP24_TRIS    ECP24_TRIS // GPIO direction register bit
#define TP24_Write() ECP24_Write() // GPIO port latch register bit
#define TP24_Read()  ECP24_Read() // GPIO port register bit
#define TP24_ODC     ECP24_ODC // GPIO port open drain configuration register bit
#define TP24_CNPU    ECP24_CNPU // GPIO port pull-up resistor register bit
#define TP24_CNPD    ECP24_CNPD // GPIO port pull-down resistor register bit
#define TP24_CNEN0   ECP24_CNEN0 // GPIO port change notification Enable register bit
#define TP24_CNSTAT  ECP24_CNSTAT // GPIO port change notification Status register bit
#define TP24_CNEN1   ECP24_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP24_CNF     ECP24_CNF // GPIO port change notification flag bit register bit
#if defined ECP24_RP
  #define TP24_RP       ECP24_RP // Number of Remappable Pin
  #define _TP24_RPxR    ECP24_RPxR // Remappable Pin Register
#endif
#define TP24_Set()    ECP24_Set() 
#define TP24_Clear()  ECP24_Clear()
#define TP24_Toggle() ECP24_Toggle() 
#define TP24_IS_ANALOG_INPUT    ECP24_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP24_ANSEL
  #define TP24_ANSEL          ECP24_ANSEL            // analog/digital pin configuration register bit
  #define TP24_ADCCORE        ECP24_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP24_IS_SHARED_CORE ECP24_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP24_ADC_AN_INPUT   ECP24_ADC_AN_INPUT     // ANx input pin number
  #define TP24_ADCBUF         ECP24_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP24_ADC_ANIE ADIELbits.IE      ECP24_ADC_ANIE ADIELbits.IE
  #define TP24_ADC_ANEIE ADEIELbits.EIEN  ECP24_ADC_ANEIE ADEIELbits.EIEN
  #define TP24_ADC_IF         ECP24_ADC_IF           // interrupt flag bit
  #define TP24_ADC_IE         ECP24_ADC_IE           // interrupt enable bit
  #define TP24_ADC_IP         ECP24_ADC_IP           // interrupt priority for this analog input
  #define TP24_ADC_RDY        ECP24_ADC_RDY          // ADC buffer ready bit
  #define _TP24_ADC_Interrupt ECP24_ADC_Interrupt   
  #define TP24_INIT_ANALOG    ECP24_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP24_InitAsOutput()   ECP24_InitAsOutput()             // initialization macro for digital output
#define TP24_InitAsInput()    ECP24_InitAsInput()              // initialization macro for digital input
#if defined (ECP24_PGx_CHANNEL)
  #define TP24_PGx_CHANNEL      ECP24_PGx_CHANNEL // PWM channel index
  #define TP24_PGx_PER          TP24_PGx_PER // PWM channel period register
  #define TP24_PGx_PHASE        TP24_PGx_PHASE // PWM channel phase register
  #define TP24_PGx_DC           TP24_PGx_DC // PWM channel duty cycle register
  #define TP24_PGx_DCA          TP24_PGx_DCA // PWM channel duty cycle A register
  #define TP24_PGx_DTH          TP24_PGx_DTH // PWM channel rising edge dead time register
  #define TP24_PGx_DTL          TP24_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP24_PGx_OVRENH)
    #define TP24_PGx_OVRENH       ECP24_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP24_PGx_PENH         ECP24_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP24_PGx_OVRENL)
    #define TP24_PGx_OVRENL       ECP24_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP24_PGx_PENL         ECP24_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP24_PGxUPDREQ        ECP24_PGxUPDREQ // PWM channel register update request 
  #define TP24_PGxTRIGA         ECP24_PGxTRIGA // PWM channel ADC trigger A register
  #define TP24_PGxTRIGB         ECP24_PGxTRIGB // PWM channel ADC trigger B register
  #define TP24_PGxTRIGC         ECP24_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP24_PWM_IF)
    #define TP24_PWM_IF         ECP24_PWM_IF  // interrupt flag bit
    #define TP24_PWM_IE         ECP24_PWM_IE  // interrupt enable bit
    #define TP24_PWM_IP         ECP24_PWM_IP  // interrupt priority for this analog input
    #define _TP24_PWM_Interrupt ECP24_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #25 is TP25
#define TP25_TRIS    ECP25_TRIS // GPIO direction register bit
#define TP25_Write() ECP25_Write() // GPIO port latch register bit
#define TP25_Read()  ECP25_Read() // GPIO port register bit
#define TP25_ODC     ECP25_ODC // GPIO port open drain configuration register bit
#define TP25_CNPU    ECP25_CNPU // GPIO port pull-up resistor register bit
#define TP25_CNPD    ECP25_CNPD // GPIO port pull-down resistor register bit
#define TP25_CNEN0   ECP25_CNEN0 // GPIO port change notification Enable register bit
#define TP25_CNSTAT  ECP25_CNSTAT // GPIO port change notification Status register bit
#define TP25_CNEN1   ECP25_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP25_CNF     ECP25_CNF // GPIO port change notification flag bit register bit
#if defined ECP25_RP
  #define TP25_RP       ECP25_RP // Number of Remappable Pin
  #define _TP25_RPxR    ECP25_RPxR // Remappable Pin Register
#endif
#define TP25_Set()    ECP25_Set() 
#define TP25_Clear()  ECP25_Clear()
#define TP25_Toggle() ECP25_Toggle() 
#define TP25_IS_ANALOG_INPUT    ECP25_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP25_ANSEL
  #define TP25_ANSEL          ECP25_ANSEL            // analog/digital pin configuration register bit
  #define TP25_ADCCORE        ECP25_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP25_IS_SHARED_CORE ECP25_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP25_ADC_AN_INPUT   ECP25_ADC_AN_INPUT     // ANx input pin number
  #define TP25_ADCBUF         ECP25_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP25_ADC_ANIE ADIELbits.IE      ECP25_ADC_ANIE ADIELbits.IE
  #define TP25_ADC_ANEIE ADEIELbits.EIEN  ECP25_ADC_ANEIE ADEIELbits.EIEN
  #define TP25_ADC_IF         ECP25_ADC_IF           // interrupt flag bit
  #define TP25_ADC_IE         ECP25_ADC_IE           // interrupt enable bit
  #define TP25_ADC_IP         ECP25_ADC_IP           // interrupt priority for this analog input
  #define TP25_ADC_RDY        ECP25_ADC_RDY          // ADC buffer ready bit
  #define _TP25_ADC_Interrupt ECP25_ADC_Interrupt   
  #define TP25_INIT_ANALOG    ECP25_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP25_InitAsOutput()   ECP25_InitAsOutput()             // initialization macro for digital output
#define TP25_InitAsInput()    ECP25_InitAsInput()              // initialization macro for digital input
#if defined (ECP25_PGx_CHANNEL)
  #define TP25_PGx_CHANNEL      ECP25_PGx_CHANNEL // PWM channel index
  #define TP25_PGx_PER          TP25_PGx_PER // PWM channel period register
  #define TP25_PGx_PHASE        TP25_PGx_PHASE // PWM channel phase register
  #define TP25_PGx_DC           TP25_PGx_DC // PWM channel duty cycle register
  #define TP25_PGx_DCA          TP25_PGx_DCA // PWM channel duty cycle A register
  #define TP25_PGx_DTH          TP25_PGx_DTH // PWM channel rising edge dead time register
  #define TP25_PGx_DTL          TP25_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP25_PGx_OVRENH)
    #define TP25_PGx_OVRENH       ECP25_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP25_PGx_PENH         ECP25_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP25_PGx_OVRENL)
    #define TP25_PGx_OVRENL       ECP25_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP25_PGx_PENL         ECP25_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP25_PGxUPDREQ        ECP25_PGxUPDREQ // PWM channel register update request 
  #define TP25_PGxTRIGA         ECP25_PGxTRIGA // PWM channel ADC trigger A register
  #define TP25_PGxTRIGB         ECP25_PGxTRIGB // PWM channel ADC trigger B register
  #define TP25_PGxTRIGC         ECP25_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP25_PWM_IF)
    #define TP25_PWM_IF         ECP25_PWM_IF  // interrupt flag bit
    #define TP25_PWM_IE         ECP25_PWM_IE  // interrupt enable bit
    #define TP25_PWM_IP         ECP25_PWM_IP  // interrupt priority for this analog input
    #define _TP25_PWM_Interrupt ECP25_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #26 is TP26
#define TP26_TRIS    ECP26_TRIS // GPIO direction register bit
#define TP26_Write() ECP26_Write() // GPIO port latch register bit
#define TP26_Read()  ECP26_Read() // GPIO port register bit
#define TP26_ODC     ECP26_ODC // GPIO port open drain configuration register bit
#define TP26_CNPU    ECP26_CNPU // GPIO port pull-up resistor register bit
#define TP26_CNPD    ECP26_CNPD // GPIO port pull-down resistor register bit
#define TP26_CNEN0   ECP26_CNEN0 // GPIO port change notification Enable register bit
#define TP26_CNSTAT  ECP26_CNSTAT // GPIO port change notification Status register bit
#define TP26_CNEN1   ECP26_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP26_CNF     ECP26_CNF // GPIO port change notification flag bit register bit
#if defined ECP26_RP
  #define TP26_RP       ECP26_RP // Number of Remappable Pin
  #define _TP26_RPxR    ECP26_RPxR // Remappable Pin Register
#endif
#define TP26_Set()    ECP26_Set() 
#define TP26_Clear()  ECP26_Clear()
#define TP26_Toggle() ECP26_Toggle() 
#define TP26_IS_ANALOG_INPUT    ECP26_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP26_ANSEL
  #define TP26_ANSEL          ECP26_ANSEL            // analog/digital pin configuration register bit
  #define TP26_ADCCORE        ECP26_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP26_IS_SHARED_CORE ECP26_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP26_ADC_AN_INPUT   ECP26_ADC_AN_INPUT     // ANx input pin number
  #define TP26_ADCBUF         ECP26_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP26_ADC_ANIE ADIELbits.IE      ECP26_ADC_ANIE ADIELbits.IE
  #define TP26_ADC_ANEIE ADEIELbits.EIEN  ECP26_ADC_ANEIE ADEIELbits.EIEN
  #define TP26_ADC_IF         ECP26_ADC_IF           // interrupt flag bit
  #define TP26_ADC_IE         ECP26_ADC_IE           // interrupt enable bit
  #define TP26_ADC_IP         ECP26_ADC_IP           // interrupt priority for this analog input
  #define TP26_ADC_RDY        ECP26_ADC_RDY          // ADC buffer ready bit
  #define _TP26_ADC_Interrupt ECP26_ADC_Interrupt   
  #define TP26_INIT_ANALOG    ECP26_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP26_InitAsOutput()   ECP26_InitAsOutput()             // initialization macro for digital output
#define TP26_InitAsInput()    ECP26_InitAsInput()              // initialization macro for digital input
#if defined (ECP26_PGx_CHANNEL)
  #define TP26_PGx_CHANNEL      ECP26_PGx_CHANNEL // PWM channel index
  #define TP26_PGx_PER          TP26_PGx_PER // PWM channel period register
  #define TP26_PGx_PHASE        TP26_PGx_PHASE // PWM channel phase register
  #define TP26_PGx_DC           TP26_PGx_DC // PWM channel duty cycle register
  #define TP26_PGx_DCA          TP26_PGx_DCA // PWM channel duty cycle A register
  #define TP26_PGx_DTH          TP26_PGx_DTH // PWM channel rising edge dead time register
  #define TP26_PGx_DTL          TP26_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP26_PGx_OVRENH)
    #define TP26_PGx_OVRENH       ECP26_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP26_PGx_PENH         ECP26_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP26_PGx_OVRENL)
    #define TP26_PGx_OVRENL       ECP26_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP26_PGx_PENL         ECP26_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP26_PGxUPDREQ        ECP26_PGxUPDREQ // PWM channel register update request 
  #define TP26_PGxTRIGA         ECP26_PGxTRIGA // PWM channel ADC trigger A register
  #define TP26_PGxTRIGB         ECP26_PGxTRIGB // PWM channel ADC trigger B register
  #define TP26_PGxTRIGC         ECP26_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP26_PWM_IF)
    #define TP26_PWM_IF         ECP26_PWM_IF  // interrupt flag bit
    #define TP26_PWM_IE         ECP26_PWM_IE  // interrupt enable bit
    #define TP26_PWM_IP         ECP26_PWM_IP  // interrupt priority for this analog input
    #define _TP26_PWM_Interrupt ECP26_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #27 is TP27
#define TP27_TRIS    ECP27_TRIS // GPIO direction register bit
#define TP27_Write() ECP27_Write() // GPIO port latch register bit
#define TP27_Read()  ECP27_Read() // GPIO port register bit
#define TP27_ODC     ECP27_ODC // GPIO port open drain configuration register bit
#define TP27_CNPU    ECP27_CNPU // GPIO port pull-up resistor register bit
#define TP27_CNPD    ECP27_CNPD // GPIO port pull-down resistor register bit
#define TP27_CNEN0   ECP27_CNEN0 // GPIO port change notification Enable register bit
#define TP27_CNSTAT  ECP27_CNSTAT // GPIO port change notification Status register bit
#define TP27_CNEN1   ECP27_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP27_CNF     ECP27_CNF // GPIO port change notification flag bit register bit
#if defined ECP27_RP
  #define TP27_RP       ECP27_RP // Number of Remappable Pin
  #define _TP27_RPxR    ECP27_RPxR // Remappable Pin Register
#endif
#define TP27_Set()    ECP27_Set() 
#define TP27_Clear()  ECP27_Clear()
#define TP27_Toggle() ECP27_Toggle() 
#define TP27_IS_ANALOG_INPUT    ECP27_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP27_ANSEL
  #define TP27_ANSEL          ECP27_ANSEL            // analog/digital pin configuration register bit
  #define TP27_ADCCORE        ECP27_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP27_IS_SHARED_CORE ECP27_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP27_ADC_AN_INPUT   ECP27_ADC_AN_INPUT     // ANx input pin number
  #define TP27_ADCBUF         ECP27_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP27_ADC_ANIE ADIELbits.IE      ECP27_ADC_ANIE ADIELbits.IE
  #define TP27_ADC_ANEIE ADEIELbits.EIEN  ECP27_ADC_ANEIE ADEIELbits.EIEN
  #define TP27_ADC_IF         ECP27_ADC_IF           // interrupt flag bit
  #define TP27_ADC_IE         ECP27_ADC_IE           // interrupt enable bit
  #define TP27_ADC_IP         ECP27_ADC_IP           // interrupt priority for this analog input
  #define TP27_ADC_RDY        ECP27_ADC_RDY          // ADC buffer ready bit
  #define _TP27_ADC_Interrupt ECP27_ADC_Interrupt   
  #define TP27_INIT_ANALOG    ECP27_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP27_InitAsOutput()   ECP27_InitAsOutput()             // initialization macro for digital output
#define TP27_InitAsInput()    ECP27_InitAsInput()              // initialization macro for digital input
#if defined (ECP27_PGx_CHANNEL)
  #define TP27_PGx_CHANNEL      ECP27_PGx_CHANNEL // PWM channel index
  #define TP27_PGx_PER          TP27_PGx_PER // PWM channel period register
  #define TP27_PGx_PHASE        TP27_PGx_PHASE // PWM channel phase register
  #define TP27_PGx_DC           TP27_PGx_DC // PWM channel duty cycle register
  #define TP27_PGx_DCA          TP27_PGx_DCA // PWM channel duty cycle A register
  #define TP27_PGx_DTH          TP27_PGx_DTH // PWM channel rising edge dead time register
  #define TP27_PGx_DTL          TP27_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP27_PGx_OVRENH)
    #define TP27_PGx_OVRENH       ECP27_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP27_PGx_PENH         ECP27_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP27_PGx_OVRENL)
    #define TP27_PGx_OVRENL       ECP27_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP27_PGx_PENL         ECP27_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP27_PGxUPDREQ        ECP27_PGxUPDREQ // PWM channel register update request 
  #define TP27_PGxTRIGA         ECP27_PGxTRIGA // PWM channel ADC trigger A register
  #define TP27_PGxTRIGB         ECP27_PGxTRIGB // PWM channel ADC trigger B register
  #define TP27_PGxTRIGC         ECP27_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP27_PWM_IF)
    #define TP27_PWM_IF         ECP27_PWM_IF  // interrupt flag bit
    #define TP27_PWM_IE         ECP27_PWM_IE  // interrupt enable bit
    #define TP27_PWM_IP         ECP27_PWM_IP  // interrupt priority for this analog input
    #define _TP27_PWM_Interrupt ECP27_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #28 is TP28
#define TP28_TRIS    ECP28_TRIS // GPIO direction register bit
#define TP28_Write() ECP28_Write() // GPIO port latch register bit
#define TP28_Read()  ECP28_Read() // GPIO port register bit
#define TP28_ODC     ECP28_ODC // GPIO port open drain configuration register bit
#define TP28_CNPU    ECP28_CNPU // GPIO port pull-up resistor register bit
#define TP28_CNPD    ECP28_CNPD // GPIO port pull-down resistor register bit
#define TP28_CNEN0   ECP28_CNEN0 // GPIO port change notification Enable register bit
#define TP28_CNSTAT  ECP28_CNSTAT // GPIO port change notification Status register bit
#define TP28_CNEN1   ECP28_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP28_CNF     ECP28_CNF // GPIO port change notification flag bit register bit
#if defined ECP28_RP
  #define TP28_RP       ECP28_RP // Number of Remappable Pin
  #define _TP28_RPxR    ECP28_RPxR // Remappable Pin Register
#endif
#define TP28_Set()    ECP28_Set() 
#define TP28_Clear()  ECP28_Clear()
#define TP28_Toggle() ECP28_Toggle() 
#define TP28_IS_ANALOG_INPUT    ECP28_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP28_ANSEL
  #define TP28_ANSEL          ECP28_ANSEL            // analog/digital pin configuration register bit
  #define TP28_ADCCORE        ECP28_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP28_IS_SHARED_CORE ECP28_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP28_ADC_AN_INPUT   ECP28_ADC_AN_INPUT     // ANx input pin number
  #define TP28_ADCBUF         ECP28_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP28_ADC_ANIE ADIELbits.IE      ECP28_ADC_ANIE ADIELbits.IE
  #define TP28_ADC_ANEIE ADEIELbits.EIEN  ECP28_ADC_ANEIE ADEIELbits.EIEN
  #define TP28_ADC_IF         ECP28_ADC_IF           // interrupt flag bit
  #define TP28_ADC_IE         ECP28_ADC_IE           // interrupt enable bit
  #define TP28_ADC_IP         ECP28_ADC_IP           // interrupt priority for this analog input
  #define TP28_ADC_RDY        ECP28_ADC_RDY          // ADC buffer ready bit
  #define _TP28_ADC_Interrupt ECP28_ADC_Interrupt   
  #define TP28_INIT_ANALOG    ECP28_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP28_InitAsOutput()   ECP28_InitAsOutput()             // initialization macro for digital output
#define TP28_InitAsInput()    ECP28_InitAsInput()              // initialization macro for digital input
#if defined (ECP28_PGx_CHANNEL)
  #define TP28_PGx_CHANNEL      ECP28_PGx_CHANNEL // PWM channel index
  #define TP28_PGx_PER          TP28_PGx_PER // PWM channel period register
  #define TP28_PGx_PHASE        TP28_PGx_PHASE // PWM channel phase register
  #define TP28_PGx_DC           TP28_PGx_DC // PWM channel duty cycle register
  #define TP28_PGx_DCA          TP28_PGx_DCA // PWM channel duty cycle A register
  #define TP28_PGx_DTH          TP28_PGx_DTH // PWM channel rising edge dead time register
  #define TP28_PGx_DTL          TP28_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP28_PGx_OVRENH)
    #define TP28_PGx_OVRENH       ECP28_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP28_PGx_PENH         ECP28_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP28_PGx_OVRENL)
    #define TP28_PGx_OVRENL       ECP28_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP28_PGx_PENL         ECP28_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP28_PGxUPDREQ        ECP28_PGxUPDREQ // PWM channel register update request 
  #define TP28_PGxTRIGA         ECP28_PGxTRIGA // PWM channel ADC trigger A register
  #define TP28_PGxTRIGB         ECP28_PGxTRIGB // PWM channel ADC trigger B register
  #define TP28_PGxTRIGC         ECP28_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP28_PWM_IF)
    #define TP28_PWM_IF         ECP28_PWM_IF  // interrupt flag bit
    #define TP28_PWM_IE         ECP28_PWM_IE  // interrupt enable bit
    #define TP28_PWM_IP         ECP28_PWM_IP  // interrupt priority for this analog input
    #define _TP28_PWM_Interrupt ECP28_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #29 is TP29
#define TP29_TRIS    ECP29_TRIS // GPIO direction register bit
#define TP29_Write() ECP29_Write() // GPIO port latch register bit
#define TP29_Read()  ECP29_Read() // GPIO port register bit
#define TP29_ODC     ECP29_ODC // GPIO port open drain configuration register bit
#define TP29_CNPU    ECP29_CNPU // GPIO port pull-up resistor register bit
#define TP29_CNPD    ECP29_CNPD // GPIO port pull-down resistor register bit
#define TP29_CNEN0   ECP29_CNEN0 // GPIO port change notification Enable register bit
#define TP29_CNSTAT  ECP29_CNSTAT // GPIO port change notification Status register bit
#define TP29_CNEN1   ECP29_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP29_CNF     ECP29_CNF // GPIO port change notification flag bit register bit
#if defined ECP29_RP
  #define TP29_RP       ECP29_RP // Number of Remappable Pin
  #define _TP29_RPxR    ECP29_RPxR // Remappable Pin Register
#endif
#define TP29_Set()    ECP29_Set() 
#define TP29_Clear()  ECP29_Clear()
#define TP29_Toggle() ECP29_Toggle() 
#define TP29_IS_ANALOG_INPUT    ECP29_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP29_ANSEL
  #define TP29_ANSEL          ECP29_ANSEL            // analog/digital pin configuration register bit
  #define TP29_ADCCORE        ECP29_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP29_IS_SHARED_CORE ECP29_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP29_ADC_AN_INPUT   ECP29_ADC_AN_INPUT     // ANx input pin number
  #define TP29_ADCBUF         ECP29_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP29_ADC_ANIE ADIELbits.IE      ECP29_ADC_ANIE ADIELbits.IE
  #define TP29_ADC_ANEIE ADEIELbits.EIEN  ECP29_ADC_ANEIE ADEIELbits.EIEN
  #define TP29_ADC_IF         ECP29_ADC_IF           // interrupt flag bit
  #define TP29_ADC_IE         ECP29_ADC_IE           // interrupt enable bit
  #define TP29_ADC_IP         ECP29_ADC_IP           // interrupt priority for this analog input
  #define TP29_ADC_RDY        ECP29_ADC_RDY          // ADC buffer ready bit
  #define _TP29_ADC_Interrupt ECP29_ADC_Interrupt   
  #define TP29_INIT_ANALOG    ECP29_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP29_InitAsOutput()   ECP29_InitAsOutput()             // initialization macro for digital output
#define TP29_InitAsInput()    ECP29_InitAsInput()              // initialization macro for digital input
#if defined (ECP29_PGx_CHANNEL)
  #define TP29_PGx_CHANNEL      ECP29_PGx_CHANNEL // PWM channel index
  #define TP29_PGx_PER          TP29_PGx_PER // PWM channel period register
  #define TP29_PGx_PHASE        TP29_PGx_PHASE // PWM channel phase register
  #define TP29_PGx_DC           TP29_PGx_DC // PWM channel duty cycle register
  #define TP29_PGx_DCA          TP29_PGx_DCA // PWM channel duty cycle A register
  #define TP29_PGx_DTH          TP29_PGx_DTH // PWM channel rising edge dead time register
  #define TP29_PGx_DTL          TP29_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP29_PGx_OVRENH)
    #define TP29_PGx_OVRENH       ECP29_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP29_PGx_PENH         ECP29_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP29_PGx_OVRENL)
    #define TP29_PGx_OVRENL       ECP29_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP29_PGx_PENL         ECP29_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP29_PGxUPDREQ        ECP29_PGxUPDREQ // PWM channel register update request 
  #define TP29_PGxTRIGA         ECP29_PGxTRIGA // PWM channel ADC trigger A register
  #define TP29_PGxTRIGB         ECP29_PGxTRIGB // PWM channel ADC trigger B register
  #define TP29_PGxTRIGC         ECP29_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP29_PWM_IF)
    #define TP29_PWM_IF         ECP29_PWM_IF  // interrupt flag bit
    #define TP29_PWM_IE         ECP29_PWM_IE  // interrupt enable bit
    #define TP29_PWM_IP         ECP29_PWM_IP  // interrupt priority for this analog input
    #define _TP29_PWM_Interrupt ECP29_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #30 is TP30
#define TP30_TRIS    ECP30_TRIS // GPIO direction register bit
#define TP30_Write() ECP30_Write() // GPIO port latch register bit
#define TP30_Read()  ECP30_Read() // GPIO port register bit
#define TP30_ODC     ECP30_ODC // GPIO port open drain configuration register bit
#define TP30_CNPU    ECP30_CNPU // GPIO port pull-up resistor register bit
#define TP30_CNPD    ECP30_CNPD // GPIO port pull-down resistor register bit
#define TP30_CNEN0   ECP30_CNEN0 // GPIO port change notification Enable register bit
#define TP30_CNSTAT  ECP30_CNSTAT // GPIO port change notification Status register bit
#define TP30_CNEN1   ECP30_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP30_CNF     ECP30_CNF // GPIO port change notification flag bit register bit
#if defined ECP30_RP
  #define TP30_RP       ECP30_RP // Number of Remappable Pin
  #define _TP30_RPxR    ECP30_RPxR // Remappable Pin Register
#endif
#define TP30_Set()    ECP30_Set() 
#define TP30_Clear()  ECP30_Clear()
#define TP30_Toggle() ECP30_Toggle() 
#define TP30_IS_ANALOG_INPUT    ECP30_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP30_ANSEL
  #define TP30_ANSEL          ECP30_ANSEL            // analog/digital pin configuration register bit
  #define TP30_ADCCORE        ECP30_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP30_IS_SHARED_CORE ECP30_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP30_ADC_AN_INPUT   ECP30_ADC_AN_INPUT     // ANx input pin number
  #define TP30_ADCBUF         ECP30_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP30_ADC_ANIE ADIELbits.IE      ECP30_ADC_ANIE ADIELbits.IE
  #define TP30_ADC_ANEIE ADEIELbits.EIEN  ECP30_ADC_ANEIE ADEIELbits.EIEN
  #define TP30_ADC_IF         ECP30_ADC_IF           // interrupt flag bit
  #define TP30_ADC_IE         ECP30_ADC_IE           // interrupt enable bit
  #define TP30_ADC_IP         ECP30_ADC_IP           // interrupt priority for this analog input
  #define TP30_ADC_RDY        ECP30_ADC_RDY          // ADC buffer ready bit
  #define _TP30_ADC_Interrupt ECP30_ADC_Interrupt   
  #define TP30_INIT_ANALOG    ECP30_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP30_InitAsOutput()   ECP30_InitAsOutput()             // initialization macro for digital output
#define TP30_InitAsInput()    ECP30_InitAsInput()              // initialization macro for digital input
#if defined (ECP30_PGx_CHANNEL)
  #define TP30_PGx_CHANNEL      ECP30_PGx_CHANNEL // PWM channel index
  #define TP30_PGx_PER          TP30_PGx_PER // PWM channel period register
  #define TP30_PGx_PHASE        TP30_PGx_PHASE // PWM channel phase register
  #define TP30_PGx_DC           TP30_PGx_DC // PWM channel duty cycle register
  #define TP30_PGx_DCA          TP30_PGx_DCA // PWM channel duty cycle A register
  #define TP30_PGx_DTH          TP30_PGx_DTH // PWM channel rising edge dead time register
  #define TP30_PGx_DTL          TP30_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP30_PGx_OVRENH)
    #define TP30_PGx_OVRENH       ECP30_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP30_PGx_PENH         ECP30_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP30_PGx_OVRENL)
    #define TP30_PGx_OVRENL       ECP30_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP30_PGx_PENL         ECP30_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP30_PGxUPDREQ        ECP30_PGxUPDREQ // PWM channel register update request 
  #define TP30_PGxTRIGA         ECP30_PGxTRIGA // PWM channel ADC trigger A register
  #define TP30_PGxTRIGB         ECP30_PGxTRIGB // PWM channel ADC trigger B register
  #define TP30_PGxTRIGC         ECP30_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP30_PWM_IF)
    #define TP30_PWM_IF         ECP30_PWM_IF  // interrupt flag bit
    #define TP30_PWM_IE         ECP30_PWM_IE  // interrupt enable bit
    #define TP30_PWM_IP         ECP30_PWM_IP  // interrupt priority for this analog input
    #define _TP30_PWM_Interrupt ECP30_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #31 is TP31
#define TP31_TRIS    ECP31_TRIS // GPIO direction register bit
#define TP31_Write() ECP31_Write() // GPIO port latch register bit
#define TP31_Read()  ECP31_Read() // GPIO port register bit
#define TP31_ODC     ECP31_ODC // GPIO port open drain configuration register bit
#define TP31_CNPU    ECP31_CNPU // GPIO port pull-up resistor register bit
#define TP31_CNPD    ECP31_CNPD // GPIO port pull-down resistor register bit
#define TP31_CNEN0   ECP31_CNEN0 // GPIO port change notification Enable register bit
#define TP31_CNSTAT  ECP31_CNSTAT // GPIO port change notification Status register bit
#define TP31_CNEN1   ECP31_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP31_CNF     ECP31_CNF // GPIO port change notification flag bit register bit
#if defined ECP31_RP
  #define TP31_RP       ECP31_RP // Number of Remappable Pin
  #define _TP31_RPxR    ECP31_RPxR // Remappable Pin Register
#endif
#define TP31_Set()    ECP31_Set() 
#define TP31_Clear()  ECP31_Clear()
#define TP31_Toggle() ECP31_Toggle() 
#define TP31_IS_ANALOG_INPUT    ECP31_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP31_ANSEL
  #define TP31_ANSEL          ECP31_ANSEL            // analog/digital pin configuration register bit
  #define TP31_ADCCORE        ECP31_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP31_IS_SHARED_CORE ECP31_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP31_ADC_AN_INPUT   ECP31_ADC_AN_INPUT     // ANx input pin number
  #define TP31_ADCBUF         ECP31_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP31_ADC_ANIE ADIELbits.IE      ECP31_ADC_ANIE ADIELbits.IE
  #define TP31_ADC_ANEIE ADEIELbits.EIEN  ECP31_ADC_ANEIE ADEIELbits.EIEN
  #define TP31_ADC_IF         ECP31_ADC_IF           // interrupt flag bit
  #define TP31_ADC_IE         ECP31_ADC_IE           // interrupt enable bit
  #define TP31_ADC_IP         ECP31_ADC_IP           // interrupt priority for this analog input
  #define TP31_ADC_RDY        ECP31_ADC_RDY          // ADC buffer ready bit
  #define _TP31_ADC_Interrupt ECP31_ADC_Interrupt   
  #define TP31_INIT_ANALOG    ECP31_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP31_InitAsOutput()   ECP31_InitAsOutput()             // initialization macro for digital output
#define TP31_InitAsInput()    ECP31_InitAsInput()              // initialization macro for digital input
#if defined (ECP31_PGx_CHANNEL)
  #define TP31_PGx_CHANNEL      ECP31_PGx_CHANNEL // PWM channel index
  #define TP31_PGx_PER          TP31_PGx_PER // PWM channel period register
  #define TP31_PGx_PHASE        TP31_PGx_PHASE // PWM channel phase register
  #define TP31_PGx_DC           TP31_PGx_DC // PWM channel duty cycle register
  #define TP31_PGx_DCA          TP31_PGx_DCA // PWM channel duty cycle A register
  #define TP31_PGx_DTH          TP31_PGx_DTH // PWM channel rising edge dead time register
  #define TP31_PGx_DTL          TP31_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP31_PGx_OVRENH)
    #define TP31_PGx_OVRENH       ECP31_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP31_PGx_PENH         ECP31_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP31_PGx_OVRENL)
    #define TP31_PGx_OVRENL       ECP31_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP31_PGx_PENL         ECP31_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP31_PGxUPDREQ        ECP31_PGxUPDREQ // PWM channel register update request 
  #define TP31_PGxTRIGA         ECP31_PGxTRIGA // PWM channel ADC trigger A register
  #define TP31_PGxTRIGB         ECP31_PGxTRIGB // PWM channel ADC trigger B register
  #define TP31_PGxTRIGC         ECP31_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP31_PWM_IF)
    #define TP31_PWM_IF         ECP31_PWM_IF  // interrupt flag bit
    #define TP31_PWM_IE         ECP31_PWM_IE  // interrupt enable bit
    #define TP31_PWM_IP         ECP31_PWM_IP  // interrupt priority for this analog input
    #define _TP31_PWM_Interrupt ECP31_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #32 is TP32
#define TP32_TRIS    ECP32_TRIS // GPIO direction register bit
#define TP32_Write() ECP32_Write() // GPIO port latch register bit
#define TP32_Read()  ECP32_Read() // GPIO port register bit
#define TP32_ODC     ECP32_ODC // GPIO port open drain configuration register bit
#define TP32_CNPU    ECP32_CNPU // GPIO port pull-up resistor register bit
#define TP32_CNPD    ECP32_CNPD // GPIO port pull-down resistor register bit
#define TP32_CNEN0   ECP32_CNEN0 // GPIO port change notification Enable register bit
#define TP32_CNSTAT  ECP32_CNSTAT // GPIO port change notification Status register bit
#define TP32_CNEN1   ECP32_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP32_CNF     ECP32_CNF // GPIO port change notification flag bit register bit
#if defined ECP32_RP
  #define TP32_RP       ECP32_RP // Number of Remappable Pin
  #define _TP32_RPxR    ECP32_RPxR // Remappable Pin Register
#endif
#define TP32_Set()    ECP32_Set() 
#define TP32_Clear()  ECP32_Clear()
#define TP32_Toggle() ECP32_Toggle() 
#define TP32_IS_ANALOG_INPUT    ECP32_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP32_ANSEL
  #define TP32_ANSEL          ECP32_ANSEL            // analog/digital pin configuration register bit
  #define TP32_ADCCORE        ECP32_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP32_IS_SHARED_CORE ECP32_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP32_ADC_AN_INPUT   ECP32_ADC_AN_INPUT     // ANx input pin number
  #define TP32_ADCBUF         ECP32_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP32_ADC_ANIE ADIELbits.IE      ECP32_ADC_ANIE ADIELbits.IE
  #define TP32_ADC_ANEIE ADEIELbits.EIEN  ECP32_ADC_ANEIE ADEIELbits.EIEN
  #define TP32_ADC_IF         ECP32_ADC_IF           // interrupt flag bit
  #define TP32_ADC_IE         ECP32_ADC_IE           // interrupt enable bit
  #define TP32_ADC_IP         ECP32_ADC_IP           // interrupt priority for this analog input
  #define TP32_ADC_RDY        ECP32_ADC_RDY          // ADC buffer ready bit
  #define _TP32_ADC_Interrupt ECP32_ADC_Interrupt   
  #define TP32_INIT_ANALOG    ECP32_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP32_InitAsOutput()   ECP32_InitAsOutput()             // initialization macro for digital output
#define TP32_InitAsInput()    ECP32_InitAsInput()              // initialization macro for digital input
#if defined (ECP32_PGx_CHANNEL)
  #define TP32_PGx_CHANNEL      ECP32_PGx_CHANNEL // PWM channel index
  #define TP32_PGx_PER          TP32_PGx_PER // PWM channel period register
  #define TP32_PGx_PHASE        TP32_PGx_PHASE // PWM channel phase register
  #define TP32_PGx_DC           TP32_PGx_DC // PWM channel duty cycle register
  #define TP32_PGx_DCA          TP32_PGx_DCA // PWM channel duty cycle A register
  #define TP32_PGx_DTH          TP32_PGx_DTH // PWM channel rising edge dead time register
  #define TP32_PGx_DTL          TP32_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP32_PGx_OVRENH)
    #define TP32_PGx_OVRENH       ECP32_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP32_PGx_PENH         ECP32_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP32_PGx_OVRENL)
    #define TP32_PGx_OVRENL       ECP32_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP32_PGx_PENL         ECP32_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP32_PGxUPDREQ        ECP32_PGxUPDREQ // PWM channel register update request 
  #define TP32_PGxTRIGA         ECP32_PGxTRIGA // PWM channel ADC trigger A register
  #define TP32_PGxTRIGB         ECP32_PGxTRIGB // PWM channel ADC trigger B register
  #define TP32_PGxTRIGC         ECP32_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP32_PWM_IF)
    #define TP32_PWM_IF         ECP32_PWM_IF  // interrupt flag bit
    #define TP32_PWM_IE         ECP32_PWM_IE  // interrupt enable bit
    #define TP32_PWM_IP         ECP32_PWM_IP  // interrupt priority for this analog input
    #define _TP32_PWM_Interrupt ECP32_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #33 is TP33
#define TP33_TRIS    ECP33_TRIS // GPIO direction register bit
#define TP33_Write() ECP33_Write() // GPIO port latch register bit
#define TP33_Read()  ECP33_Read() // GPIO port register bit
#define TP33_ODC     ECP33_ODC // GPIO port open drain configuration register bit
#define TP33_CNPU    ECP33_CNPU // GPIO port pull-up resistor register bit
#define TP33_CNPD    ECP33_CNPD // GPIO port pull-down resistor register bit
#define TP33_CNEN0   ECP33_CNEN0 // GPIO port change notification Enable register bit
#define TP33_CNSTAT  ECP33_CNSTAT // GPIO port change notification Status register bit
#define TP33_CNEN1   ECP33_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP33_CNF     ECP33_CNF // GPIO port change notification flag bit register bit
#if defined ECP33_RP
  #define TP33_RP       ECP33_RP // Number of Remappable Pin
  #define _TP33_RPxR    ECP33_RPxR // Remappable Pin Register
#endif
#define TP33_Set()    ECP33_Set() 
#define TP33_Clear()  ECP33_Clear()
#define TP33_Toggle() ECP33_Toggle() 
#define TP33_IS_ANALOG_INPUT    ECP33_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP33_ANSEL
  #define TP33_ANSEL          ECP33_ANSEL            // analog/digital pin configuration register bit
  #define TP33_ADCCORE        ECP33_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP33_IS_SHARED_CORE ECP33_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP33_ADC_AN_INPUT   ECP33_ADC_AN_INPUT     // ANx input pin number
  #define TP33_ADCBUF         ECP33_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP33_ADC_ANIE ADIELbits.IE      ECP33_ADC_ANIE ADIELbits.IE
  #define TP33_ADC_ANEIE ADEIELbits.EIEN  ECP33_ADC_ANEIE ADEIELbits.EIEN
  #define TP33_ADC_IF         ECP33_ADC_IF           // interrupt flag bit
  #define TP33_ADC_IE         ECP33_ADC_IE           // interrupt enable bit
  #define TP33_ADC_IP         ECP33_ADC_IP           // interrupt priority for this analog input
  #define TP33_ADC_RDY        ECP33_ADC_RDY          // ADC buffer ready bit
  #define _TP33_ADC_Interrupt ECP33_ADC_Interrupt   
  #define TP33_INIT_ANALOG    ECP33_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP33_InitAsOutput()   ECP33_InitAsOutput()             // initialization macro for digital output
#define TP33_InitAsInput()    ECP33_InitAsInput()              // initialization macro for digital input
#if defined (ECP33_PGx_CHANNEL)
  #define TP33_PGx_CHANNEL      ECP33_PGx_CHANNEL // PWM channel index
  #define TP33_PGx_PER          TP33_PGx_PER // PWM channel period register
  #define TP33_PGx_PHASE        TP33_PGx_PHASE // PWM channel phase register
  #define TP33_PGx_DC           TP33_PGx_DC // PWM channel duty cycle register
  #define TP33_PGx_DCA          TP33_PGx_DCA // PWM channel duty cycle A register
  #define TP33_PGx_DTH          TP33_PGx_DTH // PWM channel rising edge dead time register
  #define TP33_PGx_DTL          TP33_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP33_PGx_OVRENH)
    #define TP33_PGx_OVRENH       ECP33_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP33_PGx_PENH         ECP33_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP33_PGx_OVRENL)
    #define TP33_PGx_OVRENL       ECP33_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP33_PGx_PENL         ECP33_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP33_PGxUPDREQ        ECP33_PGxUPDREQ // PWM channel register update request 
  #define TP33_PGxTRIGA         ECP33_PGxTRIGA // PWM channel ADC trigger A register
  #define TP33_PGxTRIGB         ECP33_PGxTRIGB // PWM channel ADC trigger B register
  #define TP33_PGxTRIGC         ECP33_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP33_PWM_IF)
    #define TP33_PWM_IF         ECP33_PWM_IF  // interrupt flag bit
    #define TP33_PWM_IE         ECP33_PWM_IE  // interrupt enable bit
    #define TP33_PWM_IP         ECP33_PWM_IP  // interrupt priority for this analog input
    #define _TP33_PWM_Interrupt ECP33_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #34 is TP34
#define TP34_TRIS    ECP34_TRIS // GPIO direction register bit
#define TP34_Write() ECP34_Write() // GPIO port latch register bit
#define TP34_Read()  ECP34_Read() // GPIO port register bit
#define TP34_ODC     ECP34_ODC // GPIO port open drain configuration register bit
#define TP34_CNPU    ECP34_CNPU // GPIO port pull-up resistor register bit
#define TP34_CNPD    ECP34_CNPD // GPIO port pull-down resistor register bit
#define TP34_CNEN0   ECP34_CNEN0 // GPIO port change notification Enable register bit
#define TP34_CNSTAT  ECP34_CNSTAT // GPIO port change notification Status register bit
#define TP34_CNEN1   ECP34_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP34_CNF     ECP34_CNF // GPIO port change notification flag bit register bit
#if defined ECP34_RP
  #define TP34_RP       ECP34_RP // Number of Remappable Pin
  #define _TP34_RPxR    ECP34_RPxR // Remappable Pin Register
#endif
#define TP34_Set()    ECP34_Set() 
#define TP34_Clear()  ECP34_Clear()
#define TP34_Toggle() ECP34_Toggle() 
#define TP34_IS_ANALOG_INPUT    ECP34_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP34_ANSEL
  #define TP34_ANSEL          ECP34_ANSEL            // analog/digital pin configuration register bit
  #define TP34_ADCCORE        ECP34_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP34_IS_SHARED_CORE ECP34_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP34_ADC_AN_INPUT   ECP34_ADC_AN_INPUT     // ANx input pin number
  #define TP34_ADCBUF         ECP34_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP34_ADC_ANIE ADIELbits.IE      ECP34_ADC_ANIE ADIELbits.IE
  #define TP34_ADC_ANEIE ADEIELbits.EIEN  ECP34_ADC_ANEIE ADEIELbits.EIEN
  #define TP34_ADC_IF         ECP34_ADC_IF           // interrupt flag bit
  #define TP34_ADC_IE         ECP34_ADC_IE           // interrupt enable bit
  #define TP34_ADC_IP         ECP34_ADC_IP           // interrupt priority for this analog input
  #define TP34_ADC_RDY        ECP34_ADC_RDY          // ADC buffer ready bit
  #define _TP34_ADC_Interrupt ECP34_ADC_Interrupt   
  #define TP34_INIT_ANALOG    ECP34_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP34_InitAsOutput()   ECP34_InitAsOutput()             // initialization macro for digital output
#define TP34_InitAsInput()    ECP34_InitAsInput()              // initialization macro for digital input
#if defined (ECP34_PGx_CHANNEL)
  #define TP34_PGx_CHANNEL      ECP34_PGx_CHANNEL // PWM channel index
  #define TP34_PGx_PER          TP34_PGx_PER // PWM channel period register
  #define TP34_PGx_PHASE        TP34_PGx_PHASE // PWM channel phase register
  #define TP34_PGx_DC           TP34_PGx_DC // PWM channel duty cycle register
  #define TP34_PGx_DCA          TP34_PGx_DCA // PWM channel duty cycle A register
  #define TP34_PGx_DTH          TP34_PGx_DTH // PWM channel rising edge dead time register
  #define TP34_PGx_DTL          TP34_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP34_PGx_OVRENH)
    #define TP34_PGx_OVRENH       ECP34_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP34_PGx_PENH         ECP34_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP34_PGx_OVRENL)
    #define TP34_PGx_OVRENL       ECP34_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP34_PGx_PENL         ECP34_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP34_PGxUPDREQ        ECP34_PGxUPDREQ // PWM channel register update request 
  #define TP34_PGxTRIGA         ECP34_PGxTRIGA // PWM channel ADC trigger A register
  #define TP34_PGxTRIGB         ECP34_PGxTRIGB // PWM channel ADC trigger B register
  #define TP34_PGxTRIGC         ECP34_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP34_PWM_IF)
    #define TP34_PWM_IF         ECP34_PWM_IF  // interrupt flag bit
    #define TP34_PWM_IE         ECP34_PWM_IE  // interrupt enable bit
    #define TP34_PWM_IP         ECP34_PWM_IP  // interrupt priority for this analog input
    #define _TP34_PWM_Interrupt ECP34_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #35 is TP35
#define TP35_TRIS    ECP35_TRIS // GPIO direction register bit
#define TP35_Write() ECP35_Write() // GPIO port latch register bit
#define TP35_Read()  ECP35_Read() // GPIO port register bit
#define TP35_ODC     ECP35_ODC // GPIO port open drain configuration register bit
#define TP35_CNPU    ECP35_CNPU // GPIO port pull-up resistor register bit
#define TP35_CNPD    ECP35_CNPD // GPIO port pull-down resistor register bit
#define TP35_CNEN0   ECP35_CNEN0 // GPIO port change notification Enable register bit
#define TP35_CNSTAT  ECP35_CNSTAT // GPIO port change notification Status register bit
#define TP35_CNEN1   ECP35_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP35_CNF     ECP35_CNF // GPIO port change notification flag bit register bit
#if defined ECP35_RP
  #define TP35_RP       ECP35_RP // Number of Remappable Pin
  #define _TP35_RPxR    ECP35_RPxR // Remappable Pin Register
#endif
#define TP35_Set()    ECP35_Set() 
#define TP35_Clear()  ECP35_Clear()
#define TP35_Toggle() ECP35_Toggle() 
#define TP35_IS_ANALOG_INPUT    ECP35_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP35_ANSEL
  #define TP35_ANSEL          ECP35_ANSEL            // analog/digital pin configuration register bit
  #define TP35_ADCCORE        ECP35_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP35_IS_SHARED_CORE ECP35_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP35_ADC_AN_INPUT   ECP35_ADC_AN_INPUT     // ANx input pin number
  #define TP35_ADCBUF         ECP35_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP35_ADC_ANIE ADIELbits.IE      ECP35_ADC_ANIE ADIELbits.IE
  #define TP35_ADC_ANEIE ADEIELbits.EIEN  ECP35_ADC_ANEIE ADEIELbits.EIEN
  #define TP35_ADC_IF         ECP35_ADC_IF           // interrupt flag bit
  #define TP35_ADC_IE         ECP35_ADC_IE           // interrupt enable bit
  #define TP35_ADC_IP         ECP35_ADC_IP           // interrupt priority for this analog input
  #define TP35_ADC_RDY        ECP35_ADC_RDY          // ADC buffer ready bit
  #define _TP35_ADC_Interrupt ECP35_ADC_Interrupt   
  #define TP35_INIT_ANALOG    ECP35_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP35_InitAsOutput()   ECP35_InitAsOutput()             // initialization macro for digital output
#define TP35_InitAsInput()    ECP35_InitAsInput()              // initialization macro for digital input
#if defined (ECP35_PGx_CHANNEL)
  #define TP35_PGx_CHANNEL      ECP35_PGx_CHANNEL // PWM channel index
  #define TP35_PGx_PER          TP35_PGx_PER // PWM channel period register
  #define TP35_PGx_PHASE        TP35_PGx_PHASE // PWM channel phase register
  #define TP35_PGx_DC           TP35_PGx_DC // PWM channel duty cycle register
  #define TP35_PGx_DCA          TP35_PGx_DCA // PWM channel duty cycle A register
  #define TP35_PGx_DTH          TP35_PGx_DTH // PWM channel rising edge dead time register
  #define TP35_PGx_DTL          TP35_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP35_PGx_OVRENH)
    #define TP35_PGx_OVRENH       ECP35_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP35_PGx_PENH         ECP35_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP35_PGx_OVRENL)
    #define TP35_PGx_OVRENL       ECP35_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP35_PGx_PENL         ECP35_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP35_PGxUPDREQ        ECP35_PGxUPDREQ // PWM channel register update request 
  #define TP35_PGxTRIGA         ECP35_PGxTRIGA // PWM channel ADC trigger A register
  #define TP35_PGxTRIGB         ECP35_PGxTRIGB // PWM channel ADC trigger B register
  #define TP35_PGxTRIGC         ECP35_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP35_PWM_IF)
    #define TP35_PWM_IF         ECP35_PWM_IF  // interrupt flag bit
    #define TP35_PWM_IE         ECP35_PWM_IE  // interrupt enable bit
    #define TP35_PWM_IP         ECP35_PWM_IP  // interrupt priority for this analog input
    #define _TP35_PWM_Interrupt ECP35_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #36 is TP36
#define TP36_TRIS    ECP36_TRIS // GPIO direction register bit
#define TP36_Write() ECP36_Write() // GPIO port latch register bit
#define TP36_Read()  ECP36_Read() // GPIO port register bit
#define TP36_ODC     ECP36_ODC // GPIO port open drain configuration register bit
#define TP36_CNPU    ECP36_CNPU // GPIO port pull-up resistor register bit
#define TP36_CNPD    ECP36_CNPD // GPIO port pull-down resistor register bit
#define TP36_CNEN0   ECP36_CNEN0 // GPIO port change notification Enable register bit
#define TP36_CNSTAT  ECP36_CNSTAT // GPIO port change notification Status register bit
#define TP36_CNEN1   ECP36_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP36_CNF     ECP36_CNF // GPIO port change notification flag bit register bit
#if defined ECP36_RP
  #define TP36_RP       ECP36_RP // Number of Remappable Pin
  #define _TP36_RPxR    ECP36_RPxR // Remappable Pin Register
#endif
#define TP36_Set()    ECP36_Set() 
#define TP36_Clear()  ECP36_Clear()
#define TP36_Toggle() ECP36_Toggle() 
#define TP36_IS_ANALOG_INPUT    ECP36_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP36_ANSEL
  #define TP36_ANSEL          ECP36_ANSEL            // analog/digital pin configuration register bit
  #define TP36_ADCCORE        ECP36_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP36_IS_SHARED_CORE ECP36_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP36_ADC_AN_INPUT   ECP36_ADC_AN_INPUT     // ANx input pin number
  #define TP36_ADCBUF         ECP36_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP36_ADC_ANIE ADIELbits.IE      ECP36_ADC_ANIE ADIELbits.IE
  #define TP36_ADC_ANEIE ADEIELbits.EIEN  ECP36_ADC_ANEIE ADEIELbits.EIEN
  #define TP36_ADC_IF         ECP36_ADC_IF           // interrupt flag bit
  #define TP36_ADC_IE         ECP36_ADC_IE           // interrupt enable bit
  #define TP36_ADC_IP         ECP36_ADC_IP           // interrupt priority for this analog input
  #define TP36_ADC_RDY        ECP36_ADC_RDY          // ADC buffer ready bit
  #define _TP36_ADC_Interrupt ECP36_ADC_Interrupt   
  #define TP36_INIT_ANALOG    ECP36_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP36_InitAsOutput()   ECP36_InitAsOutput()             // initialization macro for digital output
#define TP36_InitAsInput()    ECP36_InitAsInput()              // initialization macro for digital input
#if defined (ECP36_PGx_CHANNEL)
  #define TP36_PGx_CHANNEL      ECP36_PGx_CHANNEL // PWM channel index
  #define TP36_PGx_PER          TP36_PGx_PER // PWM channel period register
  #define TP36_PGx_PHASE        TP36_PGx_PHASE // PWM channel phase register
  #define TP36_PGx_DC           TP36_PGx_DC // PWM channel duty cycle register
  #define TP36_PGx_DCA          TP36_PGx_DCA // PWM channel duty cycle A register
  #define TP36_PGx_DTH          TP36_PGx_DTH // PWM channel rising edge dead time register
  #define TP36_PGx_DTL          TP36_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP36_PGx_OVRENH)
    #define TP36_PGx_OVRENH       ECP36_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP36_PGx_PENH         ECP36_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP36_PGx_OVRENL)
    #define TP36_PGx_OVRENL       ECP36_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP36_PGx_PENL         ECP36_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP36_PGxUPDREQ        ECP36_PGxUPDREQ // PWM channel register update request 
  #define TP36_PGxTRIGA         ECP36_PGxTRIGA // PWM channel ADC trigger A register
  #define TP36_PGxTRIGB         ECP36_PGxTRIGB // PWM channel ADC trigger B register
  #define TP36_PGxTRIGC         ECP36_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP36_PWM_IF)
    #define TP36_PWM_IF         ECP36_PWM_IF  // interrupt flag bit
    #define TP36_PWM_IE         ECP36_PWM_IE  // interrupt enable bit
    #define TP36_PWM_IP         ECP36_PWM_IP  // interrupt priority for this analog input
    #define _TP36_PWM_Interrupt ECP36_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #37 is TP37
#define TP37_TRIS    ECP37_TRIS // GPIO direction register bit
#define TP37_Write() ECP37_Write() // GPIO port latch register bit
#define TP37_Read()  ECP37_Read() // GPIO port register bit
#define TP37_ODC     ECP37_ODC // GPIO port open drain configuration register bit
#define TP37_CNPU    ECP37_CNPU // GPIO port pull-up resistor register bit
#define TP37_CNPD    ECP37_CNPD // GPIO port pull-down resistor register bit
#define TP37_CNEN0   ECP37_CNEN0 // GPIO port change notification Enable register bit
#define TP37_CNSTAT  ECP37_CNSTAT // GPIO port change notification Status register bit
#define TP37_CNEN1   ECP37_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP37_CNF     ECP37_CNF // GPIO port change notification flag bit register bit
#if defined ECP37_RP
  #define TP37_RP       ECP37_RP // Number of Remappable Pin
  #define _TP37_RPxR    ECP37_RPxR // Remappable Pin Register
#endif
#define TP37_Set()    ECP37_Set() 
#define TP37_Clear()  ECP37_Clear()
#define TP37_Toggle() ECP37_Toggle() 
#define TP37_IS_ANALOG_INPUT    ECP37_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP37_ANSEL
  #define TP37_ANSEL          ECP37_ANSEL            // analog/digital pin configuration register bit
  #define TP37_ADCCORE        ECP37_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP37_IS_SHARED_CORE ECP37_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP37_ADC_AN_INPUT   ECP37_ADC_AN_INPUT     // ANx input pin number
  #define TP37_ADCBUF         ECP37_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP37_ADC_ANIE ADIELbits.IE      ECP37_ADC_ANIE ADIELbits.IE
  #define TP37_ADC_ANEIE ADEIELbits.EIEN  ECP37_ADC_ANEIE ADEIELbits.EIEN
  #define TP37_ADC_IF         ECP37_ADC_IF           // interrupt flag bit
  #define TP37_ADC_IE         ECP37_ADC_IE           // interrupt enable bit
  #define TP37_ADC_IP         ECP37_ADC_IP           // interrupt priority for this analog input
  #define TP37_ADC_RDY        ECP37_ADC_RDY          // ADC buffer ready bit
  #define _TP37_ADC_Interrupt ECP37_ADC_Interrupt   
  #define TP37_INIT_ANALOG    ECP37_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP37_InitAsOutput()   ECP37_InitAsOutput()             // initialization macro for digital output
#define TP37_InitAsInput()    ECP37_InitAsInput()              // initialization macro for digital input
#if defined (ECP37_PGx_CHANNEL)
  #define TP37_PGx_CHANNEL      ECP37_PGx_CHANNEL // PWM channel index
  #define TP37_PGx_PER          TP37_PGx_PER // PWM channel period register
  #define TP37_PGx_PHASE        TP37_PGx_PHASE // PWM channel phase register
  #define TP37_PGx_DC           TP37_PGx_DC // PWM channel duty cycle register
  #define TP37_PGx_DCA          TP37_PGx_DCA // PWM channel duty cycle A register
  #define TP37_PGx_DTH          TP37_PGx_DTH // PWM channel rising edge dead time register
  #define TP37_PGx_DTL          TP37_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP37_PGx_OVRENH)
    #define TP37_PGx_OVRENH       ECP37_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP37_PGx_PENH         ECP37_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP37_PGx_OVRENL)
    #define TP37_PGx_OVRENL       ECP37_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP37_PGx_PENL         ECP37_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP37_PGxUPDREQ        ECP37_PGxUPDREQ // PWM channel register update request 
  #define TP37_PGxTRIGA         ECP37_PGxTRIGA // PWM channel ADC trigger A register
  #define TP37_PGxTRIGB         ECP37_PGxTRIGB // PWM channel ADC trigger B register
  #define TP37_PGxTRIGC         ECP37_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP37_PWM_IF)
    #define TP37_PWM_IF         ECP37_PWM_IF  // interrupt flag bit
    #define TP37_PWM_IE         ECP37_PWM_IE  // interrupt enable bit
    #define TP37_PWM_IP         ECP37_PWM_IP  // interrupt priority for this analog input
    #define _TP37_PWM_Interrupt ECP37_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #38 is TP38
#define TP38_TRIS    ECP38_TRIS // GPIO direction register bit
#define TP38_Write() ECP38_Write() // GPIO port latch register bit
#define TP38_Read()  ECP38_Read() // GPIO port register bit
#define TP38_ODC     ECP38_ODC // GPIO port open drain configuration register bit
#define TP38_CNPU    ECP38_CNPU // GPIO port pull-up resistor register bit
#define TP38_CNPD    ECP38_CNPD // GPIO port pull-down resistor register bit
#define TP38_CNEN0   ECP38_CNEN0 // GPIO port change notification Enable register bit
#define TP38_CNSTAT  ECP38_CNSTAT // GPIO port change notification Status register bit
#define TP38_CNEN1   ECP38_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP38_CNF     ECP38_CNF // GPIO port change notification flag bit register bit
#if defined ECP38_RP
  #define TP38_RP       ECP38_RP // Number of Remappable Pin
  #define _TP38_RPxR    ECP38_RPxR // Remappable Pin Register
#endif
#define TP38_Set()    ECP38_Set() 
#define TP38_Clear()  ECP38_Clear()
#define TP38_Toggle() ECP38_Toggle() 
#define TP38_IS_ANALOG_INPUT    ECP38_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP38_ANSEL
  #define TP38_ANSEL          ECP38_ANSEL            // analog/digital pin configuration register bit
  #define TP38_ADCCORE        ECP38_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP38_IS_SHARED_CORE ECP38_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP38_ADC_AN_INPUT   ECP38_ADC_AN_INPUT     // ANx input pin number
  #define TP38_ADCBUF         ECP38_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP38_ADC_ANIE ADIELbits.IE      ECP38_ADC_ANIE ADIELbits.IE
  #define TP38_ADC_ANEIE ADEIELbits.EIEN  ECP38_ADC_ANEIE ADEIELbits.EIEN
  #define TP38_ADC_IF         ECP38_ADC_IF           // interrupt flag bit
  #define TP38_ADC_IE         ECP38_ADC_IE           // interrupt enable bit
  #define TP38_ADC_IP         ECP38_ADC_IP           // interrupt priority for this analog input
  #define TP38_ADC_RDY        ECP38_ADC_RDY          // ADC buffer ready bit
  #define _TP38_ADC_Interrupt ECP38_ADC_Interrupt   
  #define TP38_INIT_ANALOG    ECP38_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP38_InitAsOutput()   ECP38_InitAsOutput()             // initialization macro for digital output
#define TP38_InitAsInput()    ECP38_InitAsInput()              // initialization macro for digital input
#if defined (ECP38_PGx_CHANNEL)
  #define TP38_PGx_CHANNEL      ECP38_PGx_CHANNEL // PWM channel index
  #define TP38_PGx_PER          TP38_PGx_PER // PWM channel period register
  #define TP38_PGx_PHASE        TP38_PGx_PHASE // PWM channel phase register
  #define TP38_PGx_DC           TP38_PGx_DC // PWM channel duty cycle register
  #define TP38_PGx_DCA          TP38_PGx_DCA // PWM channel duty cycle A register
  #define TP38_PGx_DTH          TP38_PGx_DTH // PWM channel rising edge dead time register
  #define TP38_PGx_DTL          TP38_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP38_PGx_OVRENH)
    #define TP38_PGx_OVRENH       ECP38_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP38_PGx_PENH         ECP38_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP38_PGx_OVRENL)
    #define TP38_PGx_OVRENL       ECP38_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP38_PGx_PENL         ECP38_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP38_PGxUPDREQ        ECP38_PGxUPDREQ // PWM channel register update request 
  #define TP38_PGxTRIGA         ECP38_PGxTRIGA // PWM channel ADC trigger A register
  #define TP38_PGxTRIGB         ECP38_PGxTRIGB // PWM channel ADC trigger B register
  #define TP38_PGxTRIGC         ECP38_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP38_PWM_IF)
    #define TP38_PWM_IF         ECP38_PWM_IF  // interrupt flag bit
    #define TP38_PWM_IE         ECP38_PWM_IE  // interrupt enable bit
    #define TP38_PWM_IP         ECP38_PWM_IP  // interrupt priority for this analog input
    #define _TP38_PWM_Interrupt ECP38_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #39 is TP39
#define TP39_TRIS    ECP39_TRIS // GPIO direction register bit
#define TP39_Write() ECP39_Write() // GPIO port latch register bit
#define TP39_Read()  ECP39_Read() // GPIO port register bit
#define TP39_ODC     ECP39_ODC // GPIO port open drain configuration register bit
#define TP39_CNPU    ECP39_CNPU // GPIO port pull-up resistor register bit
#define TP39_CNPD    ECP39_CNPD // GPIO port pull-down resistor register bit
#define TP39_CNEN0   ECP39_CNEN0 // GPIO port change notification Enable register bit
#define TP39_CNSTAT  ECP39_CNSTAT // GPIO port change notification Status register bit
#define TP39_CNEN1   ECP39_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP39_CNF     ECP39_CNF // GPIO port change notification flag bit register bit
#if defined ECP39_RP
  #define TP39_RP       ECP39_RP // Number of Remappable Pin
  #define _TP39_RPxR    ECP39_RPxR // Remappable Pin Register
#endif
#define TP39_Set()    ECP39_Set() 
#define TP39_Clear()  ECP39_Clear()
#define TP39_Toggle() ECP39_Toggle() 
#define TP39_IS_ANALOG_INPUT    ECP39_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP39_ANSEL
  #define TP39_ANSEL          ECP39_ANSEL            // analog/digital pin configuration register bit
  #define TP39_ADCCORE        ECP39_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP39_IS_SHARED_CORE ECP39_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP39_ADC_AN_INPUT   ECP39_ADC_AN_INPUT     // ANx input pin number
  #define TP39_ADCBUF         ECP39_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP39_ADC_ANIE ADIELbits.IE      ECP39_ADC_ANIE ADIELbits.IE
  #define TP39_ADC_ANEIE ADEIELbits.EIEN  ECP39_ADC_ANEIE ADEIELbits.EIEN
  #define TP39_ADC_IF         ECP39_ADC_IF           // interrupt flag bit
  #define TP39_ADC_IE         ECP39_ADC_IE           // interrupt enable bit
  #define TP39_ADC_IP         ECP39_ADC_IP           // interrupt priority for this analog input
  #define TP39_ADC_RDY        ECP39_ADC_RDY          // ADC buffer ready bit
  #define _TP39_ADC_Interrupt ECP39_ADC_Interrupt   
  #define TP39_INIT_ANALOG    ECP39_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP39_InitAsOutput()   ECP39_InitAsOutput()             // initialization macro for digital output
#define TP39_InitAsInput()    ECP39_InitAsInput()              // initialization macro for digital input
#if defined (ECP39_PGx_CHANNEL)
  #define TP39_PGx_CHANNEL      ECP39_PGx_CHANNEL // PWM channel index
  #define TP39_PGx_PER          TP39_PGx_PER // PWM channel period register
  #define TP39_PGx_PHASE        TP39_PGx_PHASE // PWM channel phase register
  #define TP39_PGx_DC           TP39_PGx_DC // PWM channel duty cycle register
  #define TP39_PGx_DCA          TP39_PGx_DCA // PWM channel duty cycle A register
  #define TP39_PGx_DTH          TP39_PGx_DTH // PWM channel rising edge dead time register
  #define TP39_PGx_DTL          TP39_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP39_PGx_OVRENH)
    #define TP39_PGx_OVRENH       ECP39_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP39_PGx_PENH         ECP39_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP39_PGx_OVRENL)
    #define TP39_PGx_OVRENL       ECP39_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP39_PGx_PENL         ECP39_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP39_PGxUPDREQ        ECP39_PGxUPDREQ // PWM channel register update request 
  #define TP39_PGxTRIGA         ECP39_PGxTRIGA // PWM channel ADC trigger A register
  #define TP39_PGxTRIGB         ECP39_PGxTRIGB // PWM channel ADC trigger B register
  #define TP39_PGxTRIGC         ECP39_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP39_PWM_IF)
    #define TP39_PWM_IF         ECP39_PWM_IF  // interrupt flag bit
    #define TP39_PWM_IE         ECP39_PWM_IE  // interrupt enable bit
    #define TP39_PWM_IP         ECP39_PWM_IP  // interrupt priority for this analog input
    #define _TP39_PWM_Interrupt ECP39_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #40 is TP40
#define TP40_TRIS    ECP40_TRIS // GPIO direction register bit
#define TP40_Write() ECP40_Write() // GPIO port latch register bit
#define TP40_Read()  ECP40_Read() // GPIO port register bit
#define TP40_ODC     ECP40_ODC // GPIO port open drain configuration register bit
#define TP40_CNPU    ECP40_CNPU // GPIO port pull-up resistor register bit
#define TP40_CNPD    ECP40_CNPD // GPIO port pull-down resistor register bit
#define TP40_CNEN0   ECP40_CNEN0 // GPIO port change notification Enable register bit
#define TP40_CNSTAT  ECP40_CNSTAT // GPIO port change notification Status register bit
#define TP40_CNEN1   ECP40_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP40_CNF     ECP40_CNF // GPIO port change notification flag bit register bit
#if defined ECP40_RP
  #define TP40_RP       ECP40_RP // Number of Remappable Pin
  #define _TP40_RPxR    ECP40_RPxR // Remappable Pin Register
#endif
#define TP40_Set()    ECP40_Set() 
#define TP40_Clear()  ECP40_Clear()
#define TP40_Toggle() ECP40_Toggle() 
#define TP40_IS_ANALOG_INPUT    ECP40_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP40_ANSEL
  #define TP40_ANSEL          ECP40_ANSEL            // analog/digital pin configuration register bit
  #define TP40_ADCCORE        ECP40_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP40_IS_SHARED_CORE ECP40_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP40_ADC_AN_INPUT   ECP40_ADC_AN_INPUT     // ANx input pin number
  #define TP40_ADCBUF         ECP40_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP40_ADC_ANIE ADIELbits.IE      ECP40_ADC_ANIE ADIELbits.IE
  #define TP40_ADC_ANEIE ADEIELbits.EIEN  ECP40_ADC_ANEIE ADEIELbits.EIEN
  #define TP40_ADC_IF         ECP40_ADC_IF           // interrupt flag bit
  #define TP40_ADC_IE         ECP40_ADC_IE           // interrupt enable bit
  #define TP40_ADC_IP         ECP40_ADC_IP           // interrupt priority for this analog input
  #define TP40_ADC_RDY        ECP40_ADC_RDY          // ADC buffer ready bit
  #define _TP40_ADC_Interrupt ECP40_ADC_Interrupt   
  #define TP40_INIT_ANALOG    ECP40_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP40_InitAsOutput()   ECP40_InitAsOutput()             // initialization macro for digital output
#define TP40_InitAsInput()    ECP40_InitAsInput()              // initialization macro for digital input
#if defined (ECP40_PGx_CHANNEL)
  #define TP40_PGx_CHANNEL      ECP40_PGx_CHANNEL // PWM channel index
  #define TP40_PGx_PER          TP40_PGx_PER // PWM channel period register
  #define TP40_PGx_PHASE        TP40_PGx_PHASE // PWM channel phase register
  #define TP40_PGx_DC           TP40_PGx_DC // PWM channel duty cycle register
  #define TP40_PGx_DCA          TP40_PGx_DCA // PWM channel duty cycle A register
  #define TP40_PGx_DTH          TP40_PGx_DTH // PWM channel rising edge dead time register
  #define TP40_PGx_DTL          TP40_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP40_PGx_OVRENH)
    #define TP40_PGx_OVRENH       ECP40_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP40_PGx_PENH         ECP40_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP40_PGx_OVRENL)
    #define TP40_PGx_OVRENL       ECP40_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP40_PGx_PENL         ECP40_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP40_PGxUPDREQ        ECP40_PGxUPDREQ // PWM channel register update request 
  #define TP40_PGxTRIGA         ECP40_PGxTRIGA // PWM channel ADC trigger A register
  #define TP40_PGxTRIGB         ECP40_PGxTRIGB // PWM channel ADC trigger B register
  #define TP40_PGxTRIGC         ECP40_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP40_PWM_IF)
    #define TP40_PWM_IF         ECP40_PWM_IF  // interrupt flag bit
    #define TP40_PWM_IE         ECP40_PWM_IE  // interrupt enable bit
    #define TP40_PWM_IP         ECP40_PWM_IP  // interrupt priority for this analog input
    #define _TP40_PWM_Interrupt ECP40_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #41 is TP41
#define TP41_TRIS    ECP41_TRIS // GPIO direction register bit
#define TP41_Write() ECP41_Write() // GPIO port latch register bit
#define TP41_Read()  ECP41_Read() // GPIO port register bit
#define TP41_ODC     ECP41_ODC // GPIO port open drain configuration register bit
#define TP41_CNPU    ECP41_CNPU // GPIO port pull-up resistor register bit
#define TP41_CNPD    ECP41_CNPD // GPIO port pull-down resistor register bit
#define TP41_CNEN0   ECP41_CNEN0 // GPIO port change notification Enable register bit
#define TP41_CNSTAT  ECP41_CNSTAT // GPIO port change notification Status register bit
#define TP41_CNEN1   ECP41_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP41_CNF     ECP41_CNF // GPIO port change notification flag bit register bit
#if defined ECP41_RP
  #define TP41_RP       ECP41_RP // Number of Remappable Pin
  #define _TP41_RPxR    ECP41_RPxR // Remappable Pin Register
#endif
#define TP41_Set()    ECP41_Set() 
#define TP41_Clear()  ECP41_Clear()
#define TP41_Toggle() ECP41_Toggle() 
#define TP41_IS_ANALOG_INPUT    ECP41_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP41_ANSEL
  #define TP41_ANSEL          ECP41_ANSEL            // analog/digital pin configuration register bit
  #define TP41_ADCCORE        ECP41_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP41_IS_SHARED_CORE ECP41_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP41_ADC_AN_INPUT   ECP41_ADC_AN_INPUT     // ANx input pin number
  #define TP41_ADCBUF         ECP41_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP41_ADC_ANIE ADIELbits.IE      ECP41_ADC_ANIE ADIELbits.IE
  #define TP41_ADC_ANEIE ADEIELbits.EIEN  ECP41_ADC_ANEIE ADEIELbits.EIEN
  #define TP41_ADC_IF         ECP41_ADC_IF           // interrupt flag bit
  #define TP41_ADC_IE         ECP41_ADC_IE           // interrupt enable bit
  #define TP41_ADC_IP         ECP41_ADC_IP           // interrupt priority for this analog input
  #define TP41_ADC_RDY        ECP41_ADC_RDY          // ADC buffer ready bit
  #define _TP41_ADC_Interrupt ECP41_ADC_Interrupt   
  #define TP41_INIT_ANALOG    ECP41_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP41_InitAsOutput()   ECP41_InitAsOutput()             // initialization macro for digital output
#define TP41_InitAsInput()    ECP41_InitAsInput()              // initialization macro for digital input
#if defined (ECP41_PGx_CHANNEL)
  #define TP41_PGx_CHANNEL      ECP41_PGx_CHANNEL // PWM channel index
  #define TP41_PGx_PER          TP41_PGx_PER // PWM channel period register
  #define TP41_PGx_PHASE        TP41_PGx_PHASE // PWM channel phase register
  #define TP41_PGx_DC           TP41_PGx_DC // PWM channel duty cycle register
  #define TP41_PGx_DCA          TP41_PGx_DCA // PWM channel duty cycle A register
  #define TP41_PGx_DTH          TP41_PGx_DTH // PWM channel rising edge dead time register
  #define TP41_PGx_DTL          TP41_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP41_PGx_OVRENH)
    #define TP41_PGx_OVRENH       ECP41_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP41_PGx_PENH         ECP41_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP41_PGx_OVRENL)
    #define TP41_PGx_OVRENL       ECP41_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP41_PGx_PENL         ECP41_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP41_PGxUPDREQ        ECP41_PGxUPDREQ // PWM channel register update request 
  #define TP41_PGxTRIGA         ECP41_PGxTRIGA // PWM channel ADC trigger A register
  #define TP41_PGxTRIGB         ECP41_PGxTRIGB // PWM channel ADC trigger B register
  #define TP41_PGxTRIGC         ECP41_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP41_PWM_IF)
    #define TP41_PWM_IF         ECP41_PWM_IF  // interrupt flag bit
    #define TP41_PWM_IE         ECP41_PWM_IE  // interrupt enable bit
    #define TP41_PWM_IP         ECP41_PWM_IP  // interrupt priority for this analog input
    #define _TP41_PWM_Interrupt ECP41_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #42 is TP42
#define TP42_TRIS    ECP42_TRIS // GPIO direction register bit
#define TP42_Write() ECP42_Write() // GPIO port latch register bit
#define TP42_Read()  ECP42_Read() // GPIO port register bit
#define TP42_ODC     ECP42_ODC // GPIO port open drain configuration register bit
#define TP42_CNPU    ECP42_CNPU // GPIO port pull-up resistor register bit
#define TP42_CNPD    ECP42_CNPD // GPIO port pull-down resistor register bit
#define TP42_CNEN0   ECP42_CNEN0 // GPIO port change notification Enable register bit
#define TP42_CNSTAT  ECP42_CNSTAT // GPIO port change notification Status register bit
#define TP42_CNEN1   ECP42_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP42_CNF     ECP42_CNF // GPIO port change notification flag bit register bit
#if defined ECP42_RP
  #define TP42_RP       ECP42_RP // Number of Remappable Pin
  #define _TP42_RPxR    ECP42_RPxR // Remappable Pin Register
#endif
#define TP42_Set()    ECP42_Set() 
#define TP42_Clear()  ECP42_Clear()
#define TP42_Toggle() ECP42_Toggle() 
#define TP42_IS_ANALOG_INPUT    ECP42_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP42_ANSEL
  #define TP42_ANSEL          ECP42_ANSEL            // analog/digital pin configuration register bit
  #define TP42_ADCCORE        ECP42_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP42_IS_SHARED_CORE ECP42_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP42_ADC_AN_INPUT   ECP42_ADC_AN_INPUT     // ANx input pin number
  #define TP42_ADCBUF         ECP42_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP42_ADC_ANIE ADIELbits.IE      ECP42_ADC_ANIE ADIELbits.IE
  #define TP42_ADC_ANEIE ADEIELbits.EIEN  ECP42_ADC_ANEIE ADEIELbits.EIEN
  #define TP42_ADC_IF         ECP42_ADC_IF           // interrupt flag bit
  #define TP42_ADC_IE         ECP42_ADC_IE           // interrupt enable bit
  #define TP42_ADC_IP         ECP42_ADC_IP           // interrupt priority for this analog input
  #define TP42_ADC_RDY        ECP42_ADC_RDY          // ADC buffer ready bit
  #define _TP42_ADC_Interrupt ECP42_ADC_Interrupt   
  #define TP42_INIT_ANALOG    ECP42_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP42_InitAsOutput()   ECP42_InitAsOutput()             // initialization macro for digital output
#define TP42_InitAsInput()    ECP42_InitAsInput()              // initialization macro for digital input
#if defined (ECP42_PGx_CHANNEL)
  #define TP42_PGx_CHANNEL      ECP42_PGx_CHANNEL // PWM channel index
  #define TP42_PGx_PER          TP42_PGx_PER // PWM channel period register
  #define TP42_PGx_PHASE        TP42_PGx_PHASE // PWM channel phase register
  #define TP42_PGx_DC           TP42_PGx_DC // PWM channel duty cycle register
  #define TP42_PGx_DCA          TP42_PGx_DCA // PWM channel duty cycle A register
  #define TP42_PGx_DTH          TP42_PGx_DTH // PWM channel rising edge dead time register
  #define TP42_PGx_DTL          TP42_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP42_PGx_OVRENH)
    #define TP42_PGx_OVRENH       ECP42_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP42_PGx_PENH         ECP42_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP42_PGx_OVRENL)
    #define TP42_PGx_OVRENL       ECP42_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP42_PGx_PENL         ECP42_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP42_PGxUPDREQ        ECP42_PGxUPDREQ // PWM channel register update request 
  #define TP42_PGxTRIGA         ECP42_PGxTRIGA // PWM channel ADC trigger A register
  #define TP42_PGxTRIGB         ECP42_PGxTRIGB // PWM channel ADC trigger B register
  #define TP42_PGxTRIGC         ECP42_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP42_PWM_IF)
    #define TP42_PWM_IF         ECP42_PWM_IF  // interrupt flag bit
    #define TP42_PWM_IE         ECP42_PWM_IE  // interrupt enable bit
    #define TP42_PWM_IP         ECP42_PWM_IP  // interrupt priority for this analog input
    #define _TP42_PWM_Interrupt ECP42_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #43 is TP43
#define TP43_TRIS    ECP43_TRIS // GPIO direction register bit
#define TP43_Write() ECP43_Write() // GPIO port latch register bit
#define TP43_Read()  ECP43_Read() // GPIO port register bit
#define TP43_ODC     ECP43_ODC // GPIO port open drain configuration register bit
#define TP43_CNPU    ECP43_CNPU // GPIO port pull-up resistor register bit
#define TP43_CNPD    ECP43_CNPD // GPIO port pull-down resistor register bit
#define TP43_CNEN0   ECP43_CNEN0 // GPIO port change notification Enable register bit
#define TP43_CNSTAT  ECP43_CNSTAT // GPIO port change notification Status register bit
#define TP43_CNEN1   ECP43_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP43_CNF     ECP43_CNF // GPIO port change notification flag bit register bit
#if defined ECP43_RP
  #define TP43_RP       ECP43_RP // Number of Remappable Pin
  #define _TP43_RPxR    ECP43_RPxR // Remappable Pin Register
#endif
#define TP43_Set()    ECP43_Set() 
#define TP43_Clear()  ECP43_Clear()
#define TP43_Toggle() ECP43_Toggle() 
#define TP43_IS_ANALOG_INPUT    ECP43_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP43_ANSEL
  #define TP43_ANSEL          ECP43_ANSEL            // analog/digital pin configuration register bit
  #define TP43_ADCCORE        ECP43_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP43_IS_SHARED_CORE ECP43_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP43_ADC_AN_INPUT   ECP43_ADC_AN_INPUT     // ANx input pin number
  #define TP43_ADCBUF         ECP43_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP43_ADC_ANIE ADIELbits.IE      ECP43_ADC_ANIE ADIELbits.IE
  #define TP43_ADC_ANEIE ADEIELbits.EIEN  ECP43_ADC_ANEIE ADEIELbits.EIEN
  #define TP43_ADC_IF         ECP43_ADC_IF           // interrupt flag bit
  #define TP43_ADC_IE         ECP43_ADC_IE           // interrupt enable bit
  #define TP43_ADC_IP         ECP43_ADC_IP           // interrupt priority for this analog input
  #define TP43_ADC_RDY        ECP43_ADC_RDY          // ADC buffer ready bit
  #define _TP43_ADC_Interrupt ECP43_ADC_Interrupt   
  #define TP43_INIT_ANALOG    ECP43_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP43_InitAsOutput()   ECP43_InitAsOutput()             // initialization macro for digital output
#define TP43_InitAsInput()    ECP43_InitAsInput()              // initialization macro for digital input
#if defined (ECP43_PGx_CHANNEL)
  #define TP43_PGx_CHANNEL      ECP43_PGx_CHANNEL // PWM channel index
  #define TP43_PGx_PER          TP43_PGx_PER // PWM channel period register
  #define TP43_PGx_PHASE        TP43_PGx_PHASE // PWM channel phase register
  #define TP43_PGx_DC           TP43_PGx_DC // PWM channel duty cycle register
  #define TP43_PGx_DCA          TP43_PGx_DCA // PWM channel duty cycle A register
  #define TP43_PGx_DTH          TP43_PGx_DTH // PWM channel rising edge dead time register
  #define TP43_PGx_DTL          TP43_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP43_PGx_OVRENH)
    #define TP43_PGx_OVRENH       ECP43_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP43_PGx_PENH         ECP43_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP43_PGx_OVRENL)
    #define TP43_PGx_OVRENL       ECP43_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP43_PGx_PENL         ECP43_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP43_PGxUPDREQ        ECP43_PGxUPDREQ // PWM channel register update request 
  #define TP43_PGxTRIGA         ECP43_PGxTRIGA // PWM channel ADC trigger A register
  #define TP43_PGxTRIGB         ECP43_PGxTRIGB // PWM channel ADC trigger B register
  #define TP43_PGxTRIGC         ECP43_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP43_PWM_IF)
    #define TP43_PWM_IF         ECP43_PWM_IF  // interrupt flag bit
    #define TP43_PWM_IE         ECP43_PWM_IE  // interrupt enable bit
    #define TP43_PWM_IP         ECP43_PWM_IP  // interrupt priority for this analog input
    #define _TP43_PWM_Interrupt ECP43_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #44 is TP44
#define TP44_TRIS    ECP44_TRIS // GPIO direction register bit
#define TP44_Write() ECP44_Write() // GPIO port latch register bit
#define TP44_Read()  ECP44_Read() // GPIO port register bit
#define TP44_ODC     ECP44_ODC // GPIO port open drain configuration register bit
#define TP44_CNPU    ECP44_CNPU // GPIO port pull-up resistor register bit
#define TP44_CNPD    ECP44_CNPD // GPIO port pull-down resistor register bit
#define TP44_CNEN0   ECP44_CNEN0 // GPIO port change notification Enable register bit
#define TP44_CNSTAT  ECP44_CNSTAT // GPIO port change notification Status register bit
#define TP44_CNEN1   ECP44_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP44_CNF     ECP44_CNF // GPIO port change notification flag bit register bit
#if defined ECP44_RP
  #define TP44_RP       ECP44_RP // Number of Remappable Pin
  #define _TP44_RPxR    ECP44_RPxR // Remappable Pin Register
#endif
#define TP44_Set()    ECP44_Set() 
#define TP44_Clear()  ECP44_Clear()
#define TP44_Toggle() ECP44_Toggle() 
#define TP44_IS_ANALOG_INPUT    ECP44_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP44_ANSEL
  #define TP44_ANSEL          ECP44_ANSEL            // analog/digital pin configuration register bit
  #define TP44_ADCCORE        ECP44_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP44_IS_SHARED_CORE ECP44_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP44_ADC_AN_INPUT   ECP44_ADC_AN_INPUT     // ANx input pin number
  #define TP44_ADCBUF         ECP44_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP44_ADC_ANIE ADIELbits.IE      ECP44_ADC_ANIE ADIELbits.IE
  #define TP44_ADC_ANEIE ADEIELbits.EIEN  ECP44_ADC_ANEIE ADEIELbits.EIEN
  #define TP44_ADC_IF         ECP44_ADC_IF           // interrupt flag bit
  #define TP44_ADC_IE         ECP44_ADC_IE           // interrupt enable bit
  #define TP44_ADC_IP         ECP44_ADC_IP           // interrupt priority for this analog input
  #define TP44_ADC_RDY        ECP44_ADC_RDY          // ADC buffer ready bit
  #define _TP44_ADC_Interrupt ECP44_ADC_Interrupt   
  #define TP44_INIT_ANALOG    ECP44_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP44_InitAsOutput()   ECP44_InitAsOutput()             // initialization macro for digital output
#define TP44_InitAsInput()    ECP44_InitAsInput()              // initialization macro for digital input
#if defined (ECP44_PGx_CHANNEL)
  #define TP44_PGx_CHANNEL      ECP44_PGx_CHANNEL // PWM channel index
  #define TP44_PGx_PER          TP44_PGx_PER // PWM channel period register
  #define TP44_PGx_PHASE        TP44_PGx_PHASE // PWM channel phase register
  #define TP44_PGx_DC           TP44_PGx_DC // PWM channel duty cycle register
  #define TP44_PGx_DCA          TP44_PGx_DCA // PWM channel duty cycle A register
  #define TP44_PGx_DTH          TP44_PGx_DTH // PWM channel rising edge dead time register
  #define TP44_PGx_DTL          TP44_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP44_PGx_OVRENH)
    #define TP44_PGx_OVRENH       ECP44_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP44_PGx_PENH         ECP44_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP44_PGx_OVRENL)
    #define TP44_PGx_OVRENL       ECP44_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP44_PGx_PENL         ECP44_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP44_PGxUPDREQ        ECP44_PGxUPDREQ // PWM channel register update request 
  #define TP44_PGxTRIGA         ECP44_PGxTRIGA // PWM channel ADC trigger A register
  #define TP44_PGxTRIGB         ECP44_PGxTRIGB // PWM channel ADC trigger B register
  #define TP44_PGxTRIGC         ECP44_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP44_PWM_IF)
    #define TP44_PWM_IF         ECP44_PWM_IF  // interrupt flag bit
    #define TP44_PWM_IE         ECP44_PWM_IE  // interrupt enable bit
    #define TP44_PWM_IP         ECP44_PWM_IP  // interrupt priority for this analog input
    #define _TP44_PWM_Interrupt ECP44_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #45 is TP45
#define TP45_TRIS    ECP45_TRIS // GPIO direction register bit
#define TP45_Write() ECP45_Write() // GPIO port latch register bit
#define TP45_Read()  ECP45_Read() // GPIO port register bit
#define TP45_ODC     ECP45_ODC // GPIO port open drain configuration register bit
#define TP45_CNPU    ECP45_CNPU // GPIO port pull-up resistor register bit
#define TP45_CNPD    ECP45_CNPD // GPIO port pull-down resistor register bit
#define TP45_CNEN0   ECP45_CNEN0 // GPIO port change notification Enable register bit
#define TP45_CNSTAT  ECP45_CNSTAT // GPIO port change notification Status register bit
#define TP45_CNEN1   ECP45_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP45_CNF     ECP45_CNF // GPIO port change notification flag bit register bit
#if defined ECP45_RP
  #define TP45_RP       ECP45_RP // Number of Remappable Pin
  #define _TP45_RPxR    ECP45_RPxR // Remappable Pin Register
#endif
#define TP45_Set()    ECP45_Set() 
#define TP45_Clear()  ECP45_Clear()
#define TP45_Toggle() ECP45_Toggle() 
#define TP45_IS_ANALOG_INPUT    ECP45_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP45_ANSEL
  #define TP45_ANSEL          ECP45_ANSEL            // analog/digital pin configuration register bit
  #define TP45_ADCCORE        ECP45_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP45_IS_SHARED_CORE ECP45_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP45_ADC_AN_INPUT   ECP45_ADC_AN_INPUT     // ANx input pin number
  #define TP45_ADCBUF         ECP45_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP45_ADC_ANIE ADIELbits.IE      ECP45_ADC_ANIE ADIELbits.IE
  #define TP45_ADC_ANEIE ADEIELbits.EIEN  ECP45_ADC_ANEIE ADEIELbits.EIEN
  #define TP45_ADC_IF         ECP45_ADC_IF           // interrupt flag bit
  #define TP45_ADC_IE         ECP45_ADC_IE           // interrupt enable bit
  #define TP45_ADC_IP         ECP45_ADC_IP           // interrupt priority for this analog input
  #define TP45_ADC_RDY        ECP45_ADC_RDY          // ADC buffer ready bit
  #define _TP45_ADC_Interrupt ECP45_ADC_Interrupt   
  #define TP45_INIT_ANALOG    ECP45_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP45_InitAsOutput()   ECP45_InitAsOutput()             // initialization macro for digital output
#define TP45_InitAsInput()    ECP45_InitAsInput()              // initialization macro for digital input
#if defined (ECP45_PGx_CHANNEL)
  #define TP45_PGx_CHANNEL      ECP45_PGx_CHANNEL // PWM channel index
  #define TP45_PGx_PER          TP45_PGx_PER // PWM channel period register
  #define TP45_PGx_PHASE        TP45_PGx_PHASE // PWM channel phase register
  #define TP45_PGx_DC           TP45_PGx_DC // PWM channel duty cycle register
  #define TP45_PGx_DCA          TP45_PGx_DCA // PWM channel duty cycle A register
  #define TP45_PGx_DTH          TP45_PGx_DTH // PWM channel rising edge dead time register
  #define TP45_PGx_DTL          TP45_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP45_PGx_OVRENH)
    #define TP45_PGx_OVRENH       ECP45_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP45_PGx_PENH         ECP45_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP45_PGx_OVRENL)
    #define TP45_PGx_OVRENL       ECP45_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP45_PGx_PENL         ECP45_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP45_PGxUPDREQ        ECP45_PGxUPDREQ // PWM channel register update request 
  #define TP45_PGxTRIGA         ECP45_PGxTRIGA // PWM channel ADC trigger A register
  #define TP45_PGxTRIGB         ECP45_PGxTRIGB // PWM channel ADC trigger B register
  #define TP45_PGxTRIGC         ECP45_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP45_PWM_IF)
    #define TP45_PWM_IF         ECP45_PWM_IF  // interrupt flag bit
    #define TP45_PWM_IE         ECP45_PWM_IE  // interrupt enable bit
    #define TP45_PWM_IP         ECP45_PWM_IP  // interrupt priority for this analog input
    #define _TP45_PWM_Interrupt ECP45_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #46 is TP46
#define TP46_TRIS    ECP46_TRIS // GPIO direction register bit
#define TP46_Write() ECP46_Write() // GPIO port latch register bit
#define TP46_Read()  ECP46_Read() // GPIO port register bit
#define TP46_ODC     ECP46_ODC // GPIO port open drain configuration register bit
#define TP46_CNPU    ECP46_CNPU // GPIO port pull-up resistor register bit
#define TP46_CNPD    ECP46_CNPD // GPIO port pull-down resistor register bit
#define TP46_CNEN0   ECP46_CNEN0 // GPIO port change notification Enable register bit
#define TP46_CNSTAT  ECP46_CNSTAT // GPIO port change notification Status register bit
#define TP46_CNEN1   ECP46_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP46_CNF     ECP46_CNF // GPIO port change notification flag bit register bit
#if defined ECP46_RP
  #define TP46_RP       ECP46_RP // Number of Remappable Pin
  #define _TP46_RPxR    ECP46_RPxR // Remappable Pin Register
#endif
#define TP46_Set()    ECP46_Set() 
#define TP46_Clear()  ECP46_Clear()
#define TP46_Toggle() ECP46_Toggle() 
#define TP46_IS_ANALOG_INPUT    ECP46_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP46_ANSEL
  #define TP46_ANSEL          ECP46_ANSEL            // analog/digital pin configuration register bit
  #define TP46_ADCCORE        ECP46_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP46_IS_SHARED_CORE ECP46_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP46_ADC_AN_INPUT   ECP46_ADC_AN_INPUT     // ANx input pin number
  #define TP46_ADCBUF         ECP46_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP46_ADC_ANIE ADIELbits.IE      ECP46_ADC_ANIE ADIELbits.IE
  #define TP46_ADC_ANEIE ADEIELbits.EIEN  ECP46_ADC_ANEIE ADEIELbits.EIEN
  #define TP46_ADC_IF         ECP46_ADC_IF           // interrupt flag bit
  #define TP46_ADC_IE         ECP46_ADC_IE           // interrupt enable bit
  #define TP46_ADC_IP         ECP46_ADC_IP           // interrupt priority for this analog input
  #define TP46_ADC_RDY        ECP46_ADC_RDY          // ADC buffer ready bit
  #define _TP46_ADC_Interrupt ECP46_ADC_Interrupt   
  #define TP46_INIT_ANALOG    ECP46_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP46_InitAsOutput()   ECP46_InitAsOutput()             // initialization macro for digital output
#define TP46_InitAsInput()    ECP46_InitAsInput()              // initialization macro for digital input
#if defined (ECP46_PGx_CHANNEL)
  #define TP46_PGx_CHANNEL      ECP46_PGx_CHANNEL // PWM channel index
  #define TP46_PGx_PER          TP46_PGx_PER // PWM channel period register
  #define TP46_PGx_PHASE        TP46_PGx_PHASE // PWM channel phase register
  #define TP46_PGx_DC           TP46_PGx_DC // PWM channel duty cycle register
  #define TP46_PGx_DCA          TP46_PGx_DCA // PWM channel duty cycle A register
  #define TP46_PGx_DTH          TP46_PGx_DTH // PWM channel rising edge dead time register
  #define TP46_PGx_DTL          TP46_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP46_PGx_OVRENH)
    #define TP46_PGx_OVRENH       ECP46_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP46_PGx_PENH         ECP46_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP46_PGx_OVRENL)
    #define TP46_PGx_OVRENL       ECP46_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP46_PGx_PENL         ECP46_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP46_PGxUPDREQ        ECP46_PGxUPDREQ // PWM channel register update request 
  #define TP46_PGxTRIGA         ECP46_PGxTRIGA // PWM channel ADC trigger A register
  #define TP46_PGxTRIGB         ECP46_PGxTRIGB // PWM channel ADC trigger B register
  #define TP46_PGxTRIGC         ECP46_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP46_PWM_IF)
    #define TP46_PWM_IF         ECP46_PWM_IF  // interrupt flag bit
    #define TP46_PWM_IE         ECP46_PWM_IE  // interrupt enable bit
    #define TP46_PWM_IP         ECP46_PWM_IP  // interrupt priority for this analog input
    #define _TP46_PWM_Interrupt ECP46_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #47 is TP47
#define TP47_TRIS    ECP47_TRIS // GPIO direction register bit
#define TP47_Write() ECP47_Write() // GPIO port latch register bit
#define TP47_Read()  ECP47_Read() // GPIO port register bit
#define TP47_ODC     ECP47_ODC // GPIO port open drain configuration register bit
#define TP47_CNPU    ECP47_CNPU // GPIO port pull-up resistor register bit
#define TP47_CNPD    ECP47_CNPD // GPIO port pull-down resistor register bit
#define TP47_CNEN0   ECP47_CNEN0 // GPIO port change notification Enable register bit
#define TP47_CNSTAT  ECP47_CNSTAT // GPIO port change notification Status register bit
#define TP47_CNEN1   ECP47_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP47_CNF     ECP47_CNF // GPIO port change notification flag bit register bit
#if defined ECP47_RP
  #define TP47_RP       ECP47_RP // Number of Remappable Pin
  #define _TP47_RPxR    ECP47_RPxR // Remappable Pin Register
#endif
#define TP47_Set()    ECP47_Set() 
#define TP47_Clear()  ECP47_Clear()
#define TP47_Toggle() ECP47_Toggle() 
#define TP47_IS_ANALOG_INPUT    ECP47_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP47_ANSEL
  #define TP47_ANSEL          ECP47_ANSEL            // analog/digital pin configuration register bit
  #define TP47_ADCCORE        ECP47_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP47_IS_SHARED_CORE ECP47_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP47_ADC_AN_INPUT   ECP47_ADC_AN_INPUT     // ANx input pin number
  #define TP47_ADCBUF         ECP47_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP47_ADC_ANIE ADIELbits.IE      ECP47_ADC_ANIE ADIELbits.IE
  #define TP47_ADC_ANEIE ADEIELbits.EIEN  ECP47_ADC_ANEIE ADEIELbits.EIEN
  #define TP47_ADC_IF         ECP47_ADC_IF           // interrupt flag bit
  #define TP47_ADC_IE         ECP47_ADC_IE           // interrupt enable bit
  #define TP47_ADC_IP         ECP47_ADC_IP           // interrupt priority for this analog input
  #define TP47_ADC_RDY        ECP47_ADC_RDY          // ADC buffer ready bit
  #define _TP47_ADC_Interrupt ECP47_ADC_Interrupt   
  #define TP47_INIT_ANALOG    ECP47_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP47_InitAsOutput()   ECP47_InitAsOutput()             // initialization macro for digital output
#define TP47_InitAsInput()    ECP47_InitAsInput()              // initialization macro for digital input
#if defined (ECP47_PGx_CHANNEL)
  #define TP47_PGx_CHANNEL      ECP47_PGx_CHANNEL // PWM channel index
  #define TP47_PGx_PER          TP47_PGx_PER // PWM channel period register
  #define TP47_PGx_PHASE        TP47_PGx_PHASE // PWM channel phase register
  #define TP47_PGx_DC           TP47_PGx_DC // PWM channel duty cycle register
  #define TP47_PGx_DCA          TP47_PGx_DCA // PWM channel duty cycle A register
  #define TP47_PGx_DTH          TP47_PGx_DTH // PWM channel rising edge dead time register
  #define TP47_PGx_DTL          TP47_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP47_PGx_OVRENH)
    #define TP47_PGx_OVRENH       ECP47_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP47_PGx_PENH         ECP47_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP47_PGx_OVRENL)
    #define TP47_PGx_OVRENL       ECP47_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP47_PGx_PENL         ECP47_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP47_PGxUPDREQ        ECP47_PGxUPDREQ // PWM channel register update request 
  #define TP47_PGxTRIGA         ECP47_PGxTRIGA // PWM channel ADC trigger A register
  #define TP47_PGxTRIGB         ECP47_PGxTRIGB // PWM channel ADC trigger B register
  #define TP47_PGxTRIGC         ECP47_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP47_PWM_IF)
    #define TP47_PWM_IF         ECP47_PWM_IF  // interrupt flag bit
    #define TP47_PWM_IE         ECP47_PWM_IE  // interrupt enable bit
    #define TP47_PWM_IP         ECP47_PWM_IP  // interrupt priority for this analog input
    #define _TP47_PWM_Interrupt ECP47_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #48 is TP48
#define TP48_TRIS    ECP48_TRIS // GPIO direction register bit
#define TP48_Write() ECP48_Write() // GPIO port latch register bit
#define TP48_Read()  ECP48_Read() // GPIO port register bit
#define TP48_ODC     ECP48_ODC // GPIO port open drain configuration register bit
#define TP48_CNPU    ECP48_CNPU // GPIO port pull-up resistor register bit
#define TP48_CNPD    ECP48_CNPD // GPIO port pull-down resistor register bit
#define TP48_CNEN0   ECP48_CNEN0 // GPIO port change notification Enable register bit
#define TP48_CNSTAT  ECP48_CNSTAT // GPIO port change notification Status register bit
#define TP48_CNEN1   ECP48_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP48_CNF     ECP48_CNF // GPIO port change notification flag bit register bit
#if defined ECP48_RP
  #define TP48_RP       ECP48_RP // Number of Remappable Pin
  #define _TP48_RPxR    ECP48_RPxR // Remappable Pin Register
#endif
#define TP48_Set()    ECP48_Set() 
#define TP48_Clear()  ECP48_Clear()
#define TP48_Toggle() ECP48_Toggle() 
#define TP48_IS_ANALOG_INPUT    ECP48_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP48_ANSEL
  #define TP48_ANSEL          ECP48_ANSEL            // analog/digital pin configuration register bit
  #define TP48_ADCCORE        ECP48_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP48_IS_SHARED_CORE ECP48_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP48_ADC_AN_INPUT   ECP48_ADC_AN_INPUT     // ANx input pin number
  #define TP48_ADCBUF         ECP48_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP48_ADC_ANIE ADIELbits.IE      ECP48_ADC_ANIE ADIELbits.IE
  #define TP48_ADC_ANEIE ADEIELbits.EIEN  ECP48_ADC_ANEIE ADEIELbits.EIEN
  #define TP48_ADC_IF         ECP48_ADC_IF           // interrupt flag bit
  #define TP48_ADC_IE         ECP48_ADC_IE           // interrupt enable bit
  #define TP48_ADC_IP         ECP48_ADC_IP           // interrupt priority for this analog input
  #define TP48_ADC_RDY        ECP48_ADC_RDY          // ADC buffer ready bit
  #define _TP48_ADC_Interrupt ECP48_ADC_Interrupt   
  #define TP48_INIT_ANALOG    ECP48_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP48_InitAsOutput()   ECP48_InitAsOutput()             // initialization macro for digital output
#define TP48_InitAsInput()    ECP48_InitAsInput()              // initialization macro for digital input
#if defined (ECP48_PGx_CHANNEL)
  #define TP48_PGx_CHANNEL      ECP48_PGx_CHANNEL // PWM channel index
  #define TP48_PGx_PER          TP48_PGx_PER // PWM channel period register
  #define TP48_PGx_PHASE        TP48_PGx_PHASE // PWM channel phase register
  #define TP48_PGx_DC           TP48_PGx_DC // PWM channel duty cycle register
  #define TP48_PGx_DCA          TP48_PGx_DCA // PWM channel duty cycle A register
  #define TP48_PGx_DTH          TP48_PGx_DTH // PWM channel rising edge dead time register
  #define TP48_PGx_DTL          TP48_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP48_PGx_OVRENH)
    #define TP48_PGx_OVRENH       ECP48_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP48_PGx_PENH         ECP48_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP48_PGx_OVRENL)
    #define TP48_PGx_OVRENL       ECP48_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP48_PGx_PENL         ECP48_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP48_PGxUPDREQ        ECP48_PGxUPDREQ // PWM channel register update request 
  #define TP48_PGxTRIGA         ECP48_PGxTRIGA // PWM channel ADC trigger A register
  #define TP48_PGxTRIGB         ECP48_PGxTRIGB // PWM channel ADC trigger B register
  #define TP48_PGxTRIGC         ECP48_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP48_PWM_IF)
    #define TP48_PWM_IF         ECP48_PWM_IF  // interrupt flag bit
    #define TP48_PWM_IE         ECP48_PWM_IE  // interrupt enable bit
    #define TP48_PWM_IP         ECP48_PWM_IP  // interrupt priority for this analog input
    #define _TP48_PWM_Interrupt ECP48_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #49 is TP49
#define TP49_TRIS    ECP49_TRIS // GPIO direction register bit
#define TP49_Write() ECP49_Write() // GPIO port latch register bit
#define TP49_Read()  ECP49_Read() // GPIO port register bit
#define TP49_ODC     ECP49_ODC // GPIO port open drain configuration register bit
#define TP49_CNPU    ECP49_CNPU // GPIO port pull-up resistor register bit
#define TP49_CNPD    ECP49_CNPD // GPIO port pull-down resistor register bit
#define TP49_CNEN0   ECP49_CNEN0 // GPIO port change notification Enable register bit
#define TP49_CNSTAT  ECP49_CNSTAT // GPIO port change notification Status register bit
#define TP49_CNEN1   ECP49_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP49_CNF     ECP49_CNF // GPIO port change notification flag bit register bit
#if defined ECP49_RP
  #define TP49_RP       ECP49_RP // Number of Remappable Pin
  #define _TP49_RPxR    ECP49_RPxR // Remappable Pin Register
#endif
#define TP49_Set()    ECP49_Set() 
#define TP49_Clear()  ECP49_Clear()
#define TP49_Toggle() ECP49_Toggle() 
#define TP49_IS_ANALOG_INPUT    ECP49_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP49_ANSEL
  #define TP49_ANSEL          ECP49_ANSEL            // analog/digital pin configuration register bit
  #define TP49_ADCCORE        ECP49_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP49_IS_SHARED_CORE ECP49_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP49_ADC_AN_INPUT   ECP49_ADC_AN_INPUT     // ANx input pin number
  #define TP49_ADCBUF         ECP49_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP49_ADC_ANIE ADIELbits.IE      ECP49_ADC_ANIE ADIELbits.IE
  #define TP49_ADC_ANEIE ADEIELbits.EIEN  ECP49_ADC_ANEIE ADEIELbits.EIEN
  #define TP49_ADC_IF         ECP49_ADC_IF           // interrupt flag bit
  #define TP49_ADC_IE         ECP49_ADC_IE           // interrupt enable bit
  #define TP49_ADC_IP         ECP49_ADC_IP           // interrupt priority for this analog input
  #define TP49_ADC_RDY        ECP49_ADC_RDY          // ADC buffer ready bit
  #define _TP49_ADC_Interrupt ECP49_ADC_Interrupt   
  #define TP49_INIT_ANALOG    ECP49_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP49_InitAsOutput()   ECP49_InitAsOutput()             // initialization macro for digital output
#define TP49_InitAsInput()    ECP49_InitAsInput()              // initialization macro for digital input
#if defined (ECP49_PGx_CHANNEL)
  #define TP49_PGx_CHANNEL      ECP49_PGx_CHANNEL // PWM channel index
  #define TP49_PGx_PER          TP49_PGx_PER // PWM channel period register
  #define TP49_PGx_PHASE        TP49_PGx_PHASE // PWM channel phase register
  #define TP49_PGx_DC           TP49_PGx_DC // PWM channel duty cycle register
  #define TP49_PGx_DCA          TP49_PGx_DCA // PWM channel duty cycle A register
  #define TP49_PGx_DTH          TP49_PGx_DTH // PWM channel rising edge dead time register
  #define TP49_PGx_DTL          TP49_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP49_PGx_OVRENH)
    #define TP49_PGx_OVRENH       ECP49_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP49_PGx_PENH         ECP49_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP49_PGx_OVRENL)
    #define TP49_PGx_OVRENL       ECP49_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP49_PGx_PENL         ECP49_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP49_PGxUPDREQ        ECP49_PGxUPDREQ // PWM channel register update request 
  #define TP49_PGxTRIGA         ECP49_PGxTRIGA // PWM channel ADC trigger A register
  #define TP49_PGxTRIGB         ECP49_PGxTRIGB // PWM channel ADC trigger B register
  #define TP49_PGxTRIGC         ECP49_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP49_PWM_IF)
    #define TP49_PWM_IF         ECP49_PWM_IF  // interrupt flag bit
    #define TP49_PWM_IE         ECP49_PWM_IE  // interrupt enable bit
    #define TP49_PWM_IP         ECP49_PWM_IP  // interrupt priority for this analog input
    #define _TP49_PWM_Interrupt ECP49_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #50 is TP50
#define TP50_TRIS    ECP50_TRIS // GPIO direction register bit
#define TP50_Write() ECP50_Write() // GPIO port latch register bit
#define TP50_Read()  ECP50_Read() // GPIO port register bit
#define TP50_ODC     ECP50_ODC // GPIO port open drain configuration register bit
#define TP50_CNPU    ECP50_CNPU // GPIO port pull-up resistor register bit
#define TP50_CNPD    ECP50_CNPD // GPIO port pull-down resistor register bit
#define TP50_CNEN0   ECP50_CNEN0 // GPIO port change notification Enable register bit
#define TP50_CNSTAT  ECP50_CNSTAT // GPIO port change notification Status register bit
#define TP50_CNEN1   ECP50_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP50_CNF     ECP50_CNF // GPIO port change notification flag bit register bit
#if defined ECP50_RP
  #define TP50_RP       ECP50_RP // Number of Remappable Pin
  #define _TP50_RPxR    ECP50_RPxR // Remappable Pin Register
#endif
#define TP50_Set()    ECP50_Set() 
#define TP50_Clear()  ECP50_Clear()
#define TP50_Toggle() ECP50_Toggle() 
#define TP50_IS_ANALOG_INPUT    ECP50_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP50_ANSEL
  #define TP50_ANSEL          ECP50_ANSEL            // analog/digital pin configuration register bit
  #define TP50_ADCCORE        ECP50_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP50_IS_SHARED_CORE ECP50_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP50_ADC_AN_INPUT   ECP50_ADC_AN_INPUT     // ANx input pin number
  #define TP50_ADCBUF         ECP50_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP50_ADC_ANIE ADIELbits.IE      ECP50_ADC_ANIE ADIELbits.IE
  #define TP50_ADC_ANEIE ADEIELbits.EIEN  ECP50_ADC_ANEIE ADEIELbits.EIEN
  #define TP50_ADC_IF         ECP50_ADC_IF           // interrupt flag bit
  #define TP50_ADC_IE         ECP50_ADC_IE           // interrupt enable bit
  #define TP50_ADC_IP         ECP50_ADC_IP           // interrupt priority for this analog input
  #define TP50_ADC_RDY        ECP50_ADC_RDY          // ADC buffer ready bit
  #define _TP50_ADC_Interrupt ECP50_ADC_Interrupt   
  #define TP50_INIT_ANALOG    ECP50_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP50_InitAsOutput()   ECP50_InitAsOutput()             // initialization macro for digital output
#define TP50_InitAsInput()    ECP50_InitAsInput()              // initialization macro for digital input
#if defined (ECP50_PGx_CHANNEL)
  #define TP50_PGx_CHANNEL      ECP50_PGx_CHANNEL // PWM channel index
  #define TP50_PGx_PER          TP50_PGx_PER // PWM channel period register
  #define TP50_PGx_PHASE        TP50_PGx_PHASE // PWM channel phase register
  #define TP50_PGx_DC           TP50_PGx_DC // PWM channel duty cycle register
  #define TP50_PGx_DCA          TP50_PGx_DCA // PWM channel duty cycle A register
  #define TP50_PGx_DTH          TP50_PGx_DTH // PWM channel rising edge dead time register
  #define TP50_PGx_DTL          TP50_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP50_PGx_OVRENH)
    #define TP50_PGx_OVRENH       ECP50_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP50_PGx_PENH         ECP50_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP50_PGx_OVRENL)
    #define TP50_PGx_OVRENL       ECP50_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP50_PGx_PENL         ECP50_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP50_PGxUPDREQ        ECP50_PGxUPDREQ // PWM channel register update request 
  #define TP50_PGxTRIGA         ECP50_PGxTRIGA // PWM channel ADC trigger A register
  #define TP50_PGxTRIGB         ECP50_PGxTRIGB // PWM channel ADC trigger B register
  #define TP50_PGxTRIGC         ECP50_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP50_PWM_IF)
    #define TP50_PWM_IF         ECP50_PWM_IF  // interrupt flag bit
    #define TP50_PWM_IE         ECP50_PWM_IE  // interrupt enable bit
    #define TP50_PWM_IP         ECP50_PWM_IP  // interrupt priority for this analog input
    #define _TP50_PWM_Interrupt ECP50_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #51 is TP51
#define TP51_TRIS    ECP51_TRIS // GPIO direction register bit
#define TP51_Write() ECP51_Write() // GPIO port latch register bit
#define TP51_Read()  ECP51_Read() // GPIO port register bit
#define TP51_ODC     ECP51_ODC // GPIO port open drain configuration register bit
#define TP51_CNPU    ECP51_CNPU // GPIO port pull-up resistor register bit
#define TP51_CNPD    ECP51_CNPD // GPIO port pull-down resistor register bit
#define TP51_CNEN0   ECP51_CNEN0 // GPIO port change notification Enable register bit
#define TP51_CNSTAT  ECP51_CNSTAT // GPIO port change notification Status register bit
#define TP51_CNEN1   ECP51_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP51_CNF     ECP51_CNF // GPIO port change notification flag bit register bit
#if defined ECP51_RP
  #define TP51_RP       ECP51_RP // Number of Remappable Pin
  #define _TP51_RPxR    ECP51_RPxR // Remappable Pin Register
#endif
#define TP51_Set()    ECP51_Set() 
#define TP51_Clear()  ECP51_Clear()
#define TP51_Toggle() ECP51_Toggle() 
#define TP51_IS_ANALOG_INPUT    ECP51_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP51_ANSEL
  #define TP51_ANSEL          ECP51_ANSEL            // analog/digital pin configuration register bit
  #define TP51_ADCCORE        ECP51_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP51_IS_SHARED_CORE ECP51_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP51_ADC_AN_INPUT   ECP51_ADC_AN_INPUT     // ANx input pin number
  #define TP51_ADCBUF         ECP51_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP51_ADC_ANIE ADIELbits.IE      ECP51_ADC_ANIE ADIELbits.IE
  #define TP51_ADC_ANEIE ADEIELbits.EIEN  ECP51_ADC_ANEIE ADEIELbits.EIEN
  #define TP51_ADC_IF         ECP51_ADC_IF           // interrupt flag bit
  #define TP51_ADC_IE         ECP51_ADC_IE           // interrupt enable bit
  #define TP51_ADC_IP         ECP51_ADC_IP           // interrupt priority for this analog input
  #define TP51_ADC_RDY        ECP51_ADC_RDY          // ADC buffer ready bit
  #define _TP51_ADC_Interrupt ECP51_ADC_Interrupt   
  #define TP51_INIT_ANALOG    ECP51_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP51_InitAsOutput()   ECP51_InitAsOutput()             // initialization macro for digital output
#define TP51_InitAsInput()    ECP51_InitAsInput()              // initialization macro for digital input
#if defined (ECP51_PGx_CHANNEL)
  #define TP51_PGx_CHANNEL      ECP51_PGx_CHANNEL // PWM channel index
  #define TP51_PGx_PER          TP51_PGx_PER // PWM channel period register
  #define TP51_PGx_PHASE        TP51_PGx_PHASE // PWM channel phase register
  #define TP51_PGx_DC           TP51_PGx_DC // PWM channel duty cycle register
  #define TP51_PGx_DCA          TP51_PGx_DCA // PWM channel duty cycle A register
  #define TP51_PGx_DTH          TP51_PGx_DTH // PWM channel rising edge dead time register
  #define TP51_PGx_DTL          TP51_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP51_PGx_OVRENH)
    #define TP51_PGx_OVRENH       ECP51_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP51_PGx_PENH         ECP51_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP51_PGx_OVRENL)
    #define TP51_PGx_OVRENL       ECP51_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP51_PGx_PENL         ECP51_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP51_PGxUPDREQ        ECP51_PGxUPDREQ // PWM channel register update request 
  #define TP51_PGxTRIGA         ECP51_PGxTRIGA // PWM channel ADC trigger A register
  #define TP51_PGxTRIGB         ECP51_PGxTRIGB // PWM channel ADC trigger B register
  #define TP51_PGxTRIGC         ECP51_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP51_PWM_IF)
    #define TP51_PWM_IF         ECP51_PWM_IF  // interrupt flag bit
    #define TP51_PWM_IE         ECP51_PWM_IE  // interrupt enable bit
    #define TP51_PWM_IP         ECP51_PWM_IP  // interrupt priority for this analog input
    #define _TP51_PWM_Interrupt ECP51_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #52 is TP52
#define TP52_TRIS    ECP52_TRIS // GPIO direction register bit
#define TP52_Write() ECP52_Write() // GPIO port latch register bit
#define TP52_Read()  ECP52_Read() // GPIO port register bit
#define TP52_ODC     ECP52_ODC // GPIO port open drain configuration register bit
#define TP52_CNPU    ECP52_CNPU // GPIO port pull-up resistor register bit
#define TP52_CNPD    ECP52_CNPD // GPIO port pull-down resistor register bit
#define TP52_CNEN0   ECP52_CNEN0 // GPIO port change notification Enable register bit
#define TP52_CNSTAT  ECP52_CNSTAT // GPIO port change notification Status register bit
#define TP52_CNEN1   ECP52_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP52_CNF     ECP52_CNF // GPIO port change notification flag bit register bit
#if defined ECP52_RP
  #define TP52_RP       ECP52_RP // Number of Remappable Pin
  #define _TP52_RPxR    ECP52_RPxR // Remappable Pin Register
#endif
#define TP52_Set()    ECP52_Set() 
#define TP52_Clear()  ECP52_Clear()
#define TP52_Toggle() ECP52_Toggle() 
#define TP52_IS_ANALOG_INPUT    ECP52_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP52_ANSEL
  #define TP52_ANSEL          ECP52_ANSEL            // analog/digital pin configuration register bit
  #define TP52_ADCCORE        ECP52_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP52_IS_SHARED_CORE ECP52_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP52_ADC_AN_INPUT   ECP52_ADC_AN_INPUT     // ANx input pin number
  #define TP52_ADCBUF         ECP52_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP52_ADC_ANIE ADIELbits.IE      ECP52_ADC_ANIE ADIELbits.IE
  #define TP52_ADC_ANEIE ADEIELbits.EIEN  ECP52_ADC_ANEIE ADEIELbits.EIEN
  #define TP52_ADC_IF         ECP52_ADC_IF           // interrupt flag bit
  #define TP52_ADC_IE         ECP52_ADC_IE           // interrupt enable bit
  #define TP52_ADC_IP         ECP52_ADC_IP           // interrupt priority for this analog input
  #define TP52_ADC_RDY        ECP52_ADC_RDY          // ADC buffer ready bit
  #define _TP52_ADC_Interrupt ECP52_ADC_Interrupt   
  #define TP52_INIT_ANALOG    ECP52_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP52_InitAsOutput()   ECP52_InitAsOutput()             // initialization macro for digital output
#define TP52_InitAsInput()    ECP52_InitAsInput()              // initialization macro for digital input
#if defined (ECP52_PGx_CHANNEL)
  #define TP52_PGx_CHANNEL      ECP52_PGx_CHANNEL // PWM channel index
  #define TP52_PGx_PER          TP52_PGx_PER // PWM channel period register
  #define TP52_PGx_PHASE        TP52_PGx_PHASE // PWM channel phase register
  #define TP52_PGx_DC           TP52_PGx_DC // PWM channel duty cycle register
  #define TP52_PGx_DCA          TP52_PGx_DCA // PWM channel duty cycle A register
  #define TP52_PGx_DTH          TP52_PGx_DTH // PWM channel rising edge dead time register
  #define TP52_PGx_DTL          TP52_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP52_PGx_OVRENH)
    #define TP52_PGx_OVRENH       ECP52_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP52_PGx_PENH         ECP52_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP52_PGx_OVRENL)
    #define TP52_PGx_OVRENL       ECP52_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP52_PGx_PENL         ECP52_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP52_PGxUPDREQ        ECP52_PGxUPDREQ // PWM channel register update request 
  #define TP52_PGxTRIGA         ECP52_PGxTRIGA // PWM channel ADC trigger A register
  #define TP52_PGxTRIGB         ECP52_PGxTRIGB // PWM channel ADC trigger B register
  #define TP52_PGxTRIGC         ECP52_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP52_PWM_IF)
    #define TP52_PWM_IF         ECP52_PWM_IF  // interrupt flag bit
    #define TP52_PWM_IE         ECP52_PWM_IE  // interrupt enable bit
    #define TP52_PWM_IP         ECP52_PWM_IP  // interrupt priority for this analog input
    #define _TP52_PWM_Interrupt ECP52_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #53 is TP53
#define TP53_TRIS    ECP53_TRIS // GPIO direction register bit
#define TP53_Write() ECP53_Write() // GPIO port latch register bit
#define TP53_Read()  ECP53_Read() // GPIO port register bit
#define TP53_ODC     ECP53_ODC // GPIO port open drain configuration register bit
#define TP53_CNPU    ECP53_CNPU // GPIO port pull-up resistor register bit
#define TP53_CNPD    ECP53_CNPD // GPIO port pull-down resistor register bit
#define TP53_CNEN0   ECP53_CNEN0 // GPIO port change notification Enable register bit
#define TP53_CNSTAT  ECP53_CNSTAT // GPIO port change notification Status register bit
#define TP53_CNEN1   ECP53_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP53_CNF     ECP53_CNF // GPIO port change notification flag bit register bit
#if defined ECP53_RP
  #define TP53_RP       ECP53_RP // Number of Remappable Pin
  #define _TP53_RPxR    ECP53_RPxR // Remappable Pin Register
#endif
#define TP53_Set()    ECP53_Set() 
#define TP53_Clear()  ECP53_Clear()
#define TP53_Toggle() ECP53_Toggle() 
#define TP53_IS_ANALOG_INPUT    ECP53_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP53_ANSEL
  #define TP53_ANSEL          ECP53_ANSEL            // analog/digital pin configuration register bit
  #define TP53_ADCCORE        ECP53_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP53_IS_SHARED_CORE ECP53_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP53_ADC_AN_INPUT   ECP53_ADC_AN_INPUT     // ANx input pin number
  #define TP53_ADCBUF         ECP53_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP53_ADC_ANIE ADIELbits.IE      ECP53_ADC_ANIE ADIELbits.IE
  #define TP53_ADC_ANEIE ADEIELbits.EIEN  ECP53_ADC_ANEIE ADEIELbits.EIEN
  #define TP53_ADC_IF         ECP53_ADC_IF           // interrupt flag bit
  #define TP53_ADC_IE         ECP53_ADC_IE           // interrupt enable bit
  #define TP53_ADC_IP         ECP53_ADC_IP           // interrupt priority for this analog input
  #define TP53_ADC_RDY        ECP53_ADC_RDY          // ADC buffer ready bit
  #define _TP53_ADC_Interrupt ECP53_ADC_Interrupt   
  #define TP53_INIT_ANALOG    ECP53_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP53_InitAsOutput()   ECP53_InitAsOutput()             // initialization macro for digital output
#define TP53_InitAsInput()    ECP53_InitAsInput()              // initialization macro for digital input
#if defined (ECP53_PGx_CHANNEL)
  #define TP53_PGx_CHANNEL      ECP53_PGx_CHANNEL // PWM channel index
  #define TP53_PGx_PER          TP53_PGx_PER // PWM channel period register
  #define TP53_PGx_PHASE        TP53_PGx_PHASE // PWM channel phase register
  #define TP53_PGx_DC           TP53_PGx_DC // PWM channel duty cycle register
  #define TP53_PGx_DCA          TP53_PGx_DCA // PWM channel duty cycle A register
  #define TP53_PGx_DTH          TP53_PGx_DTH // PWM channel rising edge dead time register
  #define TP53_PGx_DTL          TP53_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP53_PGx_OVRENH)
    #define TP53_PGx_OVRENH       ECP53_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP53_PGx_PENH         ECP53_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP53_PGx_OVRENL)
    #define TP53_PGx_OVRENL       ECP53_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP53_PGx_PENL         ECP53_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP53_PGxUPDREQ        ECP53_PGxUPDREQ // PWM channel register update request 
  #define TP53_PGxTRIGA         ECP53_PGxTRIGA // PWM channel ADC trigger A register
  #define TP53_PGxTRIGB         ECP53_PGxTRIGB // PWM channel ADC trigger B register
  #define TP53_PGxTRIGC         ECP53_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP53_PWM_IF)
    #define TP53_PWM_IF         ECP53_PWM_IF  // interrupt flag bit
    #define TP53_PWM_IE         ECP53_PWM_IE  // interrupt enable bit
    #define TP53_PWM_IP         ECP53_PWM_IP  // interrupt priority for this analog input
    #define _TP53_PWM_Interrupt ECP53_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #54 is TP54
#define TP54_TRIS    ECP55_TRIS // GPIO direction register bit
#define TP54_Write() ECP55_Write() // GPIO port latch register bit
#define TP54_Read()  ECP55_Read() // GPIO port register bit
#define TP54_ODC     ECP55_ODC // GPIO port open drain configuration register bit
#define TP54_CNPU    ECP55_CNPU // GPIO port pull-up resistor register bit
#define TP54_CNPD    ECP55_CNPD // GPIO port pull-down resistor register bit
#define TP54_CNEN0   ECP55_CNEN0 // GPIO port change notification Enable register bit
#define TP54_CNSTAT  ECP55_CNSTAT // GPIO port change notification Status register bit
#define TP54_CNEN1   ECP55_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP54_CNF     ECP55_CNF // GPIO port change notification flag bit register bit
#if defined ECP55_RP
  #define TP54_RP       ECP55_RP // Number of Remappable Pin
  #define _TP54_RPxR    ECP55_RPxR // Remappable Pin Register
#endif
#define TP54_Set()    ECP55_Set() 
#define TP54_Clear()  ECP55_Clear()
#define TP54_Toggle() ECP55_Toggle() 
#define TP54_IS_ANALOG_INPUT    ECP55_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP55_ANSEL
  #define TP54_ANSEL          ECP55_ANSEL            // analog/digital pin configuration register bit
  #define TP54_ADCCORE        ECP55_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP54_IS_SHARED_CORE ECP55_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP54_ADC_AN_INPUT   ECP55_ADC_AN_INPUT     // ANx input pin number
  #define TP54_ADCBUF         ECP55_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP54_ADC_ANIE ADIELbits.IE      ECP55_ADC_ANIE ADIELbits.IE
  #define TP54_ADC_ANEIE ADEIELbits.EIEN  ECP55_ADC_ANEIE ADEIELbits.EIEN
  #define TP54_ADC_IF         ECP55_ADC_IF           // interrupt flag bit
  #define TP54_ADC_IE         ECP55_ADC_IE           // interrupt enable bit
  #define TP54_ADC_IP         ECP55_ADC_IP           // interrupt priority for this analog input
  #define TP54_ADC_RDY        ECP55_ADC_RDY          // ADC buffer ready bit
  #define _TP54_ADC_Interrupt ECP55_ADC_Interrupt   
  #define TP54_INIT_ANALOG    ECP55_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP54_InitAsOutput()   ECP55_InitAsOutput()             // initialization macro for digital output
#define TP54_InitAsInput()    ECP55_InitAsInput()              // initialization macro for digital input
#if defined (ECP55_PGx_CHANNEL)
  #define TP54_PGx_CHANNEL      ECP55_PGx_CHANNEL // PWM channel index
  #define TP54_PGx_PER          TP54_PGx_PER // PWM channel period register
  #define TP54_PGx_PHASE        TP54_PGx_PHASE // PWM channel phase register
  #define TP54_PGx_DC           TP54_PGx_DC // PWM channel duty cycle register
  #define TP54_PGx_DCA          TP54_PGx_DCA // PWM channel duty cycle A register
  #define TP54_PGx_DTH          TP54_PGx_DTH // PWM channel rising edge dead time register
  #define TP54_PGx_DTL          TP54_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP55_PGx_OVRENH)
    #define TP54_PGx_OVRENH       ECP55_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP54_PGx_PENH         ECP55_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP55_PGx_OVRENL)
    #define TP54_PGx_OVRENL       ECP55_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP54_PGx_PENL         ECP55_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP54_PGxUPDREQ        ECP55_PGxUPDREQ // PWM channel register update request 
  #define TP54_PGxTRIGA         ECP55_PGxTRIGA // PWM channel ADC trigger A register
  #define TP54_PGxTRIGB         ECP55_PGxTRIGB // PWM channel ADC trigger B register
  #define TP54_PGxTRIGC         ECP55_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP55_PWM_IF)
    #define TP54_PWM_IF         ECP55_PWM_IF  // interrupt flag bit
    #define TP54_PWM_IE         ECP55_PWM_IE  // interrupt enable bit
    #define TP54_PWM_IP         ECP55_PWM_IP  // interrupt priority for this analog input
    #define _TP54_PWM_Interrupt ECP55_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #55 is TP55
#define TP55_TRIS    ECP55_TRIS // GPIO direction register bit
#define TP55_Write() ECP55_Write() // GPIO port latch register bit
#define TP55_Read()  ECP55_Read() // GPIO port register bit
#define TP55_ODC     ECP55_ODC // GPIO port open drain configuration register bit
#define TP55_CNPU    ECP55_CNPU // GPIO port pull-up resistor register bit
#define TP55_CNPD    ECP55_CNPD // GPIO port pull-down resistor register bit
#define TP55_CNEN0   ECP55_CNEN0 // GPIO port change notification Enable register bit
#define TP55_CNSTAT  ECP55_CNSTAT // GPIO port change notification Status register bit
#define TP55_CNEN1   ECP55_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP55_CNF     ECP55_CNF // GPIO port change notification flag bit register bit
#if defined ECP55_RP
  #define TP55_RP       ECP55_RP // Number of Remappable Pin
  #define _TP55_RPxR    ECP55_RPxR // Remappable Pin Register
#endif
#define TP55_Set()    ECP55_Set() 
#define TP55_Clear()  ECP55_Clear()
#define TP55_Toggle() ECP55_Toggle() 
#define TP55_IS_ANALOG_INPUT    ECP55_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP55_ANSEL
  #define TP55_ANSEL          ECP55_ANSEL            // analog/digital pin configuration register bit
  #define TP55_ADCCORE        ECP55_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP55_IS_SHARED_CORE ECP55_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP55_ADC_AN_INPUT   ECP55_ADC_AN_INPUT     // ANx input pin number
  #define TP55_ADCBUF         ECP55_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP55_ADC_ANIE ADIELbits.IE      ECP55_ADC_ANIE ADIELbits.IE
  #define TP55_ADC_ANEIE ADEIELbits.EIEN  ECP55_ADC_ANEIE ADEIELbits.EIEN
  #define TP55_ADC_IF         ECP55_ADC_IF           // interrupt flag bit
  #define TP55_ADC_IE         ECP55_ADC_IE           // interrupt enable bit
  #define TP55_ADC_IP         ECP55_ADC_IP           // interrupt priority for this analog input
  #define TP55_ADC_RDY        ECP55_ADC_RDY          // ADC buffer ready bit
  #define _TP55_ADC_Interrupt ECP55_ADC_Interrupt   
  #define TP55_INIT_ANALOG    ECP55_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP55_InitAsOutput()   ECP55_InitAsOutput()             // initialization macro for digital output
#define TP55_InitAsInput()    ECP55_InitAsInput()              // initialization macro for digital input
#if defined (ECP55_PGx_CHANNEL)
  #define TP55_PGx_CHANNEL      ECP55_PGx_CHANNEL // PWM channel index
  #define TP55_PGx_PER          TP55_PGx_PER // PWM channel period register
  #define TP55_PGx_PHASE        TP55_PGx_PHASE // PWM channel phase register
  #define TP55_PGx_DC           TP55_PGx_DC // PWM channel duty cycle register
  #define TP55_PGx_DCA          TP55_PGx_DCA // PWM channel duty cycle A register
  #define TP55_PGx_DTH          TP55_PGx_DTH // PWM channel rising edge dead time register
  #define TP55_PGx_DTL          TP55_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP55_PGx_OVRENH)
    #define TP55_PGx_OVRENH       ECP55_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP55_PGx_PENH         ECP55_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP55_PGx_OVRENL)
    #define TP55_PGx_OVRENL       ECP55_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP55_PGx_PENL         ECP55_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP55_PGxUPDREQ        ECP55_PGxUPDREQ // PWM channel register update request 
  #define TP55_PGxTRIGA         ECP55_PGxTRIGA // PWM channel ADC trigger A register
  #define TP55_PGxTRIGB         ECP55_PGxTRIGB // PWM channel ADC trigger B register
  #define TP55_PGxTRIGC         ECP55_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP55_PWM_IF)
    #define TP55_PWM_IF         ECP55_PWM_IF  // interrupt flag bit
    #define TP55_PWM_IE         ECP55_PWM_IE  // interrupt enable bit
    #define TP55_PWM_IP         ECP55_PWM_IP  // interrupt priority for this analog input
    #define _TP55_PWM_Interrupt ECP55_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #56 is TP56
#define TP56_TRIS    ECP56_TRIS // GPIO direction register bit
#define TP56_Write() ECP56_Write() // GPIO port latch register bit
#define TP56_Read()  ECP56_Read() // GPIO port register bit
#define TP56_ODC     ECP56_ODC // GPIO port open drain configuration register bit
#define TP56_CNPU    ECP56_CNPU // GPIO port pull-up resistor register bit
#define TP56_CNPD    ECP56_CNPD // GPIO port pull-down resistor register bit
#define TP56_CNEN0   ECP56_CNEN0 // GPIO port change notification Enable register bit
#define TP56_CNSTAT  ECP56_CNSTAT // GPIO port change notification Status register bit
#define TP56_CNEN1   ECP56_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define TP56_CNF     ECP56_CNF // GPIO port change notification flag bit register bit
#if defined ECP56_RP
  #define TP56_RP       ECP56_RP // Number of Remappable Pin
  #define _TP56_RPxR    ECP56_RPxR // Remappable Pin Register
#endif
#define TP56_Set()    ECP56_Set() 
#define TP56_Clear()  ECP56_Clear()
#define TP56_Toggle() ECP56_Toggle() 
#define TP56_IS_ANALOG_INPUT    ECP56_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined ECP56_ANSEL
  #define TP56_ANSEL          ECP56_ANSEL            // analog/digital pin configuration register bit
  #define TP56_ADCCORE        ECP56_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define TP56_IS_SHARED_CORE ECP56_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define TP56_ADC_AN_INPUT   ECP56_ADC_AN_INPUT     // ANx input pin number
  #define TP56_ADCBUF         ECP56_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define TP56_ADC_ANIE ADIELbits.IE      ECP56_ADC_ANIE ADIELbits.IE
  #define TP56_ADC_ANEIE ADEIELbits.EIEN  ECP56_ADC_ANEIE ADEIELbits.EIEN
  #define TP56_ADC_IF         ECP56_ADC_IF           // interrupt flag bit
  #define TP56_ADC_IE         ECP56_ADC_IE           // interrupt enable bit
  #define TP56_ADC_IP         ECP56_ADC_IP           // interrupt priority for this analog input
  #define TP56_ADC_RDY        ECP56_ADC_RDY          // ADC buffer ready bit
  #define _TP56_ADC_Interrupt ECP56_ADC_Interrupt   
  #define TP56_INIT_ANALOG    ECP56_INIT_ANALOG      // initialization macro for analog input
#endif
#define TP56_InitAsOutput()   ECP56_InitAsOutput()             // initialization macro for digital output
#define TP56_InitAsInput()    ECP56_InitAsInput()              // initialization macro for digital input
#if defined (ECP56_PGx_CHANNEL)
  #define TP56_PGx_CHANNEL      ECP56_PGx_CHANNEL // PWM channel index
  #define TP56_PGx_PER          TP56_PGx_PER // PWM channel period register
  #define TP56_PGx_PHASE        TP56_PGx_PHASE // PWM channel phase register
  #define TP56_PGx_DC           TP56_PGx_DC // PWM channel duty cycle register
  #define TP56_PGx_DCA          TP56_PGx_DCA // PWM channel duty cycle A register
  #define TP56_PGx_DTH          TP56_PGx_DTH // PWM channel rising edge dead time register
  #define TP56_PGx_DTL          TP56_PGx_DTL // PWM channel falling edge dead time register
  #if defined (ECP56_PGx_OVRENH)
    #define TP56_PGx_OVRENH       ECP56_PGx_OVRENH // PWM channel IO config register override high control bit
    #define TP56_PGx_PENH         ECP56_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (ECP56_PGx_OVRENL)
    #define TP56_PGx_OVRENL       ECP56_PGx_OVRENL // PWM channel IO config register override low control bit
    #define TP56_PGx_PENL         ECP56_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define TP56_PGxUPDREQ        ECP56_PGxUPDREQ // PWM channel register update request 
  #define TP56_PGxTRIGA         ECP56_PGxTRIGA // PWM channel ADC trigger A register
  #define TP56_PGxTRIGB         ECP56_PGxTRIGB // PWM channel ADC trigger B register
  #define TP56_PGxTRIGC         ECP56_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (ECP56_PWM_IF)
    #define TP56_PWM_IF         ECP56_PWM_IF  // interrupt flag bit
    #define TP56_PWM_IE         ECP56_PWM_IE  // interrupt enable bit
    #define TP56_PWM_IP         ECP56_PWM_IP  // interrupt priority for this analog input
    #define _TP56_PWM_Interrupt ECP56_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #58 is VDD

// Device Pin #59 is VSS

// Device Pin #57 is VDD

// Device Pin #60 is VSS

// Device Pin #61 is MIKRO_AN
#define MIKRO_AN_TRIS    TP12_TRIS // GPIO direction register bit
#define MIKRO_AN_Write() TP12_Write() // GPIO port latch register bit
#define MIKRO_AN_Read()  TP12_Read() // GPIO port register bit
#define MIKRO_AN_ODC     TP12_ODC // GPIO port open drain configuration register bit
#define MIKRO_AN_CNPU    TP12_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_AN_CNPD    TP12_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_AN_CNEN0   TP12_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_AN_CNSTAT  TP12_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_AN_CNEN1   TP12_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_AN_CNF     TP12_CNF // GPIO port change notification flag bit register bit
#if defined TP12_RP
  #define MIKRO_AN_RP       TP12_RP // Number of Remappable Pin
  #define _MIKRO_AN_RPxR    TP12_RPxR // Remappable Pin Register
#endif
#define MIKRO_AN_Set()    TP12_Set() 
#define MIKRO_AN_Clear()  TP12_Clear()
#define MIKRO_AN_Toggle() TP12_Toggle() 
#define MIKRO_AN_IS_ANALOG_INPUT    TP12_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP12_ANSEL
  #define MIKRO_AN_ANSEL          TP12_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_AN_ADCCORE        TP12_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_AN_IS_SHARED_CORE TP12_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_AN_ADC_AN_INPUT   TP12_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_AN_ADCBUF         TP12_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_AN_ADC_ANIE ADIELbits.IE      TP12_ADC_ANIE ADIELbits.IE
  #define MIKRO_AN_ADC_ANEIE ADEIELbits.EIEN  TP12_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_AN_ADC_IF         TP12_ADC_IF           // interrupt flag bit
  #define MIKRO_AN_ADC_IE         TP12_ADC_IE           // interrupt enable bit
  #define MIKRO_AN_ADC_IP         TP12_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_AN_ADC_RDY        TP12_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_AN_ADC_Interrupt TP12_ADC_Interrupt   
  #define MIKRO_AN_INIT_ANALOG    TP12_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_AN_InitAsOutput()   TP12_InitAsOutput()             // initialization macro for digital output
#define MIKRO_AN_InitAsInput()    TP12_InitAsInput()              // initialization macro for digital input
#if defined (TP12_PGx_CHANNEL)
  #define MIKRO_AN_PGx_CHANNEL      TP12_PGx_CHANNEL // PWM channel index
  #define MIKRO_AN_PGx_PER          MIKRO_AN_PGx_PER // PWM channel period register
  #define MIKRO_AN_PGx_PHASE        MIKRO_AN_PGx_PHASE // PWM channel phase register
  #define MIKRO_AN_PGx_DC           MIKRO_AN_PGx_DC // PWM channel duty cycle register
  #define MIKRO_AN_PGx_DCA          MIKRO_AN_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_AN_PGx_DTH          MIKRO_AN_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_AN_PGx_DTL          MIKRO_AN_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP12_PGx_OVRENH)
    #define MIKRO_AN_PGx_OVRENH       TP12_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_AN_PGx_PENH         TP12_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP12_PGx_OVRENL)
    #define MIKRO_AN_PGx_OVRENL       TP12_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_AN_PGx_PENL         TP12_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_AN_PGxUPDREQ        TP12_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_AN_PGxTRIGA         TP12_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_AN_PGxTRIGB         TP12_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_AN_PGxTRIGC         TP12_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP12_PWM_IF)
    #define MIKRO_AN_PWM_IF         TP12_PWM_IF  // interrupt flag bit
    #define MIKRO_AN_PWM_IE         TP12_PWM_IE  // interrupt enable bit
    #define MIKRO_AN_PWM_IP         TP12_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_AN_PWM_Interrupt TP12_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #62 is MIKRO_MCLR
#define MIKRO_MCLR_TRIS    MCLR_TRIS // GPIO direction register bit
#define MIKRO_MCLR_Write() MCLR_Write() // GPIO port latch register bit
#define MIKRO_MCLR_Read()  MCLR_Read() // GPIO port register bit
#define MIKRO_MCLR_ODC     MCLR_ODC // GPIO port open drain configuration register bit
#define MIKRO_MCLR_CNPU    MCLR_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_MCLR_CNPD    MCLR_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_MCLR_CNEN0   MCLR_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_MCLR_CNSTAT  MCLR_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_MCLR_CNEN1   MCLR_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_MCLR_CNF     MCLR_CNF // GPIO port change notification flag bit register bit
#if defined MCLR_RP
  #define MIKRO_MCLR_RP       MCLR_RP // Number of Remappable Pin
  #define _MIKRO_MCLR_RPxR    MCLR_RPxR // Remappable Pin Register
#endif
#define MIKRO_MCLR_Set()    MCLR_Set() 
#define MIKRO_MCLR_Clear()  MCLR_Clear()
#define MIKRO_MCLR_Toggle() MCLR_Toggle() 
#define MIKRO_MCLR_IS_ANALOG_INPUT    MCLR_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined MCLR_ANSEL
  #define MIKRO_MCLR_ANSEL          MCLR_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_MCLR_ADCCORE        MCLR_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_MCLR_IS_SHARED_CORE MCLR_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_MCLR_ADC_AN_INPUT   MCLR_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_MCLR_ADCBUF         MCLR_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_MCLR_ADC_ANIE ADIELbits.IE      MCLR_ADC_ANIE ADIELbits.IE
  #define MIKRO_MCLR_ADC_ANEIE ADEIELbits.EIEN  MCLR_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_MCLR_ADC_IF         MCLR_ADC_IF           // interrupt flag bit
  #define MIKRO_MCLR_ADC_IE         MCLR_ADC_IE           // interrupt enable bit
  #define MIKRO_MCLR_ADC_IP         MCLR_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_MCLR_ADC_RDY        MCLR_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_MCLR_ADC_Interrupt MCLR_ADC_Interrupt   
  #define MIKRO_MCLR_INIT_ANALOG    MCLR_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_MCLR_InitAsOutput()   MCLR_InitAsOutput()             // initialization macro for digital output
#define MIKRO_MCLR_InitAsInput()    MCLR_InitAsInput()              // initialization macro for digital input
#if defined (MCLR_PGx_CHANNEL)
  #define MIKRO_MCLR_PGx_CHANNEL      MCLR_PGx_CHANNEL // PWM channel index
  #define MIKRO_MCLR_PGx_PER          MIKRO_MCLR_PGx_PER // PWM channel period register
  #define MIKRO_MCLR_PGx_PHASE        MIKRO_MCLR_PGx_PHASE // PWM channel phase register
  #define MIKRO_MCLR_PGx_DC           MIKRO_MCLR_PGx_DC // PWM channel duty cycle register
  #define MIKRO_MCLR_PGx_DCA          MIKRO_MCLR_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_MCLR_PGx_DTH          MIKRO_MCLR_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_MCLR_PGx_DTL          MIKRO_MCLR_PGx_DTL // PWM channel falling edge dead time register
  #if defined (MCLR_PGx_OVRENH)
    #define MIKRO_MCLR_PGx_OVRENH       MCLR_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_MCLR_PGx_PENH         MCLR_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (MCLR_PGx_OVRENL)
    #define MIKRO_MCLR_PGx_OVRENL       MCLR_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_MCLR_PGx_PENL         MCLR_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_MCLR_PGxUPDREQ        MCLR_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_MCLR_PGxTRIGA         MCLR_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_MCLR_PGxTRIGB         MCLR_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_MCLR_PGxTRIGC         MCLR_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (MCLR_PWM_IF)
    #define MIKRO_MCLR_PWM_IF         MCLR_PWM_IF  // interrupt flag bit
    #define MIKRO_MCLR_PWM_IE         MCLR_PWM_IE  // interrupt enable bit
    #define MIKRO_MCLR_PWM_IP         MCLR_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_MCLR_PWM_Interrupt MCLR_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #63 is MIKRO_CS
#define MIKRO_CS_TRIS    TP48_TRIS // GPIO direction register bit
#define MIKRO_CS_Write() TP48_Write() // GPIO port latch register bit
#define MIKRO_CS_Read()  TP48_Read() // GPIO port register bit
#define MIKRO_CS_ODC     TP48_ODC // GPIO port open drain configuration register bit
#define MIKRO_CS_CNPU    TP48_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_CS_CNPD    TP48_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_CS_CNEN0   TP48_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_CS_CNSTAT  TP48_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_CS_CNEN1   TP48_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_CS_CNF     TP48_CNF // GPIO port change notification flag bit register bit
#if defined TP48_RP
  #define MIKRO_CS_RP       TP48_RP // Number of Remappable Pin
  #define _MIKRO_CS_RPxR    TP48_RPxR // Remappable Pin Register
#endif
#define MIKRO_CS_Set()    TP48_Set() 
#define MIKRO_CS_Clear()  TP48_Clear()
#define MIKRO_CS_Toggle() TP48_Toggle() 
#define MIKRO_CS_IS_ANALOG_INPUT    TP48_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP48_ANSEL
  #define MIKRO_CS_ANSEL          TP48_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_CS_ADCCORE        TP48_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_CS_IS_SHARED_CORE TP48_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_CS_ADC_AN_INPUT   TP48_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_CS_ADCBUF         TP48_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_CS_ADC_ANIE ADIELbits.IE      TP48_ADC_ANIE ADIELbits.IE
  #define MIKRO_CS_ADC_ANEIE ADEIELbits.EIEN  TP48_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_CS_ADC_IF         TP48_ADC_IF           // interrupt flag bit
  #define MIKRO_CS_ADC_IE         TP48_ADC_IE           // interrupt enable bit
  #define MIKRO_CS_ADC_IP         TP48_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_CS_ADC_RDY        TP48_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_CS_ADC_Interrupt TP48_ADC_Interrupt   
  #define MIKRO_CS_INIT_ANALOG    TP48_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_CS_InitAsOutput()   TP48_InitAsOutput()             // initialization macro for digital output
#define MIKRO_CS_InitAsInput()    TP48_InitAsInput()              // initialization macro for digital input
#if defined (TP48_PGx_CHANNEL)
  #define MIKRO_CS_PGx_CHANNEL      TP48_PGx_CHANNEL // PWM channel index
  #define MIKRO_CS_PGx_PER          MIKRO_CS_PGx_PER // PWM channel period register
  #define MIKRO_CS_PGx_PHASE        MIKRO_CS_PGx_PHASE // PWM channel phase register
  #define MIKRO_CS_PGx_DC           MIKRO_CS_PGx_DC // PWM channel duty cycle register
  #define MIKRO_CS_PGx_DCA          MIKRO_CS_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_CS_PGx_DTH          MIKRO_CS_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_CS_PGx_DTL          MIKRO_CS_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP48_PGx_OVRENH)
    #define MIKRO_CS_PGx_OVRENH       TP48_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_CS_PGx_PENH         TP48_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP48_PGx_OVRENL)
    #define MIKRO_CS_PGx_OVRENL       TP48_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_CS_PGx_PENL         TP48_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_CS_PGxUPDREQ        TP48_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_CS_PGxTRIGA         TP48_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_CS_PGxTRIGB         TP48_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_CS_PGxTRIGC         TP48_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP48_PWM_IF)
    #define MIKRO_CS_PWM_IF         TP48_PWM_IF  // interrupt flag bit
    #define MIKRO_CS_PWM_IE         TP48_PWM_IE  // interrupt enable bit
    #define MIKRO_CS_PWM_IP         TP48_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_CS_PWM_Interrupt TP48_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #64 is MIKRO_SCK
#define MIKRO_SCK_TRIS    TP32_TRIS // GPIO direction register bit
#define MIKRO_SCK_Write() TP32_Write() // GPIO port latch register bit
#define MIKRO_SCK_Read()  TP32_Read() // GPIO port register bit
#define MIKRO_SCK_ODC     TP32_ODC // GPIO port open drain configuration register bit
#define MIKRO_SCK_CNPU    TP32_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_SCK_CNPD    TP32_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_SCK_CNEN0   TP32_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_SCK_CNSTAT  TP32_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_SCK_CNEN1   TP32_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_SCK_CNF     TP32_CNF // GPIO port change notification flag bit register bit
#if defined TP32_RP
  #define MIKRO_SCK_RP       TP32_RP // Number of Remappable Pin
  #define _MIKRO_SCK_RPxR    TP32_RPxR // Remappable Pin Register
#endif
#define MIKRO_SCK_Set()    TP32_Set() 
#define MIKRO_SCK_Clear()  TP32_Clear()
#define MIKRO_SCK_Toggle() TP32_Toggle() 
#define MIKRO_SCK_IS_ANALOG_INPUT    TP32_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP32_ANSEL
  #define MIKRO_SCK_ANSEL          TP32_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_SCK_ADCCORE        TP32_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_SCK_IS_SHARED_CORE TP32_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_SCK_ADC_AN_INPUT   TP32_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_SCK_ADCBUF         TP32_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_SCK_ADC_ANIE ADIELbits.IE      TP32_ADC_ANIE ADIELbits.IE
  #define MIKRO_SCK_ADC_ANEIE ADEIELbits.EIEN  TP32_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_SCK_ADC_IF         TP32_ADC_IF           // interrupt flag bit
  #define MIKRO_SCK_ADC_IE         TP32_ADC_IE           // interrupt enable bit
  #define MIKRO_SCK_ADC_IP         TP32_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_SCK_ADC_RDY        TP32_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_SCK_ADC_Interrupt TP32_ADC_Interrupt   
  #define MIKRO_SCK_INIT_ANALOG    TP32_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_SCK_InitAsOutput()   TP32_InitAsOutput()             // initialization macro for digital output
#define MIKRO_SCK_InitAsInput()    TP32_InitAsInput()              // initialization macro for digital input
#if defined (TP32_PGx_CHANNEL)
  #define MIKRO_SCK_PGx_CHANNEL      TP32_PGx_CHANNEL // PWM channel index
  #define MIKRO_SCK_PGx_PER          MIKRO_SCK_PGx_PER // PWM channel period register
  #define MIKRO_SCK_PGx_PHASE        MIKRO_SCK_PGx_PHASE // PWM channel phase register
  #define MIKRO_SCK_PGx_DC           MIKRO_SCK_PGx_DC // PWM channel duty cycle register
  #define MIKRO_SCK_PGx_DCA          MIKRO_SCK_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_SCK_PGx_DTH          MIKRO_SCK_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_SCK_PGx_DTL          MIKRO_SCK_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP32_PGx_OVRENH)
    #define MIKRO_SCK_PGx_OVRENH       TP32_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_SCK_PGx_PENH         TP32_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP32_PGx_OVRENL)
    #define MIKRO_SCK_PGx_OVRENL       TP32_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_SCK_PGx_PENL         TP32_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_SCK_PGxUPDREQ        TP32_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_SCK_PGxTRIGA         TP32_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_SCK_PGxTRIGB         TP32_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_SCK_PGxTRIGC         TP32_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP32_PWM_IF)
    #define MIKRO_SCK_PWM_IF         TP32_PWM_IF  // interrupt flag bit
    #define MIKRO_SCK_PWM_IE         TP32_PWM_IE  // interrupt enable bit
    #define MIKRO_SCK_PWM_IP         TP32_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_SCK_PWM_Interrupt TP32_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #65 is MIKRO_MISO
#define MIKRO_MISO_TRIS    TP24_TRIS // GPIO direction register bit
#define MIKRO_MISO_Write() TP24_Write() // GPIO port latch register bit
#define MIKRO_MISO_Read()  TP24_Read() // GPIO port register bit
#define MIKRO_MISO_ODC     TP24_ODC // GPIO port open drain configuration register bit
#define MIKRO_MISO_CNPU    TP24_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_MISO_CNPD    TP24_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_MISO_CNEN0   TP24_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_MISO_CNSTAT  TP24_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_MISO_CNEN1   TP24_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_MISO_CNF     TP24_CNF // GPIO port change notification flag bit register bit
#if defined TP24_RP
  #define MIKRO_MISO_RP       TP24_RP // Number of Remappable Pin
  #define _MIKRO_MISO_RPxR    TP24_RPxR // Remappable Pin Register
#endif
#define MIKRO_MISO_Set()    TP24_Set() 
#define MIKRO_MISO_Clear()  TP24_Clear()
#define MIKRO_MISO_Toggle() TP24_Toggle() 
#define MIKRO_MISO_IS_ANALOG_INPUT    TP24_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP24_ANSEL
  #define MIKRO_MISO_ANSEL          TP24_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_MISO_ADCCORE        TP24_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_MISO_IS_SHARED_CORE TP24_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_MISO_ADC_AN_INPUT   TP24_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_MISO_ADCBUF         TP24_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_MISO_ADC_ANIE ADIELbits.IE      TP24_ADC_ANIE ADIELbits.IE
  #define MIKRO_MISO_ADC_ANEIE ADEIELbits.EIEN  TP24_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_MISO_ADC_IF         TP24_ADC_IF           // interrupt flag bit
  #define MIKRO_MISO_ADC_IE         TP24_ADC_IE           // interrupt enable bit
  #define MIKRO_MISO_ADC_IP         TP24_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_MISO_ADC_RDY        TP24_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_MISO_ADC_Interrupt TP24_ADC_Interrupt   
  #define MIKRO_MISO_INIT_ANALOG    TP24_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_MISO_InitAsOutput()   TP24_InitAsOutput()             // initialization macro for digital output
#define MIKRO_MISO_InitAsInput()    TP24_InitAsInput()              // initialization macro for digital input
#if defined (TP24_PGx_CHANNEL)
  #define MIKRO_MISO_PGx_CHANNEL      TP24_PGx_CHANNEL // PWM channel index
  #define MIKRO_MISO_PGx_PER          MIKRO_MISO_PGx_PER // PWM channel period register
  #define MIKRO_MISO_PGx_PHASE        MIKRO_MISO_PGx_PHASE // PWM channel phase register
  #define MIKRO_MISO_PGx_DC           MIKRO_MISO_PGx_DC // PWM channel duty cycle register
  #define MIKRO_MISO_PGx_DCA          MIKRO_MISO_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_MISO_PGx_DTH          MIKRO_MISO_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_MISO_PGx_DTL          MIKRO_MISO_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP24_PGx_OVRENH)
    #define MIKRO_MISO_PGx_OVRENH       TP24_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_MISO_PGx_PENH         TP24_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP24_PGx_OVRENL)
    #define MIKRO_MISO_PGx_OVRENL       TP24_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_MISO_PGx_PENL         TP24_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_MISO_PGxUPDREQ        TP24_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_MISO_PGxTRIGA         TP24_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_MISO_PGxTRIGB         TP24_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_MISO_PGxTRIGC         TP24_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP24_PWM_IF)
    #define MIKRO_MISO_PWM_IF         TP24_PWM_IF  // interrupt flag bit
    #define MIKRO_MISO_PWM_IE         TP24_PWM_IE  // interrupt enable bit
    #define MIKRO_MISO_PWM_IP         TP24_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_MISO_PWM_Interrupt TP24_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #66 is MIKRO_MOSI
#define MIKRO_MOSI_TRIS    TP36_TRIS // GPIO direction register bit
#define MIKRO_MOSI_Write() TP36_Write() // GPIO port latch register bit
#define MIKRO_MOSI_Read()  TP36_Read() // GPIO port register bit
#define MIKRO_MOSI_ODC     TP36_ODC // GPIO port open drain configuration register bit
#define MIKRO_MOSI_CNPU    TP36_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_MOSI_CNPD    TP36_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_MOSI_CNEN0   TP36_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_MOSI_CNSTAT  TP36_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_MOSI_CNEN1   TP36_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_MOSI_CNF     TP36_CNF // GPIO port change notification flag bit register bit
#if defined TP36_RP
  #define MIKRO_MOSI_RP       TP36_RP // Number of Remappable Pin
  #define _MIKRO_MOSI_RPxR    TP36_RPxR // Remappable Pin Register
#endif
#define MIKRO_MOSI_Set()    TP36_Set() 
#define MIKRO_MOSI_Clear()   TP36_Clear()
#define MIKRO_MOSI_Toggle() TP36_Toggle() 
#define MIKRO_MOSI_IS_ANALOG_INPUT    TP36_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP36_ANSEL
  #define MIKRO_MOSI_ANSEL          TP36_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_MOSI_ADCCORE        TP36_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_MOSI_IS_SHARED_CORE TP36_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_MOSI_ADC_AN_INPUT   TP36_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_MOSI_ADCBUF         TP36_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_MOSI_ADC_ANIE ADIELbits.IE      TP36_ADC_ANIE ADIELbits.IE
  #define MIKRO_MOSI_ADC_ANEIE ADEIELbits.EIEN  TP36_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_MOSI_ADC_IF         TP36_ADC_IF           // interrupt flag bit
  #define MIKRO_MOSI_ADC_IE         TP36_ADC_IE           // interrupt enable bit
  #define MIKRO_MOSI_ADC_IP         TP36_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_MOSI_ADC_RDY        TP36_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_MOSI_ADC_Interrupt TP36_ADC_Interrupt   
  #define MIKRO_MOSI_INIT_ANALOG    TP36_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_MOSI_InitAsOutput()   TP36_InitAsOutput()             // initialization macro for digital output
#define MIKRO_MOSI_InitAsInput()    TP36_InitAsInput()              // initialization macro for digital input
#if defined (TP36_PGx_CHANNEL)
  #define MIKRO_MOSI_PGx_CHANNEL      TP36_PGx_CHANNEL // PWM channel index
  #define MIKRO_MOSI_PGx_PER          MIKRO_MOSI_PGx_PER // PWM channel period register
  #define MIKRO_MOSI_PGx_PHASE        MIKRO_MOSI_PGx_PHASE // PWM channel phase register
  #define MIKRO_MOSI_PGx_DC           MIKRO_MOSI_PGx_DC // PWM channel duty cycle register
  #define MIKRO_MOSI_PGx_DCA          MIKRO_MOSI_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_MOSI_PGx_DTH          MIKRO_MOSI_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_MOSI_PGx_DTL          MIKRO_MOSI_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP36_PGx_OVRENH)
    #define MIKRO_MOSI_PGx_OVRENH       TP36_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_MOSI_PGx_PENH         TP36_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP36_PGx_OVRENL)
    #define MIKRO_MOSI_PGx_OVRENL       TP36_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_MOSI_PGx_PENL         TP36_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_MOSI_PGxUPDREQ        TP36_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_MOSI_PGxTRIGA         TP36_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_MOSI_PGxTRIGB         TP36_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_MOSI_PGxTRIGC         TP36_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP36_PWM_IF)
    #define MIKRO_MOSI_PWM_IF         TP36_PWM_IF  // interrupt flag bit
    #define MIKRO_MOSI_PWM_IE         TP36_PWM_IE  // interrupt enable bit
    #define MIKRO_MOSI_PWM_IP         TP36_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_MOSI_PWM_Interrupt TP36_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #67 is MIKRO_SDA
#define MIKRO_SDA_TRIS    TP55_TRIS // GPIO direction register bit
#define MIKRO_SDA_Write() TP55_Write() // GPIO port latch register bit
#define MIKRO_SDA_Read()  TP55_Read() // GPIO port register bit
#define MIKRO_SDA_ODC     TP55_ODC // GPIO port open drain configuration register bit
#define MIKRO_SDA_CNPU    TP55_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_SDA_CNPD    TP55_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_SDA_CNEN0   TP55_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_SDA_CNSTAT  TP55_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_SDA_CNEN1   TP55_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_SDA_CNF     TP55_CNF // GPIO port change notification flag bit register bit
#if defined TP55_RP
  #define MIKRO_SDA_RP       TP55_RP // Number of Remappable Pin
  #define _MIKRO_SDA_RPxR    TP55_RPxR // Remappable Pin Register
#endif
#define MIKRO_SDA_Set()    TP55_Set() 
#define MIKRO_SDA_Clear()   TP55_Clear()
#define MIKRO_SDA_Toggle() TP55_Toggle() 
#define MIKRO_SDA_IS_ANALOG_INPUT    TP55_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP55_ANSEL
  #define MIKRO_SDA_ANSEL          TP55_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_SDA_ADCCORE        TP55_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_SDA_IS_SHARED_CORE TP55_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_SDA_ADC_AN_INPUT   TP55_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_SDA_ADCBUF         TP55_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_SDA_ADC_ANIE ADIELbits.IE      TP55_ADC_ANIE ADIELbits.IE
  #define MIKRO_SDA_ADC_ANEIE ADEIELbits.EIEN  TP55_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_SDA_ADC_IF         TP55_ADC_IF           // interrupt flag bit
  #define MIKRO_SDA_ADC_IE         TP55_ADC_IE           // interrupt enable bit
  #define MIKRO_SDA_ADC_IP         TP55_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_SDA_ADC_RDY        TP55_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_SDA_ADC_Interrupt TP55_ADC_Interrupt   
  #define MIKRO_SDA_INIT_ANALOG    TP55_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_SDA_InitAsOutput()   TP55_InitAsOutput()             // initialization macro for digital output
#define MIKRO_SDA_InitAsInput()    TP55_InitAsInput()              // initialization macro for digital input
#if defined (TP55_PGx_CHANNEL)
  #define MIKRO_SDA_PGx_CHANNEL      TP55_PGx_CHANNEL // PWM channel index
  #define MIKRO_SDA_PGx_PER          MIKRO_SDA_PGx_PER // PWM channel period register
  #define MIKRO_SDA_PGx_PHASE        MIKRO_SDA_PGx_PHASE // PWM channel phase register
  #define MIKRO_SDA_PGx_DC           MIKRO_SDA_PGx_DC // PWM channel duty cycle register
  #define MIKRO_SDA_PGx_DCA          MIKRO_SDA_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_SDA_PGx_DTH          MIKRO_SDA_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_SDA_PGx_DTL          MIKRO_SDA_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP55_PGx_OVRENH)
    #define MIKRO_SDA_PGx_OVRENH       TP55_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_SDA_PGx_PENH         TP55_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP55_PGx_OVRENL)
    #define MIKRO_SDA_PGx_OVRENL       TP55_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_SDA_PGx_PENL         TP55_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_SDA_PGxUPDREQ        TP55_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_SDA_PGxTRIGA         TP55_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_SDA_PGxTRIGB         TP55_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_SDA_PGxTRIGC         TP55_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP55_PWM_IF)
    #define MIKRO_SDA_PWM_IF         TP55_PWM_IF  // interrupt flag bit
    #define MIKRO_SDA_PWM_IE         TP55_PWM_IE  // interrupt enable bit
    #define MIKRO_SDA_PWM_IP         TP55_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_SDA_PWM_Interrupt TP55_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #68 is MIKRO_SCL
#define MIKRO_SCL_TRIS    TP53_TRIS // GPIO direction register bit
#define MIKRO_SCL_Write() TP53_Write() // GPIO port latch register bit
#define MIKRO_SCL_Read()  TP53_Read() // GPIO port register bit
#define MIKRO_SCL_ODC     TP53_ODC // GPIO port open drain configuration register bit
#define MIKRO_SCL_CNPU    TP53_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_SCL_CNPD    TP53_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_SCL_CNEN0   TP53_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_SCL_CNSTAT  TP53_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_SCL_CNEN1   TP53_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_SCL_CNF     TP53_CNF // GPIO port change notification flag bit register bit
#if defined TP53_RP
  #define MIKRO_SCL_RP       TP53_RP // Number of Remappable Pin
  #define _MIKRO_SCL_RPxR    TP53_RPxR // Remappable Pin Register
#endif
#define MIKRO_SCL_Set()    TP53_Set() 
#define MIKRO_SCL_Clear()    TP53_Clear()
#define MIKRO_SCL_Toggle() TP53_Toggle() 
#define MIKRO_SCL_IS_ANALOG_INPUT    TP53_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP53_ANSEL
  #define MIKRO_SCL_ANSEL          TP53_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_SCL_ADCCORE        TP53_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_SCL_IS_SHARED_CORE TP53_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_SCL_ADC_AN_INPUT   TP53_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_SCL_ADCBUF         TP53_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_SCL_ADC_ANIE ADIELbits.IE      TP53_ADC_ANIE ADIELbits.IE
  #define MIKRO_SCL_ADC_ANEIE ADEIELbits.EIEN  TP53_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_SCL_ADC_IF         TP53_ADC_IF           // interrupt flag bit
  #define MIKRO_SCL_ADC_IE         TP53_ADC_IE           // interrupt enable bit
  #define MIKRO_SCL_ADC_IP         TP53_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_SCL_ADC_RDY        TP53_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_SCL_ADC_Interrupt TP53_ADC_Interrupt   
  #define MIKRO_SCL_INIT_ANALOG    TP53_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_SCL_InitAsOutput()   TP53_InitAsOutput()             // initialization macro for digital output
#define MIKRO_SCL_InitAsInput()    TP53_InitAsInput()              // initialization macro for digital input
#if defined (TP53_PGx_CHANNEL)
  #define MIKRO_SCL_PGx_CHANNEL      TP53_PGx_CHANNEL // PWM channel index
  #define MIKRO_SCL_PGx_PER          MIKRO_SCL_PGx_PER // PWM channel period register
  #define MIKRO_SCL_PGx_PHASE        MIKRO_SCL_PGx_PHASE // PWM channel phase register
  #define MIKRO_SCL_PGx_DC           MIKRO_SCL_PGx_DC // PWM channel duty cycle register
  #define MIKRO_SCL_PGx_DCA          MIKRO_SCL_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_SCL_PGx_DTH          MIKRO_SCL_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_SCL_PGx_DTL          MIKRO_SCL_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP53_PGx_OVRENH)
    #define MIKRO_SCL_PGx_OVRENH       TP53_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_SCL_PGx_PENH         TP53_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP53_PGx_OVRENL)
    #define MIKRO_SCL_PGx_OVRENL       TP53_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_SCL_PGx_PENL         TP53_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_SCL_PGxUPDREQ        TP53_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_SCL_PGxTRIGA         TP53_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_SCL_PGxTRIGB         TP53_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_SCL_PGxTRIGC         TP53_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP53_PWM_IF)
    #define MIKRO_SCL_PWM_IF         TP53_PWM_IF  // interrupt flag bit
    #define MIKRO_SCL_PWM_IE         TP53_PWM_IE  // interrupt enable bit
    #define MIKRO_SCL_PWM_IP         TP53_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_SCL_PWM_Interrupt TP53_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #69 is MIKRO_SER1
#define MIKRO_SER1_TRIS    TP50_TRIS // GPIO direction register bit
#define MIKRO_SER1_Write() TP50_Write() // GPIO port latch register bit
#define MIKRO_SER1_Read()  TP50_Read() // GPIO port register bit
#define MIKRO_SER1_ODC     TP50_ODC // GPIO port open drain configuration register bit
#define MIKRO_SER1_CNPU    TP50_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_SER1_CNPD    TP50_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_SER1_CNEN0   TP50_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_SER1_CNSTAT  TP50_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_SER1_CNEN1   TP50_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_SER1_CNF     TP50_CNF // GPIO port change notification flag bit register bit
#if defined TP50_RP
  #define MIKRO_SER1_RP       TP50_RP // Number of Remappable Pin
  #define _MIKRO_SER1_RPxR    TP50_RPxR // Remappable Pin Register
#endif
#define MIKRO_SER1_Set()    TP50_Set() 
#define MIKRO_SER1_Clear()   TP50_Clear()
#define MIKRO_SER1_Toggle() TP50_Toggle() 
#define MIKRO_SER1_IS_ANALOG_INPUT    TP50_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP50_ANSEL
  #define MIKRO_SER1_ANSEL          TP50_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_SER1_ADCCORE        TP50_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_SER1_IS_SHARED_CORE TP50_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_SER1_ADC_AN_INPUT   TP50_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_SER1_ADCBUF         TP50_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_SER1_ADC_ANIE ADIELbits.IE      TP50_ADC_ANIE ADIELbits.IE
  #define MIKRO_SER1_ADC_ANEIE ADEIELbits.EIEN  TP50_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_SER1_ADC_IF         TP50_ADC_IF           // interrupt flag bit
  #define MIKRO_SER1_ADC_IE         TP50_ADC_IE           // interrupt enable bit
  #define MIKRO_SER1_ADC_IP         TP50_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_SER1_ADC_RDY        TP50_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_SER1_ADC_Interrupt TP50_ADC_Interrupt   
  #define MIKRO_SER1_INIT_ANALOG    TP50_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_SER1_InitAsOutput()   TP50_InitAsOutput()             // initialization macro for digital output
#define MIKRO_SER1_InitAsInput()    TP50_InitAsInput()              // initialization macro for digital input
#if defined (TP50_PGx_CHANNEL)
  #define MIKRO_SER1_PGx_CHANNEL      TP50_PGx_CHANNEL // PWM channel index
  #define MIKRO_SER1_PGx_PER          MIKRO_SER1_PGx_PER // PWM channel period register
  #define MIKRO_SER1_PGx_PHASE        MIKRO_SER1_PGx_PHASE // PWM channel phase register
  #define MIKRO_SER1_PGx_DC           MIKRO_SER1_PGx_DC // PWM channel duty cycle register
  #define MIKRO_SER1_PGx_DCA          MIKRO_SER1_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_SER1_PGx_DTH          MIKRO_SER1_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_SER1_PGx_DTL          MIKRO_SER1_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP50_PGx_OVRENH)
    #define MIKRO_SER1_PGx_OVRENH       TP50_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_SER1_PGx_PENH         TP50_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP50_PGx_OVRENL)
    #define MIKRO_SER1_PGx_OVRENL       TP50_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_SER1_PGx_PENL         TP50_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_SER1_PGxUPDREQ        TP50_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_SER1_PGxTRIGA         TP50_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_SER1_PGxTRIGB         TP50_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_SER1_PGxTRIGC         TP50_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP50_PWM_IF)
    #define MIKRO_SER1_PWM_IF         TP50_PWM_IF  // interrupt flag bit
    #define MIKRO_SER1_PWM_IE         TP50_PWM_IE  // interrupt enable bit
    #define MIKRO_SER1_PWM_IP         TP50_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_SER1_PWM_Interrupt TP50_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #70 is MIKRO_SER0
#define MIKRO_SER0_TRIS    TP39_TRIS // GPIO direction register bit
#define MIKRO_SER0_Write() TP39_Write() // GPIO port latch register bit
#define MIKRO_SER0_Read()  TP39_Read() // GPIO port register bit
#define MIKRO_SER0_ODC     TP39_ODC // GPIO port open drain configuration register bit
#define MIKRO_SER0_CNPU    TP39_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_SER0_CNPD    TP39_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_SER0_CNEN0   TP39_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_SER0_CNSTAT  TP39_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_SER0_CNEN1   TP39_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_SER0_CNF     TP39_CNF // GPIO port change notification flag bit register bit
#if defined TP39_RP
  #define MIKRO_SER0_RP       TP39_RP // Number of Remappable Pin
  #define _MIKRO_SER0_RPxR    TP39_RPxR // Remappable Pin Register
#endif
#define MIKRO_SER0_Set()    TP39_Set() 
#define MIKRO_SER0_Clear()   TP39_Clear()
#define MIKRO_SER0_Toggle() TP39_Toggle() 
#define MIKRO_SER0_IS_ANALOG_INPUT    TP39_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP39_ANSEL
  #define MIKRO_SER0_ANSEL          TP39_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_SER0_ADCCORE        TP39_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_SER0_IS_SHARED_CORE TP39_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_SER0_ADC_AN_INPUT   TP39_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_SER0_ADCBUF         TP39_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_SER0_ADC_ANIE ADIELbits.IE      TP39_ADC_ANIE ADIELbits.IE
  #define MIKRO_SER0_ADC_ANEIE ADEIELbits.EIEN  TP39_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_SER0_ADC_IF         TP39_ADC_IF           // interrupt flag bit
  #define MIKRO_SER0_ADC_IE         TP39_ADC_IE           // interrupt enable bit
  #define MIKRO_SER0_ADC_IP         TP39_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_SER0_ADC_RDY        TP39_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_SER0_ADC_Interrupt TP39_ADC_Interrupt   
  #define MIKRO_SER0_INIT_ANALOG    TP39_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_SER0_InitAsOutput()   TP39_InitAsOutput()             // initialization macro for digital output
#define MIKRO_SER0_InitAsInput()    TP39_InitAsInput()              // initialization macro for digital input
#if defined (TP39_PGx_CHANNEL)
  #define MIKRO_SER0_PGx_CHANNEL      TP39_PGx_CHANNEL // PWM channel index
  #define MIKRO_SER0_PGx_PER          MIKRO_SER0_PGx_PER // PWM channel period register
  #define MIKRO_SER0_PGx_PHASE        MIKRO_SER0_PGx_PHASE // PWM channel phase register
  #define MIKRO_SER0_PGx_DC           MIKRO_SER0_PGx_DC // PWM channel duty cycle register
  #define MIKRO_SER0_PGx_DCA          MIKRO_SER0_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_SER0_PGx_DTH          MIKRO_SER0_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_SER0_PGx_DTL          MIKRO_SER0_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP39_PGx_OVRENH)
    #define MIKRO_SER0_PGx_OVRENH       TP39_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_SER0_PGx_PENH         TP39_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP39_PGx_OVRENL)
    #define MIKRO_SER0_PGx_OVRENL       TP39_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_SER0_PGx_PENL         TP39_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_SER0_PGxUPDREQ        TP39_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_SER0_PGxTRIGA         TP39_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_SER0_PGxTRIGB         TP39_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_SER0_PGxTRIGC         TP39_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP39_PWM_IF)
    #define MIKRO_SER0_PWM_IF         TP39_PWM_IF  // interrupt flag bit
    #define MIKRO_SER0_PWM_IE         TP39_PWM_IE  // interrupt enable bit
    #define MIKRO_SER0_PWM_IP         TP39_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_SER0_PWM_Interrupt TP39_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #71 is MIKRO_PWM
#define MIKRO_PWM_TRIS    TP45_TRIS // GPIO direction register bit
#define MIKRO_PWM_Write() TP45_Write() // GPIO port latch register bit
#define MIKRO_PWM_Read()  TP45_Read() // GPIO port register bit
#define MIKRO_PWM_ODC     TP45_ODC // GPIO port open drain configuration register bit
#define MIKRO_PWM_CNPU    TP45_CNPU // GPIO port pull-up resistor register bit
#define MIKRO_PWM_CNPD    TP45_CNPD // GPIO port pull-down resistor register bit
#define MIKRO_PWM_CNEN0   TP45_CNEN0 // GPIO port change notification Enable register bit
#define MIKRO_PWM_CNSTAT  TP45_CNSTAT // GPIO port change notification Status register bit
#define MIKRO_PWM_CNEN1   TP45_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define MIKRO_PWM_CNF     TP45_CNF // GPIO port change notification flag bit register bit
#if defined TP45_RP
  #define MIKRO_PWM_RP       TP45_RP // Number of Remappable Pin
  #define _MIKRO_PWM_RPxR    TP45_RPxR // Remappable Pin Register
#endif
#define MIKRO_PWM_Set()    TP45_Set() 
#define MIKRO_PWM_Clear()   TP45_Clear()
#define MIKRO_PWM_Toggle() TP45_Toggle() 
#define MIKRO_PWM_IS_ANALOG_INPUT    TP45_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP45_ANSEL
  #define MIKRO_PWM_ANSEL          TP45_ANSEL            // analog/digital pin configuration register bit
  #define MIKRO_PWM_ADCCORE        TP45_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define MIKRO_PWM_IS_SHARED_CORE TP45_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define MIKRO_PWM_ADC_AN_INPUT   TP45_ADC_AN_INPUT     // ANx input pin number
  #define MIKRO_PWM_ADCBUF         TP45_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define MIKRO_PWM_ADC_ANIE ADIELbits.IE      TP45_ADC_ANIE ADIELbits.IE
  #define MIKRO_PWM_ADC_ANEIE ADEIELbits.EIEN  TP45_ADC_ANEIE ADEIELbits.EIEN
  #define MIKRO_PWM_ADC_IF         TP45_ADC_IF           // interrupt flag bit
  #define MIKRO_PWM_ADC_IE         TP45_ADC_IE           // interrupt enable bit
  #define MIKRO_PWM_ADC_IP         TP45_ADC_IP           // interrupt priority for this analog input
  #define MIKRO_PWM_ADC_RDY        TP45_ADC_RDY          // ADC buffer ready bit
  #define _MIKRO_PWM_ADC_Interrupt TP45_ADC_Interrupt   
  #define MIKRO_PWM_INIT_ANALOG    TP45_INIT_ANALOG      // initialization macro for analog input
#endif
#define MIKRO_PWM_InitAsOutput()   TP45_InitAsOutput()             // initialization macro for digital output
#define MIKRO_PWM_InitAsInput()    TP45_InitAsInput()              // initialization macro for digital input
#if defined (TP45_PGx_CHANNEL)
  #define MIKRO_PWM_PGx_CHANNEL      TP45_PGx_CHANNEL // PWM channel index
  #define MIKRO_PWM_PGx_PER          MIKRO_PWM_PGx_PER // PWM channel period register
  #define MIKRO_PWM_PGx_PHASE        MIKRO_PWM_PGx_PHASE // PWM channel phase register
  #define MIKRO_PWM_PGx_DC           MIKRO_PWM_PGx_DC // PWM channel duty cycle register
  #define MIKRO_PWM_PGx_DCA          MIKRO_PWM_PGx_DCA // PWM channel duty cycle A register
  #define MIKRO_PWM_PGx_DTH          MIKRO_PWM_PGx_DTH // PWM channel rising edge dead time register
  #define MIKRO_PWM_PGx_DTL          MIKRO_PWM_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP45_PGx_OVRENH)
    #define MIKRO_PWM_PGx_OVRENH       TP45_PGx_OVRENH // PWM channel IO config register override high control bit
    #define MIKRO_PWM_PGx_PENH         TP45_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP45_PGx_OVRENL)
    #define MIKRO_PWM_PGx_OVRENL       TP45_PGx_OVRENL // PWM channel IO config register override low control bit
    #define MIKRO_PWM_PGx_PENL         TP45_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define MIKRO_PWM_PGxUPDREQ        TP45_PGxUPDREQ // PWM channel register update request 
  #define MIKRO_PWM_PGxTRIGA         TP45_PGxTRIGA // PWM channel ADC trigger A register
  #define MIKRO_PWM_PGxTRIGB         TP45_PGxTRIGB // PWM channel ADC trigger B register
  #define MIKRO_PWM_PGxTRIGC         TP45_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP45_PWM_IF)
    #define MIKRO_PWM_PWM_IF         TP45_PWM_IF  // interrupt flag bit
    #define MIKRO_PWM_PWM_IE         TP45_PWM_IE  // interrupt enable bit
    #define MIKRO_PWM_PWM_IP         TP45_PWM_IP  // interrupt priority for this analog input
    #define _MIKRO_PWM_PWM_Interrupt TP45_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #72 is SW
#define SW_TRIS    TP27_TRIS // GPIO direction register bit
#define SW_Write() TP27_Write() // GPIO port latch register bit
#define SW_Read()  TP27_Read() // GPIO port register bit
#define SW_ODC     TP27_ODC // GPIO port open drain configuration register bit
#define SW_CNPU    TP27_CNPU // GPIO port pull-up resistor register bit
#define SW_CNPD    TP27_CNPD // GPIO port pull-down resistor register bit
#define SW_CNEN0   TP27_CNEN0 // GPIO port change notification Enable register bit
#define SW_CNSTAT  TP27_CNSTAT // GPIO port change notification Status register bit
#define SW_CNEN1   TP27_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define SW_CNF     TP27_CNF // GPIO port change notification flag bit register bit
#if defined TP27_RP
  #define SW_RP       TP27_RP // Number of Remappable Pin
  #define _SW_RPxR    TP27_RPxR // Remappable Pin Register
#endif
#define SW_Set()    TP27_Set() 
#define SW_Clear()   TP27_Clear()
#define SW_Toggle() TP27_Toggle() 
#define SW_IS_ANALOG_INPUT    TP27_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP27_ANSEL
  #define SW_ANSEL          TP27_ANSEL            // analog/digital pin configuration register bit
  #define SW_ADCCORE        TP27_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define SW_IS_SHARED_CORE TP27_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define SW_ADC_AN_INPUT   TP27_ADC_AN_INPUT     // ANx input pin number
  #define SW_ADCBUF         TP27_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define SW_ADC_ANIE ADIELbits.IE      TP27_ADC_ANIE ADIELbits.IE
  #define SW_ADC_ANEIE ADEIELbits.EIEN  TP27_ADC_ANEIE ADEIELbits.EIEN
  #define SW_ADC_IF         TP27_ADC_IF           // interrupt flag bit
  #define SW_ADC_IE         TP27_ADC_IE           // interrupt enable bit
  #define SW_ADC_IP         TP27_ADC_IP           // interrupt priority for this analog input
  #define SW_ADC_RDY        TP27_ADC_RDY          // ADC buffer ready bit
  #define _SW_ADC_Interrupt TP27_ADC_Interrupt   
  #define SW_INIT_ANALOG    TP27_INIT_ANALOG      // initialization macro for analog input
#endif
#define SW_InitAsOutput()   TP27_InitAsOutput()             // initialization macro for digital output
#define SW_InitAsInput()    TP27_InitAsInput()              // initialization macro for digital input
#if defined (TP27_PGx_CHANNEL)
  #define SW_PGx_CHANNEL      TP27_PGx_CHANNEL // PWM channel index
  #define SW_PGx_PER          SW_PGx_PER // PWM channel period register
  #define SW_PGx_PHASE        SW_PGx_PHASE // PWM channel phase register
  #define SW_PGx_DC           SW_PGx_DC // PWM channel duty cycle register
  #define SW_PGx_DCA          SW_PGx_DCA // PWM channel duty cycle A register
  #define SW_PGx_DTH          SW_PGx_DTH // PWM channel rising edge dead time register
  #define SW_PGx_DTL          SW_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP27_PGx_OVRENH)
    #define SW_PGx_OVRENH       TP27_PGx_OVRENH // PWM channel IO config register override high control bit
    #define SW_PGx_PENH         TP27_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP27_PGx_OVRENL)
    #define SW_PGx_OVRENL       TP27_PGx_OVRENL // PWM channel IO config register override low control bit
    #define SW_PGx_PENL         TP27_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define SW_PGxUPDREQ        TP27_PGxUPDREQ // PWM channel register update request 
  #define SW_PGxTRIGA         TP27_PGxTRIGA // PWM channel ADC trigger A register
  #define SW_PGxTRIGB         TP27_PGxTRIGB // PWM channel ADC trigger B register
  #define SW_PGxTRIGC         TP27_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP27_PWM_IF)
    #define SW_PWM_IF         TP27_PWM_IF  // interrupt flag bit
    #define SW_PWM_IE         TP27_PWM_IE  // interrupt enable bit
    #define SW_PWM_IP         TP27_PWM_IP  // interrupt priority for this analog input
    #define _SW_PWM_Interrupt TP27_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #73 is LED_RD
#define LED_RD_TRIS    TP52_TRIS // GPIO direction register bit
#define LED_RD_Write() TP52_Write() // GPIO port latch register bit
#define LED_RD_Read()  TP52_Read() // GPIO port register bit
#define LED_RD_ODC     TP52_ODC // GPIO port open drain configuration register bit
#define LED_RD_CNPU    TP52_CNPU // GPIO port pull-up resistor register bit
#define LED_RD_CNPD    TP52_CNPD // GPIO port pull-down resistor register bit
#define LED_RD_CNEN0   TP52_CNEN0 // GPIO port change notification Enable register bit
#define LED_RD_CNSTAT  TP52_CNSTAT // GPIO port change notification Status register bit
#define LED_RD_CNEN1   TP52_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define LED_RD_CNF     TP52_CNF // GPIO port change notification flag bit register bit
#if defined TP52_RP
  #define LED_RD_RP       TP52_RP // Number of Remappable Pin
  #define _LED_RD_RPxR    TP52_RPxR // Remappable Pin Register
#endif
#define LED_RD_Set()    TP52_Set() 
#define LED_RD_Clear()   TP52_Clear()
#define LED_RD_Toggle() TP52_Toggle() 
#define LED_RD_IS_ANALOG_INPUT    TP52_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP52_ANSEL
  #define LED_RD_ANSEL          TP52_ANSEL            // analog/digital pin configuration register bit
  #define LED_RD_ADCCORE        TP52_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define LED_RD_IS_SHARED_CORE TP52_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define LED_RD_ADC_AN_INPUT   TP52_ADC_AN_INPUT     // ANx input pin number
  #define LED_RD_ADCBUF         TP52_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define LED_RD_ADC_ANIE ADIELbits.IE      TP52_ADC_ANIE ADIELbits.IE
  #define LED_RD_ADC_ANEIE ADEIELbits.EIEN  TP52_ADC_ANEIE ADEIELbits.EIEN
  #define LED_RD_ADC_IF         TP52_ADC_IF           // interrupt flag bit
  #define LED_RD_ADC_IE         TP52_ADC_IE           // interrupt enable bit
  #define LED_RD_ADC_IP         TP52_ADC_IP           // interrupt priority for this analog input
  #define LED_RD_ADC_RDY        TP52_ADC_RDY          // ADC buffer ready bit
  #define _LED_RD_ADC_Interrupt TP52_ADC_Interrupt   
  #define LED_RD_INIT_ANALOG    TP52_INIT_ANALOG      // initialization macro for analog input
#endif
#define LED_RD_InitAsOutput()   TP52_InitAsOutput()             // initialization macro for digital output
#define LED_RD_InitAsInput()    TP52_InitAsInput()              // initialization macro for digital input
#if defined (TP52_PGx_CHANNEL)
  #define LED_RD_PGx_CHANNEL      TP52_PGx_CHANNEL // PWM channel index
  #define LED_RD_PGx_PER          LED_RD_PGx_PER // PWM channel period register
  #define LED_RD_PGx_PHASE        LED_RD_PGx_PHASE // PWM channel phase register
  #define LED_RD_PGx_DC           LED_RD_PGx_DC // PWM channel duty cycle register
  #define LED_RD_PGx_DCA          LED_RD_PGx_DCA // PWM channel duty cycle A register
  #define LED_RD_PGx_DTH          LED_RD_PGx_DTH // PWM channel rising edge dead time register
  #define LED_RD_PGx_DTL          LED_RD_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP52_PGx_OVRENH)
    #define LED_RD_PGx_OVRENH       TP52_PGx_OVRENH // PWM channel IO config register override high control bit
    #define LED_RD_PGx_PENH         TP52_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP52_PGx_OVRENL)
    #define LED_RD_PGx_OVRENL       TP52_PGx_OVRENL // PWM channel IO config register override low control bit
    #define LED_RD_PGx_PENL         TP52_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define LED_RD_PGxUPDREQ        TP52_PGxUPDREQ // PWM channel register update request 
  #define LED_RD_PGxTRIGA         TP52_PGxTRIGA // PWM channel ADC trigger A register
  #define LED_RD_PGxTRIGB         TP52_PGxTRIGB // PWM channel ADC trigger B register
  #define LED_RD_PGxTRIGC         TP52_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP52_PWM_IF)
    #define LED_RD_PWM_IF         TP52_PWM_IF  // interrupt flag bit
    #define LED_RD_PWM_IE         TP52_PWM_IE  // interrupt enable bit
    #define LED_RD_PWM_IP         TP52_PWM_IP  // interrupt priority for this analog input
    #define _LED_RD_PWM_Interrupt TP52_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #74 is LED_GN
#define LED_GN_TRIS    TP54_TRIS // GPIO direction register bit
#define LED_GN_Write() TP54_Write() // GPIO port latch register bit
#define LED_GN_Read()  TP54_Read() // GPIO port register bit
#define LED_GN_ODC     TP54_ODC // GPIO port open drain configuration register bit
#define LED_GN_CNPU    TP54_CNPU // GPIO port pull-up resistor register bit
#define LED_GN_CNPD    TP54_CNPD // GPIO port pull-down resistor register bit
#define LED_GN_CNEN0   TP54_CNEN0 // GPIO port change notification Enable register bit
#define LED_GN_CNSTAT  TP54_CNSTAT // GPIO port change notification Status register bit
#define LED_GN_CNEN1   TP54_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define LED_GN_CNF     TP54_CNF // GPIO port change notification flag bit register bit
#if defined TP54_RP
  #define LED_GN_RP       TP54_RP // Number of Remappable Pin
  #define _LED_GN_RPxR    TP54_RPxR // Remappable Pin Register
#endif
#define LED_GN_Set()    TP54_Set() 
#define LED_GN_Clear()   TP54_Clear()
#define LED_GN_Toggle() TP54_Toggle() 
#define LED_GN_IS_ANALOG_INPUT    TP54_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP54_ANSEL
  #define LED_GN_ANSEL          TP54_ANSEL            // analog/digital pin configuration register bit
  #define LED_GN_ADCCORE        TP54_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define LED_GN_IS_SHARED_CORE TP54_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define LED_GN_ADC_AN_INPUT   TP54_ADC_AN_INPUT     // ANx input pin number
  #define LED_GN_ADCBUF         TP54_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define LED_GN_ADC_ANIE ADIELbits.IE      TP54_ADC_ANIE ADIELbits.IE
  #define LED_GN_ADC_ANEIE ADEIELbits.EIEN  TP54_ADC_ANEIE ADEIELbits.EIEN
  #define LED_GN_ADC_IF         TP54_ADC_IF           // interrupt flag bit
  #define LED_GN_ADC_IE         TP54_ADC_IE           // interrupt enable bit
  #define LED_GN_ADC_IP         TP54_ADC_IP           // interrupt priority for this analog input
  #define LED_GN_ADC_RDY        TP54_ADC_RDY          // ADC buffer ready bit
  #define _LED_GN_ADC_Interrupt TP54_ADC_Interrupt   
  #define LED_GN_INIT_ANALOG    TP54_INIT_ANALOG      // initialization macro for analog input
#endif
#define LED_GN_InitAsOutput()   TP54_InitAsOutput()             // initialization macro for digital output
#define LED_GN_InitAsInput()    TP54_InitAsInput()              // initialization macro for digital input
#if defined (TP54_PGx_CHANNEL)
  #define LED_GN_PGx_CHANNEL      TP54_PGx_CHANNEL // PWM channel index
  #define LED_GN_PGx_PER          LED_GN_PGx_PER // PWM channel period register
  #define LED_GN_PGx_PHASE        LED_GN_PGx_PHASE // PWM channel phase register
  #define LED_GN_PGx_DC           LED_GN_PGx_DC // PWM channel duty cycle register
  #define LED_GN_PGx_DCA          LED_GN_PGx_DCA // PWM channel duty cycle A register
  #define LED_GN_PGx_DTH          LED_GN_PGx_DTH // PWM channel rising edge dead time register
  #define LED_GN_PGx_DTL          LED_GN_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP54_PGx_OVRENH)
    #define LED_GN_PGx_OVRENH       TP54_PGx_OVRENH // PWM channel IO config register override high control bit
    #define LED_GN_PGx_PENH         TP54_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP54_PGx_OVRENL)
    #define LED_GN_PGx_OVRENL       TP54_PGx_OVRENL // PWM channel IO config register override low control bit
    #define LED_GN_PGx_PENL         TP54_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define LED_GN_PGxUPDREQ        TP54_PGxUPDREQ // PWM channel register update request 
  #define LED_GN_PGxTRIGA         TP54_PGxTRIGA // PWM channel ADC trigger A register
  #define LED_GN_PGxTRIGB         TP54_PGxTRIGB // PWM channel ADC trigger B register
  #define LED_GN_PGxTRIGC         TP54_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP54_PWM_IF)
    #define LED_GN_PWM_IF         TP54_PWM_IF  // interrupt flag bit
    #define LED_GN_PWM_IE         TP54_PWM_IE  // interrupt enable bit
    #define LED_GN_PWM_IP         TP54_PWM_IP  // interrupt priority for this analog input
    #define _LED_GN_PWM_Interrupt TP54_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif

// Device Pin #75 is DACOUT
#define DACOUT_TRIS    TP03_TRIS // GPIO direction register bit
#define DACOUT_Write() TP03_Write() // GPIO port latch register bit
#define DACOUT_Read()  TP03_Read() // GPIO port register bit
#define DACOUT_ODC     TP03_ODC // GPIO port open drain configuration register bit
#define DACOUT_CNPU    TP03_CNPU // GPIO port pull-up resistor register bit
#define DACOUT_CNPD    TP03_CNPD // GPIO port pull-down resistor register bit
#define DACOUT_CNEN0   TP03_CNEN0 // GPIO port change notification Enable register bit
#define DACOUT_CNSTAT  TP03_CNSTAT // GPIO port change notification Status register bit
#define DACOUT_CNEN1   TP03_CNEN1 // GPIO port change notification Edge Select Enable register bit
#define DACOUT_CNF     TP03_CNF // GPIO port change notification flag bit register bit
#if defined TP03_RP
  #define DACOUT_RP       TP03_RP // Number of Remappable Pin
  #define _DACOUT_RPxR    TP03_RPxR // Remappable Pin Register
#endif
#define DACOUT_Set()    TP03_Set() 
#define DACOUT_Clear()   TP03_Clear()
#define DACOUT_Toggle() TP03_Toggle() 
#define DACOUT_IS_ANALOG_INPUT    TP03_IS_ANALOG_INPUT // Pin is/is not analog input 
#if defined TP03_ANSEL
  #define DACOUT_ANSEL          TP03_ANSEL            // analog/digital pin configuration register bit
  #define DACOUT_ADCCORE        TP03_ADCCORE          // index starts from zero, last index indicated shared adC core
  #define DACOUT_IS_SHARED_CORE TP03_IS_SHARED_CORE   // AN input is routed to a dedicated or shared ACD core
  #define DACOUT_ADC_AN_INPUT   TP03_ADC_AN_INPUT     // ANx input pin number
  #define DACOUT_ADCBUF         TP03_ADCBUF  ADCBUF   // ADC buffer register for this input
  #define DACOUT_ADC_ANIE ADIELbits.IE      TP03_ADC_ANIE ADIELbits.IE
  #define DACOUT_ADC_ANEIE ADEIELbits.EIEN  TP03_ADC_ANEIE ADEIELbits.EIEN
  #define DACOUT_ADC_IF         TP03_ADC_IF           // interrupt flag bit
  #define DACOUT_ADC_IE         TP03_ADC_IE           // interrupt enable bit
  #define DACOUT_ADC_IP         TP03_ADC_IP           // interrupt priority for this analog input
  #define DACOUT_ADC_RDY        TP03_ADC_RDY          // ADC buffer ready bit
  #define _DACOUT_ADC_Interrupt TP03_ADC_Interrupt   
  #define DACOUT_INIT_ANALOG    TP03_INIT_ANALOG      // initialization macro for analog input
#endif
#define DACOUT_InitAsOutput()   TP03_InitAsOutput()             // initialization macro for digital output
#define DACOUT_InitAsInput()    TP03_InitAsInput()              // initialization macro for digital input
#if defined (TP03_PGx_CHANNEL)
  #define DACOUT_PGx_CHANNEL      TP03_PGx_CHANNEL // PWM channel index
  #define DACOUT_PGx_PER          DACOUT_PGx_PER // PWM channel period register
  #define DACOUT_PGx_PHASE        DACOUT_PGx_PHASE // PWM channel phase register
  #define DACOUT_PGx_DC           DACOUT_PGx_DC // PWM channel duty cycle register
  #define DACOUT_PGx_DCA          DACOUT_PGx_DCA // PWM channel duty cycle A register
  #define DACOUT_PGx_DTH          DACOUT_PGx_DTH // PWM channel rising edge dead time register
  #define DACOUT_PGx_DTL          DACOUT_PGx_DTL // PWM channel falling edge dead time register
  #if defined (TP03_PGx_OVRENH)
    #define DACOUT_PGx_OVRENH       TP03_PGx_OVRENH // PWM channel IO config register override high control bit
    #define DACOUT_PGx_PENH         TP03_PGx_PENH   // PWM channel IO config register pin enable high control bit
  #endif
  #if defined (TP03_PGx_OVRENL)
    #define DACOUT_PGx_OVRENL       TP03_PGx_OVRENL // PWM channel IO config register override low control bit
    #define DACOUT_PGx_PENL         TP03_PGx_PENL   // PWM channel IO config register pin enable low control bit
  #endif
  #define DACOUT_PGxUPDREQ        TP03_PGxUPDREQ // PWM channel register update request 
  #define DACOUT_PGxTRIGA         TP03_PGxTRIGA // PWM channel ADC trigger A register
  #define DACOUT_PGxTRIGB         TP03_PGxTRIGB // PWM channel ADC trigger B register
  #define DACOUT_PGxTRIGC         TP03_PGxTRIGC // PWM channel ADC trigger C register
  #if defined (TP03_PWM_IF)
    #define DACOUT_PWM_IF         TP03_PWM_IF  // interrupt flag bit
    #define DACOUT_PWM_IE         TP03_PWM_IE  // interrupt enable bit
    #define DACOUT_PWM_IP         TP03_PWM_IP  // interrupt priority for this analog input
    #define _DACOUT_PWM_Interrupt TP03_PWM_Interrupt  // Interrupt Service Routine name declaration
  #endif
#endif



#endif	/* __DM330029_R20_R20_PINMAP_H__ */
