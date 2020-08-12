/* ***********************************************************************************************
 * File:        MA330048_P33CK_R30_pinmap.h                                                             
 * Author:      M91406                                                                         
 * Comments:    Hardware abstraction layer device pinout descriptor                                
 * Board ID:    MA330048_P33CK                                                                       
 * Date:        07/30/2019                                                                             
 * Build:       0016                                                                       
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
#ifndef __MA330048_P33CK_R30_PINMAP_H__
#define __MA330048_P33CK_R30_PINMAP_H__

// Include standard header files
#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h> // include standard integer data types
#include <stdbool.h> // include standard boolean data types
#include <stddef.h> // include standard definition data types

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

#define MA330048_PINMAP_VERSION  "R30"

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

// Device Pin #28 is RB0
#define CLKI_TRIS    TRISBbits.TRISB0 // GPIO direction register bit
#define CLKI_Write() LATBbits.LATB0 // GPIO port latch register bit
#define CLKI_Read()  PORTBbits.RB0 // GPIO port register bit
#define CLKI_ODC     ODCBbits.ODCB0 // GPIO port open drain configuration register bit
#define CLKI_CNPU    CNPUBbits.CNPUB0 // GPIO port pull-up resistor register bit
#define CLKI_CNPD    CNPDBbits.CNPDB0 // GPIO port pull-down resistor register bit
#define CLKI_CNEN0   CNEN0Bbits.CNEN0B0 // GPIO port change notification Enable register bit
#define CLKI_CNSTAT  CNSTATBbits.CNSTATB0 // GPIO port change notification Status register bit
#define CLKI_CNEN1   CNEN1Bbits.CNEN1B0 // GPIO port change notification Edge Select Enable register bit
#define CLKI_CNF     CNFBbits.CNFB0 // GPIO port change notification flag bit register bit
#define CLKI_RP      32 // Number of Remappable Pin
#define CLKI_Set()    { asm volatile ("bset _LATB, #0 \n"); }
#define CLKI_Clear() { asm volatile ("bclr _LATB, #0 \n"); }
#define CLKI_Toggle() { asm volatile ("btg  _LATB, #0 \n"); }
#define CLKI_IS_ANALOG_INPUT  1 // Pin is/is not analog input 
#define CLKI_ANSEL   _ANSELB0 // analog/digital pin configuration register bit
#define CLKI_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define CLKI_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define CLKI_ADC_AN_INPUT 5   // ANx input pin number
#define CLKI_ADCBUF  ADCBUF5 // ADC buffer register for this input
#define CLKI_ADC_ANIE ADIELbits.IE5
#define CLKI_ADC_ANEIE ADEIELbits.EIEN5
#define CLKI_ADC_IF   _ADCAN5IF // interrupt flag bit
#define CLKI_ADC_IE   _ADCAN5IE // interrupt enable bit
#define CLKI_ADC_IP   _ADCAN5IP // interrupt priority for this analog input
#define CLKI_ADC_RDY  _AN5RDY // ADC buffer ready bit
#define _CLKI_ADC_Interrupt _ADCAN5Interrupt
#define CLKI_INIT_ANALOG	{CLKI_ANSEL = 1; CLKI_Write() = PINSTATE_HIGH; CLKI_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define CLKI_InitAsOutput()   {CLKI_Write() = PINSTATE_LOW; CLKI_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define CLKI_InitAsInput()    {CLKI_Write() = PINSTATE_HIGH; CLKI_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #8 is RD15
#define DBGLED_TRIS    TRISDbits.TRISD15 // GPIO direction register bit
#define DBGLED_Write() LATDbits.LATD15 // GPIO port latch register bit
#define DBGLED_Read()  PORTDbits.RD15 // GPIO port register bit
#define DBGLED_ODC     ODCDbits.ODCD15 // GPIO port open drain configuration register bit
#define DBGLED_CNPU    CNPUDbits.CNPUD15 // GPIO port pull-up resistor register bit
#define DBGLED_CNPD    CNPDDbits.CNPDD15 // GPIO port pull-down resistor register bit
#define DBGLED_CNEN0   CNEN0Dbits.CNEN0D15 // GPIO port change notification Enable register bit
#define DBGLED_CNSTAT  CNSTATDbits.CNSTATD15 // GPIO port change notification Status register bit
#define DBGLED_CNEN1   CNEN1Dbits.CNEN1D15 // GPIO port change notification Edge Select Enable register bit
#define DBGLED_CNF     CNFDbits.CNFD15 // GPIO port change notification flag bit register bit
#define DBGLED_RP      79 // Number of Remappable Pin
#define DBGLED_Set()    { asm volatile ("bset _LATD, #15 \n"); }
#define DBGLED_Clear() { asm volatile ("bclr _LATD, #15 \n"); }
#define DBGLED_Toggle() { asm volatile ("btg  _LATD, #15 \n"); }
#define DBGLED_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define DBGLED_InitAsOutput()   {DBGLED_Write() = PINSTATE_LOW; DBGLED_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define DBGLED_InitAsInput()    {DBGLED_Write() = PINSTATE_HIGH; DBGLED_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #21 is RD12
#define DBGPIN_TRIS    TRISDbits.TRISD12 // GPIO direction register bit
#define DBGPIN_Write() LATDbits.LATD12 // GPIO port latch register bit
#define DBGPIN_Read()  PORTDbits.RD12 // GPIO port register bit
#define DBGPIN_ODC     ODCDbits.ODCD12 // GPIO port open drain configuration register bit
#define DBGPIN_CNPU    CNPUDbits.CNPUD12 // GPIO port pull-up resistor register bit
#define DBGPIN_CNPD    CNPDDbits.CNPDD12 // GPIO port pull-down resistor register bit
#define DBGPIN_CNEN0   CNEN0Dbits.CNEN0D12 // GPIO port change notification Enable register bit
#define DBGPIN_CNSTAT  CNSTATDbits.CNSTATD12 // GPIO port change notification Status register bit
#define DBGPIN_CNEN1   CNEN1Dbits.CNEN1D12 // GPIO port change notification Edge Select Enable register bit
#define DBGPIN_CNF     CNFDbits.CNFD12 // GPIO port change notification flag bit register bit
#define DBGPIN_RP      76 // Number of Remappable Pin
#define DBGPIN_Set()    { asm volatile ("bset _LATD, #12 \n"); }
#define DBGPIN_Clear()   { asm volatile ("bclr _LATD, #12 \n"); }
#define DBGPIN_Toggle() { asm volatile ("btg  _LATD, #12 \n"); }
#define DBGPIN_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define DBGPIN_InitAsOutput()   {DBGPIN_Write() = PINSTATE_LOW; DBGPIN_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define DBGPIN_InitAsInput()    {DBGPIN_Write() = PINSTATE_HIGH; DBGPIN_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #17 is RA3
#define ECP03_TRIS    TRISAbits.TRISA3 // GPIO direction register bit
#define ECP03_Write() LATAbits.LATA3 // GPIO port latch register bit
#define ECP03_Read()  PORTAbits.RA3 // GPIO port register bit
#define ECP03_ODC     ODCAbits.ODCA3 // GPIO port open drain configuration register bit
#define ECP03_CNPU    CNPUAbits.CNPUA3 // GPIO port pull-up resistor register bit
#define ECP03_CNPD    CNPDAbits.CNPDA3 // GPIO port pull-down resistor register bit
#define ECP03_CNEN0   CNEN0Abits.CNEN0A3 // GPIO port change notification Enable register bit
#define ECP03_CNSTAT  CNSTATAbits.CNSTATA3 // GPIO port change notification Status register bit
#define ECP03_CNEN1   CNEN1Abits.CNEN1A3 // GPIO port change notification Edge Select Enable register bit
#define ECP03_CNF     CNFAbits.CNFA3 // GPIO port change notification flag bit register bit
#define ECP03_Set()    { asm volatile ("bset _LATA, #3 \n"); }
#define ECP03_Clear() { asm volatile ("bclr _LATA, #3 \n"); }
#define ECP03_Toggle() { asm volatile ("btg  _LATA, #3 \n"); }
#define ECP03_IS_ANALOG_INPUT  1 // Pin is/is not analog input 
#define ECP03_ANSEL   _ANSELA3 // analog/digital pin configuration register bit
#define ECP03_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP03_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP03_ADC_AN_INPUT 3   // ANx input pin number
#define ECP03_ADCBUF  ADCBUF3 // ADC buffer register for this input
#define ECP03_ADC_ANIE ADIELbits.IE3
#define ECP03_ADC_ANEIE ADEIELbits.EIEN3
#define ECP03_ADC_IF   _ADCAN3IF // interrupt flag bit
#define ECP03_ADC_IE   _ADCAN3IE // interrupt enable bit
#define ECP03_ADC_IP   _ADCAN3IP // interrupt priority for this analog input
#define ECP03_ADC_RDY  _AN3RDY // ADC buffer ready bit
#define _ECP03_ADC_Interrupt _ADCAN3Interrupt
#define ECP03_INIT_ANALOG	{ECP03_ANSEL = 1; ECP03_Write() = PINSTATE_HIGH; ECP03_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP03_InitAsOutput()   {ECP03_Write() = PINSTATE_LOW; ECP03_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP03_InitAsInput()    {ECP03_Write() = PINSTATE_HIGH; ECP03_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #27 is RC3
#define ECP04_TRIS    TRISCbits.TRISC3 // GPIO direction register bit
#define ECP04_Write() LATCbits.LATC3 // GPIO port latch register bit
#define ECP04_Read()  PORTCbits.RC3 // GPIO port register bit
#define ECP04_ODC     ODCCbits.ODCC3 // GPIO port open drain configuration register bit
#define ECP04_CNPU    CNPUCbits.CNPUC3 // GPIO port pull-up resistor register bit
#define ECP04_CNPD    CNPDCbits.CNPDC3 // GPIO port pull-down resistor register bit
#define ECP04_CNEN0   CNEN0Cbits.CNEN0C3 // GPIO port change notification Enable register bit
#define ECP04_CNSTAT  CNSTATCbits.CNSTATC3 // GPIO port change notification Status register bit
#define ECP04_CNEN1   CNEN1Cbits.CNEN1C3 // GPIO port change notification Edge Select Enable register bit
#define ECP04_CNF     CNFCbits.CNFC3 // GPIO port change notification flag bit register bit
#define ECP04_RP      51 // Number of Remappable Pin
#define ECP04_Set()    { asm volatile ("bset _LATC, #3 \n"); }
#define ECP04_Clear() { asm volatile ("bclr _LATC, #3 \n"); }
#define ECP04_Toggle() { asm volatile ("btg  _LATC, #3 \n"); }
#define ECP04_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP04_ANSEL   _ANSELC3 // analog/digital pin configuration register bit
#define ECP04_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP04_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP04_ADC_AN_INPUT 15   // ANx input pin number
#define ECP04_ADCBUF  ADCBUF15 // ADC buffer register for this input
#define ECP04_ADC_ANIE ADIELbits.IE15
#define ECP04_ADC_ANEIE ADEIELbits.EIEN15
#define ECP04_ADC_IF   _ADCAN15IF // interrupt flag bit
#define ECP04_ADC_IE   _ADCAN15IE // interrupt enable bit
#define ECP04_ADC_IP   _ADCAN15IP // interrupt priority for this analog input
#define ECP04_ADC_RDY  _AN15RDY // ADC buffer ready bit
#define _ECP04_ADC_Interrupt _ADCAN15Interrupt
#define ECP04_INIT_ANALOG	{ECP04_ANSEL = 1; ECP04_Write() = PINSTATE_HIGH; ECP04_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP04_InitAsOutput()   {ECP04_Write() = PINSTATE_LOW; ECP04_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP04_InitAsInput()    {ECP04_Write() = PINSTATE_HIGH; ECP04_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #48 is RB8
#define ECP05_TRIS    TRISBbits.TRISB8 // GPIO direction register bit
#define ECP05_Write() LATBbits.LATB8 // GPIO port latch register bit
#define ECP05_Read()  PORTBbits.RB8 // GPIO port register bit
#define ECP05_ODC     ODCBbits.ODCB8 // GPIO port open drain configuration register bit
#define ECP05_CNPU    CNPUBbits.CNPUB8 // GPIO port pull-up resistor register bit
#define ECP05_CNPD    CNPDBbits.CNPDB8 // GPIO port pull-down resistor register bit
#define ECP05_CNEN0   CNEN0Bbits.CNEN0B8 // GPIO port change notification Enable register bit
#define ECP05_CNSTAT  CNSTATBbits.CNSTATB8 // GPIO port change notification Status register bit
#define ECP05_CNEN1   CNEN1Bbits.CNEN1B8 // GPIO port change notification Edge Select Enable register bit
#define ECP05_CNF     CNFBbits.CNFB8 // GPIO port change notification flag bit register bit
#define ECP05_RP      40 // Number of Remappable Pin
#define ECP05_Set()    { asm volatile ("bset _LATB, #8 \n"); }
#define ECP05_Clear() { asm volatile ("bclr _LATB, #8 \n"); }
#define ECP05_Toggle() { asm volatile ("btg  _LATB, #8 \n"); }
#define ECP05_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP05_ANSEL   _ANSELB8 // analog/digital pin configuration register bit
#define ECP05_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP05_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP05_ADC_AN_INPUT 10   // ANx input pin number
#define ECP05_ADCBUF  ADCBUF10 // ADC buffer register for this input
#define ECP05_ADC_ANIE ADIELbits.IE10
#define ECP05_ADC_ANEIE ADEIELbits.EIEN10
#define ECP05_ADC_IF   _ADCAN10IF // interrupt flag bit
#define ECP05_ADC_IE   _ADCAN10IE // interrupt enable bit
#define ECP05_ADC_IP   _ADCAN10IP // interrupt priority for this analog input
#define ECP05_ADC_RDY  _AN10RDY // ADC buffer ready bit
#define _ECP05_ADC_Interrupt _ADCAN10Interrupt
#define ECP05_INIT_ANALOG	{ECP05_ANSEL = 1; ECP05_Write() = PINSTATE_HIGH; ECP05_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP05_InitAsOutput()   {ECP05_Write() = PINSTATE_LOW; ECP05_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP05_InitAsInput()    {ECP05_Write() = PINSTATE_HIGH; ECP05_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #33 is RB2
#define ECP06_TRIS    TRISBbits.TRISB2 // GPIO direction register bit
#define ECP06_Write() LATBbits.LATB2 // GPIO port latch register bit
#define ECP06_Read()  PORTBbits.RB2 // GPIO port register bit
#define ECP06_ODC     ODCBbits.ODCB2 // GPIO port open drain configuration register bit
#define ECP06_CNPU    CNPUBbits.CNPUB2 // GPIO port pull-up resistor register bit
#define ECP06_CNPD    CNPDBbits.CNPDB2 // GPIO port pull-down resistor register bit
#define ECP06_CNEN0   CNEN0Bbits.CNEN0B2 // GPIO port change notification Enable register bit
#define ECP06_CNSTAT  CNSTATBbits.CNSTATB2 // GPIO port change notification Status register bit
#define ECP06_CNEN1   CNEN1Bbits.CNEN1B2 // GPIO port change notification Edge Select Enable register bit
#define ECP06_CNF     CNFBbits.CNFB2 // GPIO port change notification flag bit register bit
#define ECP06_RP      34 // Number of Remappable Pin
#define ECP06_Set()    { asm volatile ("bset _LATB, #2 \n"); }
#define ECP06_Clear() { asm volatile ("bclr _LATB, #2 \n"); }
#define ECP06_Toggle() { asm volatile ("btg  _LATB, #2 \n"); }
#define ECP06_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP06_ANSEL   _ANSELB2 // analog/digital pin configuration register bit
#define ECP06_ADCCORE 0 // index starts from zero, last index indicated shared adC core
#define ECP06_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP06_ADC_AN_INPUT 0   // ANx input pin number
#define ECP06_ADCBUF  ADCBUF0 // ADC buffer register for this input
#define ECP06_ADC_ANIE ADIEHbits.IE0
#define ECP06_ADC_ANEIE ADEIEHbits.EIEN0
#define ECP06_ADC_IF   _ADCAN0IF // interrupt flag bit
#define ECP06_ADC_IE   _ADCAN0IE // interrupt enable bit
#define ECP06_ADC_IP   _ADCAN0IP // interrupt priority for this analog input
#define ECP06_ADC_RDY  _AN0RDY // ADC buffer ready bit
#define _ECP06_ADC_Interrupt _ADCAN0Interrupt
#define ECP06_INIT_ANALOG	{ECP06_ANSEL = 1; ECP06_Write() = PINSTATE_HIGH; ECP06_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP06_InitAsOutput()   {ECP06_Write() = PINSTATE_LOW; ECP06_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP06_InitAsInput()    {ECP06_Write() = PINSTATE_HIGH; ECP06_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #18 is RA4
#define ECP08_TRIS    TRISAbits.TRISA4 // GPIO direction register bit
#define ECP08_Write() LATAbits.LATA4 // GPIO port latch register bit
#define ECP08_Read()  PORTAbits.RA4 // GPIO port register bit
#define ECP08_ODC     ODCAbits.ODCA4 // GPIO port open drain configuration register bit
#define ECP08_CNPU    CNPUAbits.CNPUA4 // GPIO port pull-up resistor register bit
#define ECP08_CNPD    CNPDAbits.CNPDA4 // GPIO port pull-down resistor register bit
#define ECP08_CNEN0   CNEN0Abits.CNEN0A4 // GPIO port change notification Enable register bit
#define ECP08_CNSTAT  CNSTATAbits.CNSTATA4 // GPIO port change notification Status register bit
#define ECP08_CNEN1   CNEN1Abits.CNEN1A4 // GPIO port change notification Edge Select Enable register bit
#define ECP08_CNF     CNFAbits.CNFA4 // GPIO port change notification flag bit register bit
#define ECP08_Set()    { asm volatile ("bset _LATA, #4 \n"); }
#define ECP08_Clear() { asm volatile ("bclr _LATA, #4 \n"); }
#define ECP08_Toggle() { asm volatile ("btg  _LATA, #4 \n"); }
#define ECP08_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP08_ANSEL   _ANSELA4 // analog/digital pin configuration register bit
#define ECP08_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP08_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP08_ADC_AN_INPUT 4   // ANx input pin number
#define ECP08_ADCBUF  ADCBUF4 // ADC buffer register for this input
#define ECP08_ADC_ANIE ADIELbits.IE4
#define ECP08_ADC_ANEIE ADEIELbits.EIEN4
#define ECP08_ADC_IF   _ADCAN4IF // interrupt flag bit
#define ECP08_ADC_IE   _ADCAN4IE // interrupt enable bit
#define ECP08_ADC_IP   _ADCAN4IP // interrupt priority for this analog input
#define ECP08_ADC_RDY  _AN4RDY // ADC buffer ready bit
#define _ECP08_ADC_Interrupt _ADCAN4Interrupt
#define ECP08_INIT_ANALOG	{ECP08_ANSEL = 1; ECP08_Write() = PINSTATE_HIGH; ECP08_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP08_InitAsOutput()   {ECP08_Write() = PINSTATE_LOW; ECP08_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP08_InitAsInput()    {ECP08_Write() = PINSTATE_HIGH; ECP08_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #24 is RC6
#define ECP09_TRIS    TRISCbits.TRISC6 // GPIO direction register bit
#define ECP09_Write() LATCbits.LATC6 // GPIO port latch register bit
#define ECP09_Read()  PORTCbits.RC6 // GPIO port register bit
#define ECP09_ODC     ODCCbits.ODCC6 // GPIO port open drain configuration register bit
#define ECP09_CNPU    CNPUCbits.CNPUC6 // GPIO port pull-up resistor register bit
#define ECP09_CNPD    CNPDCbits.CNPDC6 // GPIO port pull-down resistor register bit
#define ECP09_CNEN0   CNEN0Cbits.CNEN0C6 // GPIO port change notification Enable register bit
#define ECP09_CNSTAT  CNSTATCbits.CNSTATC6 // GPIO port change notification Status register bit
#define ECP09_CNEN1   CNEN1Cbits.CNEN1C6 // GPIO port change notification Edge Select Enable register bit
#define ECP09_CNF     CNFCbits.CNFC6 // GPIO port change notification flag bit register bit
#define ECP09_RP      54 // Number of Remappable Pin
#define ECP09_Set()    { asm volatile ("bset _LATC, #6 \n"); }
#define ECP09_Clear() { asm volatile ("bclr _LATC, #6 \n"); }
#define ECP09_Toggle() { asm volatile ("btg  _LATC, #6 \n"); }
#define ECP09_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP09_ANSEL   _ANSELC6 // analog/digital pin configuration register bit
#define ECP09_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP09_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP09_ADC_AN_INPUT 17   // ANx input pin number
#define ECP09_ADCBUF  ADCBUF17 // ADC buffer register for this input
#define ECP09_ADC_ANIE ADIEHbits.IE17
#define ECP09_ADC_ANEIE ADEIEHbits.EIEN17
#define ECP09_ADC_IF   _ADCAN17IF // interrupt flag bit
#define ECP09_ADC_IE   _ADCAN17IE // interrupt enable bit
#define ECP09_ADC_IP   _ADCAN17IP // interrupt priority for this analog input
#define ECP09_ADC_RDY  _AN17RDY // ADC buffer ready bit
#define _ECP09_ADC_Interrupt _ADCAN17Interrupt
#define ECP09_INIT_ANALOG	{ECP09_ANSEL = 1; ECP09_Write() = PINSTATE_HIGH; ECP09_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP09_InitAsOutput()   {ECP09_Write() = PINSTATE_LOW; ECP09_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP09_InitAsInput()    {ECP09_Write() = PINSTATE_HIGH; ECP09_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #47 is RB7
#define ECP10_TRIS    TRISBbits.TRISB7 // GPIO direction register bit
#define ECP10_Write() LATBbits.LATB7 // GPIO port latch register bit
#define ECP10_Read()  PORTBbits.RB7 // GPIO port register bit
#define ECP10_ODC     ODCBbits.ODCB7 // GPIO port open drain configuration register bit
#define ECP10_CNPU    CNPUBbits.CNPUB7 // GPIO port pull-up resistor register bit
#define ECP10_CNPD    CNPDBbits.CNPDB7 // GPIO port pull-down resistor register bit
#define ECP10_CNEN0   CNEN0Bbits.CNEN0B7 // GPIO port change notification Enable register bit
#define ECP10_CNSTAT  CNSTATBbits.CNSTATB7 // GPIO port change notification Status register bit
#define ECP10_CNEN1   CNEN1Bbits.CNEN1B7 // GPIO port change notification Edge Select Enable register bit
#define ECP10_CNF     CNFBbits.CNFB7 // GPIO port change notification flag bit register bit
#define ECP10_RP      39 // Number of Remappable Pin
#define ECP10_Set()    { asm volatile ("bset _LATB, #7 \n"); }
#define ECP10_Clear() { asm volatile ("bclr _LATB, #7 \n"); }
#define ECP10_Toggle() { asm volatile ("btg  _LATB, #7 \n"); }
#define ECP10_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP10_ANSEL   _ANSELB7 // analog/digital pin configuration register bit
#define ECP10_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP10_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP10_ADC_AN_INPUT 2   // ANx input pin number
#define ECP10_ADCBUF  ADCBUF2 // ADC buffer register for this input
#define ECP10_ADC_ANIE ADIELbits.IE2
#define ECP10_ADC_ANEIE ADEIELbits.EIEN2
#define ECP10_ADC_IF   _ADCAN2IF // interrupt flag bit
#define ECP10_ADC_IE   _ADCAN2IE // interrupt enable bit
#define ECP10_ADC_IP   _ADCAN2IP // interrupt priority for this analog input
#define ECP10_ADC_RDY  _AN2RDY // ADC buffer ready bit
#define _ECP10_ADC_Interrupt _ADCAN2Interrupt
#define ECP10_INIT_ANALOG	{ECP10_ANSEL = 1; ECP10_Write() = PINSTATE_HIGH; ECP10_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP10_InitAsOutput()   {ECP10_Write() = PINSTATE_LOW; ECP10_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP10_InitAsInput()    {ECP10_Write() = PINSTATE_HIGH; ECP10_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #15 is RA1
#define ECP11_TRIS    TRISAbits.TRISA1 // GPIO direction register bit
#define ECP11_Write() LATAbits.LATA1 // GPIO port latch register bit
#define ECP11_Read()  PORTAbits.RA1 // GPIO port register bit
#define ECP11_ODC     ODCAbits.ODCA1 // GPIO port open drain configuration register bit
#define ECP11_CNPU    CNPUAbits.CNPUA1 // GPIO port pull-up resistor register bit
#define ECP11_CNPD    CNPDAbits.CNPDA1 // GPIO port pull-down resistor register bit
#define ECP11_CNEN0   CNEN0Abits.CNEN0A1 // GPIO port change notification Enable register bit
#define ECP11_CNSTAT  CNSTATAbits.CNSTATA1 // GPIO port change notification Status register bit
#define ECP11_CNEN1   CNEN1Abits.CNEN1A1 // GPIO port change notification Edge Select Enable register bit
#define ECP11_CNF     CNFAbits.CNFA1 // GPIO port change notification flag bit register bit
#define ECP11_Set()    { asm volatile ("bset _LATA, #1 \n"); }
#define ECP11_Clear() { asm volatile ("bclr _LATA, #1 \n"); }
#define ECP11_Toggle() { asm volatile ("btg  _LATA, #1 \n"); }
#define ECP11_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP11_ANSEL   _ANSELA1 // analog/digital pin configuration register bit
#define ECP11_ADCCORE 1 // index starts from zero, last index indicated shared adC core
#define ECP11_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP11_ADC_AN_INPUT 1   // ANx input pin number
#define ECP11_ADCBUF  ADCBUF1 // ADC buffer register for this input
#define ECP11_ADC_ANIE ADIEHbits.IE1
#define ECP11_ADC_ANEIE ADEIEHbits.EIEN1
#define ECP11_ADC_IF   _ADCAN1IF // interrupt flag bit
#define ECP11_ADC_IE   _ADCAN1IE // interrupt enable bit
#define ECP11_ADC_IP   _ADCAN1IP // interrupt priority for this analog input
#define ECP11_ADC_RDY  _AN1RDY // ADC buffer ready bit
#define _ECP11_ADC_Interrupt _ADCAN1Interrupt
#define ECP11_INIT_ANALOG	{ECP11_ANSEL = 1; ECP11_Write() = PINSTATE_HIGH; ECP11_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP11_InitAsOutput()   {ECP11_Write() = PINSTATE_LOW; ECP11_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP11_InitAsInput()    {ECP11_Write() = PINSTATE_HIGH; ECP11_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #14 is RA0
#define ECP12_TRIS    TRISAbits.TRISA0 // GPIO direction register bit
#define ECP12_Write() LATAbits.LATA0 // GPIO port latch register bit
#define ECP12_Read()  PORTAbits.RA0 // GPIO port register bit
#define ECP12_ODC     ODCAbits.ODCA0 // GPIO port open drain configuration register bit
#define ECP12_CNPU    CNPUAbits.CNPUA0 // GPIO port pull-up resistor register bit
#define ECP12_CNPD    CNPDAbits.CNPDA0 // GPIO port pull-down resistor register bit
#define ECP12_CNEN0   CNEN0Abits.CNEN0A0 // GPIO port change notification Enable register bit
#define ECP12_CNSTAT  CNSTATAbits.CNSTATA0 // GPIO port change notification Status register bit
#define ECP12_CNEN1   CNEN1Abits.CNEN1A0 // GPIO port change notification Edge Select Enable register bit
#define ECP12_CNF     CNFAbits.CNFA0 // GPIO port change notification flag bit register bit
#define ECP12_Set()    { asm volatile ("bset _LATA, #0 \n"); }
#define ECP12_Clear() { asm volatile ("bclr _LATA, #0 \n"); }
#define ECP12_Toggle() { asm volatile ("btg  _LATA, #0 \n"); }
#define ECP12_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP12_ANSEL   _ANSELA0 // analog/digital pin configuration register bit
#define ECP12_ADCCORE 0 // index starts from zero, last index indicated shared adC core
#define ECP12_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP12_ADC_AN_INPUT 0   // ANx input pin number
#define ECP12_ADCBUF  ADCBUF0 // ADC buffer register for this input
#define ECP12_ADC_ANIE ADIELbits.IE0
#define ECP12_ADC_ANEIE ADEIELbits.EIEN0
#define ECP12_ADC_IF   _ADCAN0IF // interrupt flag bit
#define ECP12_ADC_IE   _ADCAN0IE // interrupt enable bit
#define ECP12_ADC_IP   _ADCAN0IP // interrupt priority for this analog input
#define ECP12_ADC_RDY  _AN0RDY // ADC buffer ready bit
#define _ECP12_ADC_Interrupt _ADCAN0Interrupt
#define ECP12_INIT_ANALOG	{ECP12_ANSEL = 1; ECP12_Write() = PINSTATE_HIGH; ECP12_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP12_InitAsOutput()   {ECP12_Write() = PINSTATE_LOW; ECP12_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP12_InitAsInput()    {ECP12_Write() = PINSTATE_HIGH; ECP12_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #30 is RD11
#define ECP13_TRIS    TRISDbits.TRISD11 // GPIO direction register bit
#define ECP13_Write() LATDbits.LATD11 // GPIO port latch register bit
#define ECP13_Read()  PORTDbits.RD11 // GPIO port register bit
#define ECP13_ODC     ODCDbits.ODCD11 // GPIO port open drain configuration register bit
#define ECP13_CNPU    CNPUDbits.CNPUD11 // GPIO port pull-up resistor register bit
#define ECP13_CNPD    CNPDDbits.CNPDD11 // GPIO port pull-down resistor register bit
#define ECP13_CNEN0   CNEN0Dbits.CNEN0D11 // GPIO port change notification Enable register bit
#define ECP13_CNSTAT  CNSTATDbits.CNSTATD11 // GPIO port change notification Status register bit
#define ECP13_CNEN1   CNEN1Dbits.CNEN1D11 // GPIO port change notification Edge Select Enable register bit
#define ECP13_CNF     CNFDbits.CNFD11 // GPIO port change notification flag bit register bit
#define ECP13_RP      75 // Number of Remappable Pin
#define ECP13_Set()    { asm volatile ("bset _LATD, #11 \n"); }
#define ECP13_Clear() { asm volatile ("bclr _LATD, #11 \n"); }
#define ECP13_Toggle() { asm volatile ("btg  _LATD, #11 \n"); }
#define ECP13_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP13_ANSEL   _ANSELD11 // analog/digital pin configuration register bit
#define ECP13_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP13_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP13_ADC_AN_INPUT 19   // ANx input pin number
#define ECP13_ADCBUF  ADCBUF19 // ADC buffer register for this input
#define ECP13_ADC_ANIE ADIEHbits.IE19
#define ECP13_ADC_ANEIE ADEIEHbits.EIEN19
#define ECP13_ADC_IF   _ADCAN19IF // interrupt flag bit
#define ECP13_ADC_IE   _ADCAN19IE // interrupt enable bit
#define ECP13_ADC_IP   _ADCAN19IP // interrupt priority for this analog input
#define ECP13_ADC_RDY  _AN19RDY // ADC buffer ready bit
#define _ECP13_ADC_Interrupt _ADCAN19Interrupt
#define ECP13_INIT_ANALOG	{ECP13_ANSEL = 1; ECP13_Write() = PINSTATE_HIGH; ECP13_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP13_InitAsOutput()   {ECP13_Write() = PINSTATE_LOW; ECP13_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP13_InitAsInput()    {ECP13_Write() = PINSTATE_HIGH; ECP13_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #32 is RC7
#define ECP14_TRIS    TRISCbits.TRISC7 // GPIO direction register bit
#define ECP14_Write() LATCbits.LATC7 // GPIO port latch register bit
#define ECP14_Read()  PORTCbits.RC7 // GPIO port register bit
#define ECP14_ODC     ODCCbits.ODCC7 // GPIO port open drain configuration register bit
#define ECP14_CNPU    CNPUCbits.CNPUC7 // GPIO port pull-up resistor register bit
#define ECP14_CNPD    CNPDCbits.CNPDC7 // GPIO port pull-down resistor register bit
#define ECP14_CNEN0   CNEN0Cbits.CNEN0C7 // GPIO port change notification Enable register bit
#define ECP14_CNSTAT  CNSTATCbits.CNSTATC7 // GPIO port change notification Status register bit
#define ECP14_CNEN1   CNEN1Cbits.CNEN1C7 // GPIO port change notification Edge Select Enable register bit
#define ECP14_CNF     CNFCbits.CNFC7 // GPIO port change notification flag bit register bit
#define ECP14_RP      55 // Number of Remappable Pin
#define ECP14_Set()    { asm volatile ("bset _LATC, #7 \n"); }
#define ECP14_Clear() { asm volatile ("bclr _LATC, #7 \n"); }
#define ECP14_Toggle() { asm volatile ("btg  _LATC, #7 \n"); }
#define ECP14_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP14_ANSEL   _ANSELC7 // analog/digital pin configuration register bit
#define ECP14_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP14_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP14_ADC_AN_INPUT 16   // ANx input pin number
#define ECP14_ADCBUF  ADCBUF16 // ADC buffer register for this input
#define ECP14_ADC_ANIE ADIEHbits.IE16
#define ECP14_ADC_ANEIE ADEIEHbits.EIEN16
#define ECP14_ADC_IF   _ADCAN16IF // interrupt flag bit
#define ECP14_ADC_IE   _ADCAN16IE // interrupt enable bit
#define ECP14_ADC_IP   _ADCAN16IP // interrupt priority for this analog input
#define ECP14_ADC_RDY  _AN16RDY // ADC buffer ready bit
#define _ECP14_ADC_Interrupt _ADCAN16Interrupt
#define ECP14_INIT_ANALOG	{ECP14_ANSEL = 1; ECP14_Write() = PINSTATE_HIGH; ECP14_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP14_InitAsOutput()   {ECP14_Write() = PINSTATE_LOW; ECP14_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP14_InitAsInput()    {ECP14_Write() = PINSTATE_HIGH; ECP14_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #31 is RD10
#define ECP15_TRIS    TRISDbits.TRISD10 // GPIO direction register bit
#define ECP15_Write() LATDbits.LATD10 // GPIO port latch register bit
#define ECP15_Read()  PORTDbits.RD10 // GPIO port register bit
#define ECP15_ODC     ODCDbits.ODCD10 // GPIO port open drain configuration register bit
#define ECP15_CNPU    CNPUDbits.CNPUD10 // GPIO port pull-up resistor register bit
#define ECP15_CNPD    CNPDDbits.CNPDD10 // GPIO port pull-down resistor register bit
#define ECP15_CNEN0   CNEN0Dbits.CNEN0D10 // GPIO port change notification Enable register bit
#define ECP15_CNSTAT  CNSTATDbits.CNSTATD10 // GPIO port change notification Status register bit
#define ECP15_CNEN1   CNEN1Dbits.CNEN1D10 // GPIO port change notification Edge Select Enable register bit
#define ECP15_CNF     CNFDbits.CNFD10 // GPIO port change notification flag bit register bit
#define ECP15_RP      74 // Number of Remappable Pin
#define ECP15_Set()    { asm volatile ("bset _LATD, #10 \n"); }
#define ECP15_Clear() { asm volatile ("bclr _LATD, #10 \n"); }
#define ECP15_Toggle() { asm volatile ("btg  _LATD, #10 \n"); }
#define ECP15_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP15_ANSEL   _ANSELD10 // analog/digital pin configuration register bit
#define ECP15_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP15_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP15_ADC_AN_INPUT 18   // ANx input pin number
#define ECP15_ADCBUF  ADCBUF18 // ADC buffer register for this input
#define ECP15_ADC_ANIE ADIEHbits.IE18
#define ECP15_ADC_ANEIE ADEIEHbits.EIEN18
#define ECP15_ADC_IF   _ADCAN18IF // interrupt flag bit
#define ECP15_ADC_IE   _ADCAN18IE // interrupt enable bit
#define ECP15_ADC_IP   _ADCAN18IP // interrupt priority for this analog input
#define ECP15_ADC_RDY  _AN18RDY // ADC buffer ready bit
#define _ECP15_ADC_Interrupt _ADCAN18Interrupt
#define ECP15_INIT_ANALOG	{ECP15_ANSEL = 1; ECP15_Write() = PINSTATE_HIGH; ECP15_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP15_InitAsOutput()   {ECP15_Write() = PINSTATE_LOW; ECP15_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP15_InitAsInput()    {ECP15_Write() = PINSTATE_HIGH; ECP15_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #13 is RC0
#define ECP16_TRIS    TRISCbits.TRISC0 // GPIO direction register bit
#define ECP16_Write() LATCbits.LATC0 // GPIO port latch register bit
#define ECP16_Read()  PORTCbits.RC0 // GPIO port register bit
#define ECP16_ODC     ODCCbits.ODCC0 // GPIO port open drain configuration register bit
#define ECP16_CNPU    CNPUCbits.CNPUC0 // GPIO port pull-up resistor register bit
#define ECP16_CNPD    CNPDCbits.CNPDC0 // GPIO port pull-down resistor register bit
#define ECP16_CNEN0   CNEN0Cbits.CNEN0C0 // GPIO port change notification Enable register bit
#define ECP16_CNSTAT  CNSTATCbits.CNSTATC0 // GPIO port change notification Status register bit
#define ECP16_CNEN1   CNEN1Cbits.CNEN1C0 // GPIO port change notification Edge Select Enable register bit
#define ECP16_CNF     CNFCbits.CNFC0 // GPIO port change notification flag bit register bit
#define ECP16_RP      48 // Number of Remappable Pin
#define ECP16_Set()    { asm volatile ("bset _LATC, #0 \n"); }
#define ECP16_Clear() { asm volatile ("bclr _LATC, #0 \n"); }
#define ECP16_Toggle() { asm volatile ("btg  _LATC, #0 \n"); }
#define ECP16_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP16_ANSEL   _ANSELC0 // analog/digital pin configuration register bit
#define ECP16_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP16_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP16_ADC_AN_INPUT 12   // ANx input pin number
#define ECP16_ADCBUF  ADCBUF12 // ADC buffer register for this input
#define ECP16_ADC_ANIE ADIELbits.IE12
#define ECP16_ADC_ANEIE ADEIELbits.EIEN12
#define ECP16_ADC_IF   _ADCAN12IF // interrupt flag bit
#define ECP16_ADC_IE   _ADCAN12IE // interrupt enable bit
#define ECP16_ADC_IP   _ADCAN12IP // interrupt priority for this analog input
#define ECP16_ADC_RDY  _AN12RDY // ADC buffer ready bit
#define _ECP16_ADC_Interrupt _ADCAN12Interrupt
#define ECP16_INIT_ANALOG	{ECP16_ANSEL = 1; ECP16_Write() = PINSTATE_HIGH; ECP16_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP16_InitAsOutput()   {ECP16_Write() = PINSTATE_LOW; ECP16_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP16_InitAsInput()    {ECP16_Write() = PINSTATE_HIGH; ECP16_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #23 is RC2
#define ECP17_TRIS    TRISCbits.TRISC2 // GPIO direction register bit
#define ECP17_Write() LATCbits.LATC2 // GPIO port latch register bit
#define ECP17_Read()  PORTCbits.RC2 // GPIO port register bit
#define ECP17_ODC     ODCCbits.ODCC2 // GPIO port open drain configuration register bit
#define ECP17_CNPU    CNPUCbits.CNPUC2 // GPIO port pull-up resistor register bit
#define ECP17_CNPD    CNPDCbits.CNPDC2 // GPIO port pull-down resistor register bit
#define ECP17_CNEN0   CNEN0Cbits.CNEN0C2 // GPIO port change notification Enable register bit
#define ECP17_CNSTAT  CNSTATCbits.CNSTATC2 // GPIO port change notification Status register bit
#define ECP17_CNEN1   CNEN1Cbits.CNEN1C2 // GPIO port change notification Edge Select Enable register bit
#define ECP17_CNF     CNFCbits.CNFC2 // GPIO port change notification flag bit register bit
#define ECP17_RP      50 // Number of Remappable Pin
#define ECP17_Set()    { asm volatile ("bset _LATC, #2 \n"); }
#define ECP17_Clear() { asm volatile ("bclr _LATC, #2 \n"); }
#define ECP17_Toggle() { asm volatile ("btg  _LATC, #2 \n"); }
#define ECP17_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP17_ANSEL   _ANSELC2 // analog/digital pin configuration register bit
#define ECP17_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP17_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP17_ADC_AN_INPUT 14   // ANx input pin number
#define ECP17_ADCBUF  ADCBUF14 // ADC buffer register for this input
#define ECP17_ADC_ANIE ADIELbits.IE14
#define ECP17_ADC_ANEIE ADEIELbits.EIEN14
#define ECP17_ADC_IF   _ADCAN14IF // interrupt flag bit
#define ECP17_ADC_IE   _ADCAN14IE // interrupt enable bit
#define ECP17_ADC_IP   _ADCAN14IP // interrupt priority for this analog input
#define ECP17_ADC_RDY  _AN14RDY // ADC buffer ready bit
#define _ECP17_ADC_Interrupt _ADCAN14Interrupt
#define ECP17_INIT_ANALOG	{ECP17_ANSEL = 1; ECP17_Write() = PINSTATE_HIGH; ECP17_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP17_InitAsOutput()   {ECP17_Write() = PINSTATE_LOW; ECP17_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP17_InitAsInput()    {ECP17_Write() = PINSTATE_HIGH; ECP17_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #22 is RC1
#define ECP18_TRIS    TRISCbits.TRISC1 // GPIO direction register bit
#define ECP18_Write() LATCbits.LATC1 // GPIO port latch register bit
#define ECP18_Read()  PORTCbits.RC1 // GPIO port register bit
#define ECP18_ODC     ODCCbits.ODCC1 // GPIO port open drain configuration register bit
#define ECP18_CNPU    CNPUCbits.CNPUC1 // GPIO port pull-up resistor register bit
#define ECP18_CNPD    CNPDCbits.CNPDC1 // GPIO port pull-down resistor register bit
#define ECP18_CNEN0   CNEN0Cbits.CNEN0C1 // GPIO port change notification Enable register bit
#define ECP18_CNSTAT  CNSTATCbits.CNSTATC1 // GPIO port change notification Status register bit
#define ECP18_CNEN1   CNEN1Cbits.CNEN1C1 // GPIO port change notification Edge Select Enable register bit
#define ECP18_CNF     CNFCbits.CNFC1 // GPIO port change notification flag bit register bit
#define ECP18_RP      49 // Number of Remappable Pin
#define ECP18_Set()    { asm volatile ("bset _LATC, #1 \n"); }
#define ECP18_Clear() { asm volatile ("bclr _LATC, #1 \n"); }
#define ECP18_Toggle() { asm volatile ("btg  _LATC, #1 \n"); }
#define ECP18_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP18_ANSEL   _ANSELC1 // analog/digital pin configuration register bit
#define ECP18_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP18_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP18_ADC_AN_INPUT 13   // ANx input pin number
#define ECP18_ADCBUF  ADCBUF13 // ADC buffer register for this input
#define ECP18_ADC_ANIE ADIELbits.IE13
#define ECP18_ADC_ANEIE ADEIELbits.EIEN13
#define ECP18_ADC_IF   _ADCAN13IF // interrupt flag bit
#define ECP18_ADC_IE   _ADCAN13IE // interrupt enable bit
#define ECP18_ADC_IP   _ADCAN13IP // interrupt priority for this analog input
#define ECP18_ADC_RDY  _AN13RDY // ADC buffer ready bit
#define _ECP18_ADC_Interrupt _ADCAN13Interrupt
#define ECP18_INIT_ANALOG	{ECP18_ANSEL = 1; ECP18_Write() = PINSTATE_HIGH; ECP18_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP18_InitAsOutput()   {ECP18_Write() = PINSTATE_LOW; ECP18_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP18_InitAsInput()    {ECP18_Write() = PINSTATE_HIGH; ECP18_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #16 is RA2
#define ECP19_TRIS    TRISAbits.TRISA2 // GPIO direction register bit
#define ECP19_Write() LATAbits.LATA2 // GPIO port latch register bit
#define ECP19_Read()  PORTAbits.RA2 // GPIO port register bit
#define ECP19_ODC     ODCAbits.ODCA2 // GPIO port open drain configuration register bit
#define ECP19_CNPU    CNPUAbits.CNPUA2 // GPIO port pull-up resistor register bit
#define ECP19_CNPD    CNPDAbits.CNPDA2 // GPIO port pull-down resistor register bit
#define ECP19_CNEN0   CNEN0Abits.CNEN0A2 // GPIO port change notification Enable register bit
#define ECP19_CNSTAT  CNSTATAbits.CNSTATA2 // GPIO port change notification Status register bit
#define ECP19_CNEN1   CNEN1Abits.CNEN1A2 // GPIO port change notification Edge Select Enable register bit
#define ECP19_CNF     CNFAbits.CNFA2 // GPIO port change notification flag bit register bit
#define ECP19_Set()    { asm volatile ("bset _LATA, #2 \n"); }
#define ECP19_Clear() { asm volatile ("bclr _LATA, #2 \n"); }
#define ECP19_Toggle() { asm volatile ("btg  _LATA, #2 \n"); }
#define ECP19_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP19_ANSEL   _ANSELA2 // analog/digital pin configuration register bit
#define ECP19_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP19_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP19_ADC_AN_INPUT 9   // ANx input pin number
#define ECP19_ADCBUF  ADCBUF9 // ADC buffer register for this input
#define ECP19_ADC_ANIE ADIELbits.IE9
#define ECP19_ADC_ANEIE ADEIELbits.EIEN9
#define ECP19_ADC_IF   _ADCAN9IF // interrupt flag bit
#define ECP19_ADC_IE   _ADCAN9IE // interrupt enable bit
#define ECP19_ADC_IP   _ADCAN9IP // interrupt priority for this analog input
#define ECP19_ADC_RDY  _AN9RDY // ADC buffer ready bit
#define _ECP19_ADC_Interrupt _ADCAN9Interrupt
#define ECP19_INIT_ANALOG	{ECP19_ANSEL = 1; ECP19_Write() = PINSTATE_HIGH; ECP19_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP19_InitAsOutput()   {ECP19_Write() = PINSTATE_LOW; ECP19_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP19_InitAsInput()    {ECP19_Write() = PINSTATE_HIGH; ECP19_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #29 is RB1
#define ECP20_TRIS    TRISBbits.TRISB1 // GPIO direction register bit
#define ECP20_Write() LATBbits.LATB1 // GPIO port latch register bit
#define ECP20_Read()  PORTBbits.RB1 // GPIO port register bit
#define ECP20_ODC     ODCBbits.ODCB1 // GPIO port open drain configuration register bit
#define ECP20_CNPU    CNPUBbits.CNPUB1 // GPIO port pull-up resistor register bit
#define ECP20_CNPD    CNPDBbits.CNPDB1 // GPIO port pull-down resistor register bit
#define ECP20_CNEN0   CNEN0Bbits.CNEN0B1 // GPIO port change notification Enable register bit
#define ECP20_CNSTAT  CNSTATBbits.CNSTATB1 // GPIO port change notification Status register bit
#define ECP20_CNEN1   CNEN1Bbits.CNEN1B1 // GPIO port change notification Edge Select Enable register bit
#define ECP20_CNF     CNFBbits.CNFB1 // GPIO port change notification flag bit register bit
#define ECP20_RP      33 // Number of Remappable Pin
#define ECP20_Set()    { asm volatile ("bset _LATB, #1 \n"); }
#define ECP20_Clear() { asm volatile ("bclr _LATB, #1 \n"); }
#define ECP20_Toggle() { asm volatile ("btg  _LATB, #1 \n"); }
#define ECP20_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP20_ANSEL   _ANSELB1 // analog/digital pin configuration register bit
#define ECP20_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP20_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP20_ADC_AN_INPUT 6   // ANx input pin number
#define ECP20_ADCBUF  ADCBUF6 // ADC buffer register for this input
#define ECP20_ADC_ANIE ADIELbits.IE6
#define ECP20_ADC_ANEIE ADEIELbits.EIEN6
#define ECP20_ADC_IF   _ADCAN6IF // interrupt flag bit
#define ECP20_ADC_IE   _ADCAN6IE // interrupt enable bit
#define ECP20_ADC_IP   _ADCAN6IP // interrupt priority for this analog input
#define ECP20_ADC_RDY  _AN6RDY // ADC buffer ready bit
#define _ECP20_ADC_Interrupt _ADCAN6Interrupt
#define ECP20_INIT_ANALOG	{ECP20_ANSEL = 1; ECP20_Write() = PINSTATE_HIGH; ECP20_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP20_InitAsOutput()   {ECP20_Write() = PINSTATE_LOW; ECP20_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP20_InitAsInput()    {ECP20_Write() = PINSTATE_HIGH; ECP20_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #49 is RB9
#define ECP23_TRIS    TRISBbits.TRISB9 // GPIO direction register bit
#define ECP23_Write() LATBbits.LATB9 // GPIO port latch register bit
#define ECP23_Read()  PORTBbits.RB9 // GPIO port register bit
#define ECP23_ODC     ODCBbits.ODCB9 // GPIO port open drain configuration register bit
#define ECP23_CNPU    CNPUBbits.CNPUB9 // GPIO port pull-up resistor register bit
#define ECP23_CNPD    CNPDBbits.CNPDB9 // GPIO port pull-down resistor register bit
#define ECP23_CNEN0   CNEN0Bbits.CNEN0B9 // GPIO port change notification Enable register bit
#define ECP23_CNSTAT  CNSTATBbits.CNSTATB9 // GPIO port change notification Status register bit
#define ECP23_CNEN1   CNEN1Bbits.CNEN1B9 // GPIO port change notification Edge Select Enable register bit
#define ECP23_CNF     CNFBbits.CNFB9 // GPIO port change notification flag bit register bit
#define ECP23_RP      41 // Number of Remappable Pin
#define ECP23_Set()    { asm volatile ("bset _LATB, #9 \n"); }
#define ECP23_Clear() { asm volatile ("bclr _LATB, #9 \n"); }
#define ECP23_Toggle() { asm volatile ("btg  _LATB, #9 \n"); }
#define ECP23_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP23_ANSEL   _ANSELB9 // analog/digital pin configuration register bit
#define ECP23_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP23_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP23_ADC_AN_INPUT 11   // ANx input pin number
#define ECP23_ADCBUF  ADCBUF11 // ADC buffer register for this input
#define ECP23_ADC_ANIE ADIELbits.IE11
#define ECP23_ADC_ANEIE ADEIELbits.EIEN11
#define ECP23_ADC_IF   _ADCAN11IF // interrupt flag bit
#define ECP23_ADC_IE   _ADCAN11IE // interrupt enable bit
#define ECP23_ADC_IP   _ADCAN11IP // interrupt priority for this analog input
#define ECP23_ADC_RDY  _AN11RDY // ADC buffer ready bit
#define _ECP23_ADC_Interrupt _ADCAN11Interrupt
#define ECP23_INIT_ANALOG	{ECP23_ANSEL = 1; ECP23_Write() = PINSTATE_HIGH; ECP23_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP23_InitAsOutput()   {ECP23_Write() = PINSTATE_LOW; ECP23_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP23_InitAsInput()    {ECP23_Write() = PINSTATE_HIGH; ECP23_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #36 is RC8
#define ECP24_TRIS    TRISCbits.TRISC8 // GPIO direction register bit
#define ECP24_Write() LATCbits.LATC8 // GPIO port latch register bit
#define ECP24_Read()  PORTCbits.RC8 // GPIO port register bit
#define ECP24_ODC     ODCCbits.ODCC8 // GPIO port open drain configuration register bit
#define ECP24_CNPU    CNPUCbits.CNPUC8 // GPIO port pull-up resistor register bit
#define ECP24_CNPD    CNPDCbits.CNPDC8 // GPIO port pull-down resistor register bit
#define ECP24_CNEN0   CNEN0Cbits.CNEN0C8 // GPIO port change notification Enable register bit
#define ECP24_CNSTAT  CNSTATCbits.CNSTATC8 // GPIO port change notification Status register bit
#define ECP24_CNEN1   CNEN1Cbits.CNEN1C8 // GPIO port change notification Edge Select Enable register bit
#define ECP24_CNF     CNFCbits.CNFC8 // GPIO port change notification flag bit register bit
#define ECP24_RP      56 // Number of Remappable Pin
#define ECP24_Set()    { asm volatile ("bset _LATC, #8 \n"); }
#define ECP24_Clear() { asm volatile ("bclr _LATC, #8 \n"); }
#define ECP24_Toggle() { asm volatile ("btg  _LATC, #8 \n"); }
#define ECP24_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP24_InitAsOutput()   {ECP24_Write() = PINSTATE_LOW; ECP24_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP24_InitAsInput()    {ECP24_Write() = PINSTATE_HIGH; ECP24_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #52 is RC10
#define ECP25_TRIS    TRISCbits.TRISC10 // GPIO direction register bit
#define ECP25_Write() LATCbits.LATC10 // GPIO port latch register bit
#define ECP25_Read()  PORTCbits.RC10 // GPIO port register bit
#define ECP25_ODC     ODCCbits.ODCC10 // GPIO port open drain configuration register bit
#define ECP25_CNPU    CNPUCbits.CNPUC10 // GPIO port pull-up resistor register bit
#define ECP25_CNPD    CNPDCbits.CNPDC10 // GPIO port pull-down resistor register bit
#define ECP25_CNEN0   CNEN0Cbits.CNEN0C10 // GPIO port change notification Enable register bit
#define ECP25_CNSTAT  CNSTATCbits.CNSTATC10 // GPIO port change notification Status register bit
#define ECP25_CNEN1   CNEN1Cbits.CNEN1C10 // GPIO port change notification Edge Select Enable register bit
#define ECP25_CNF     CNFCbits.CNFC10 // GPIO port change notification flag bit register bit
#define ECP25_RP      58 // Number of Remappable Pin
#define ECP25_Set()    { asm volatile ("bset _LATC, #10 \n"); }
#define ECP25_Clear() { asm volatile ("bclr _LATC, #10 \n"); }
#define ECP25_Toggle() { asm volatile ("btg  _LATC, #10 \n"); }
#define ECP25_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP25_InitAsOutput()   {ECP25_Write() = PINSTATE_LOW; ECP25_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP25_InitAsInput()    {ECP25_Write() = PINSTATE_HIGH; ECP25_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP25_PGx_CHANNEL  7 // PWM channel index
#define ECP25_PGx_PER      PG7PER // PWM channel period register
#define ECP25_PGx_PHASE    PG7PHASE // PWM channel phase register
#define ECP25_PGx_DC       PG7DC // PWM channel duty cycle register
#define ECP25_PGx_DCA      PG7DCA// PWM channel duty cycle A register
#define ECP25_PGx_DTH      PG7DTH // PWM channel rising edge dead time register
#define ECP25_PGx_DTL      PG7DTL // PWM channel falling edge dead time register
#define ECP25_PGx_OVRENH   PG7IOCONLbits.OVRENH // PWM channel IO config register override high control bit
#define ECP25_PGx_PENH     PG7IOCONLbits.PENH // PWM channel IO config register pin enable high control bit
#define ECP25_PGxUPDREQ    PG7STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP25_PGxTRIGA     PG7TRIGA // PWM channel ADC trigger A register
#define ECP25_PGxTRIGB     PG7TRIGB // PWM channel ADC trigger A register
#define ECP25_PGxTRIGC     PG7TRIGC // PWM channel ADC trigger A register
#define ECP25_PWM_IF       _PWM7IF // interrupt flag bit
#define ECP25_PWM_IE       _PWM7IE // interrupt enable bit
#define ECP25_PWM_IP       _PWM7IP // interrupt priority for this analog input
#define _ECP25_PWM_Interrupt _PWM7Interrupt // Interrupt Service Routine name declaration

// Device Pin #11 is RD14
#define ECP26_TRIS    TRISDbits.TRISD14 // GPIO direction register bit
#define ECP26_Write() LATDbits.LATD14 // GPIO port latch register bit
#define ECP26_Read()  PORTDbits.RD14 // GPIO port register bit
#define ECP26_ODC     ODCDbits.ODCD14 // GPIO port open drain configuration register bit
#define ECP26_CNPU    CNPUDbits.CNPUD14 // GPIO port pull-up resistor register bit
#define ECP26_CNPD    CNPDDbits.CNPDD14 // GPIO port pull-down resistor register bit
#define ECP26_CNEN0   CNEN0Dbits.CNEN0D14 // GPIO port change notification Enable register bit
#define ECP26_CNSTAT  CNSTATDbits.CNSTATD14 // GPIO port change notification Status register bit
#define ECP26_CNEN1   CNEN1Dbits.CNEN1D14 // GPIO port change notification Edge Select Enable register bit
#define ECP26_CNF     CNFDbits.CNFD14 // GPIO port change notification flag bit register bit
#define ECP26_RP      78 // Number of Remappable Pin
#define ECP26_Set()    { asm volatile ("bset _LATD, #14 \n"); }
#define ECP26_Clear() { asm volatile ("bclr _LATD, #14 \n"); }
#define ECP26_Toggle() { asm volatile ("btg  _LATD, #14 \n"); }
#define ECP26_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP26_InitAsOutput()   {ECP26_Write() = PINSTATE_LOW; ECP26_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP26_InitAsInput()    {ECP26_Write() = PINSTATE_HIGH; ECP26_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #53 is RC11
#define ECP27_TRIS    TRISCbits.TRISC11 // GPIO direction register bit
#define ECP27_Write() LATCbits.LATC11 // GPIO port latch register bit
#define ECP27_Read()  PORTCbits.RC11 // GPIO port register bit
#define ECP27_ODC     ODCCbits.ODCC11 // GPIO port open drain configuration register bit
#define ECP27_CNPU    CNPUCbits.CNPUC11 // GPIO port pull-up resistor register bit
#define ECP27_CNPD    CNPDCbits.CNPDC11 // GPIO port pull-down resistor register bit
#define ECP27_CNEN0   CNEN0Cbits.CNEN0C11 // GPIO port change notification Enable register bit
#define ECP27_CNSTAT  CNSTATCbits.CNSTATC11 // GPIO port change notification Status register bit
#define ECP27_CNEN1   CNEN1Cbits.CNEN1C11 // GPIO port change notification Edge Select Enable register bit
#define ECP27_CNF     CNFCbits.CNFC11 // GPIO port change notification flag bit register bit
#define ECP27_RP      59 // Number of Remappable Pin
#define ECP27_Set()    { asm volatile ("bset _LATC, #11 \n"); }
#define ECP27_Clear() { asm volatile ("bclr _LATC, #11 \n"); }
#define ECP27_Toggle() { asm volatile ("btg  _LATC, #11 \n"); }
#define ECP27_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP27_InitAsOutput()   {ECP27_Write() = PINSTATE_LOW; ECP27_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP27_InitAsInput()    {ECP27_Write() = PINSTATE_HIGH; ECP27_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP27_PGx_CHANNEL  7 // PWM channel index
#define ECP27_PGx_PER      PG7PER // PWM channel period register
#define ECP27_PGx_PHASE    PG7PHASE // PWM channel phase register
#define ECP27_PGx_DC       PG7DC // PWM channel duty cycle register
#define ECP27_PGx_DCA      PG7DCA// PWM channel duty cycle A register
#define ECP27_PGx_DTH      PG7DTH // PWM channel rising edge dead time register
#define ECP27_PGx_DTL      PG7DTL // PWM channel falling edge dead time register
#define ECP27_PGx_OVRENL   PG7IOCONLbits.OVRENL // PWM channel IO config register override low control bit
#define ECP27_PGx_PENL     PG7IOCONLbits.PENL // PWM channel IO config register pin enable low control bit
#define ECP27_PGxUPDREQ    PG7STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP27_PGxTRIGA     PG7TRIGA // PWM channel ADC trigger A register
#define ECP27_PGxTRIGB     PG7TRIGB // PWM channel ADC trigger A register
#define ECP27_PGxTRIGC     PG7TRIGC // PWM channel ADC trigger A register

// Device Pin #38 is RD9
#define ECP28_TRIS    TRISDbits.TRISD9 // GPIO direction register bit
#define ECP28_Write() LATDbits.LATD9 // GPIO port latch register bit
#define ECP28_Read()  PORTDbits.RD9 // GPIO port register bit
#define ECP28_ODC     ODCDbits.ODCD9 // GPIO port open drain configuration register bit
#define ECP28_CNPU    CNPUDbits.CNPUD9 // GPIO port pull-up resistor register bit
#define ECP28_CNPD    CNPDDbits.CNPDD9 // GPIO port pull-down resistor register bit
#define ECP28_CNEN0   CNEN0Dbits.CNEN0D9 // GPIO port change notification Enable register bit
#define ECP28_CNSTAT  CNSTATDbits.CNSTATD9 // GPIO port change notification Status register bit
#define ECP28_CNEN1   CNEN1Dbits.CNEN1D9 // GPIO port change notification Edge Select Enable register bit
#define ECP28_CNF     CNFDbits.CNFD9 // GPIO port change notification flag bit register bit
#define ECP28_RP      73 // Number of Remappable Pin
#define ECP28_Set()    { asm volatile ("bset _LATD, #9 \n"); }
#define ECP28_Clear() { asm volatile ("bclr _LATD, #9 \n"); }
#define ECP28_Toggle() { asm volatile ("btg  _LATD, #9 \n"); }
#define ECP28_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP28_InitAsOutput()   {ECP28_Write() = PINSTATE_LOW; ECP28_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP28_InitAsInput()    {ECP28_Write() = PINSTATE_HIGH; ECP28_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #5 is RC14
#define ECP31_TRIS    TRISCbits.TRISC14 // GPIO direction register bit
#define ECP31_Write() LATCbits.LATC14 // GPIO port latch register bit
#define ECP31_Read()  PORTCbits.RC14 // GPIO port register bit
#define ECP31_ODC     ODCCbits.ODCC14 // GPIO port open drain configuration register bit
#define ECP31_CNPU    CNPUCbits.CNPUC14 // GPIO port pull-up resistor register bit
#define ECP31_CNPD    CNPDCbits.CNPDC14 // GPIO port pull-down resistor register bit
#define ECP31_CNEN0   CNEN0Cbits.CNEN0C14 // GPIO port change notification Enable register bit
#define ECP31_CNSTAT  CNSTATCbits.CNSTATC14 // GPIO port change notification Status register bit
#define ECP31_CNEN1   CNEN1Cbits.CNEN1C14 // GPIO port change notification Edge Select Enable register bit
#define ECP31_CNF     CNFCbits.CNFC14 // GPIO port change notification flag bit register bit
#define ECP31_RP      62 // Number of Remappable Pin
#define ECP31_Set()    { asm volatile ("bset _LATC, #14 \n"); }
#define ECP31_Clear() { asm volatile ("bclr _LATC, #14 \n"); }
#define ECP31_Toggle() { asm volatile ("btg  _LATC, #14 \n"); }
#define ECP31_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP31_InitAsOutput()   {ECP31_Write() = PINSTATE_LOW; ECP31_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP31_InitAsInput()    {ECP31_Write() = PINSTATE_HIGH; ECP31_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP31_PGx_CHANNEL  6 // PWM channel index
#define ECP31_PGx_PER      PG6PER // PWM channel period register
#define ECP31_PGx_PHASE    PG6PHASE // PWM channel phase register
#define ECP31_PGx_DC       PG6DC // PWM channel duty cycle register
#define ECP31_PGx_DCA      PG6DCA// PWM channel duty cycle A register
#define ECP31_PGx_DTH      PG6DTH // PWM channel rising edge dead time register
#define ECP31_PGx_DTL      PG6DTL // PWM channel falling edge dead time register
#define ECP31_PGx_OVRENH   PG6IOCONLbits.OVRENH // PWM channel IO config register override high control bit
#define ECP31_PGx_PENH     PG6IOCONLbits.PENH // PWM channel IO config register pin enable high control bit
#define ECP31_PGxUPDREQ    PG6STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP31_PGxTRIGA     PG6TRIGA // PWM channel ADC trigger A register
#define ECP31_PGxTRIGB     PG6TRIGB // PWM channel ADC trigger A register
#define ECP31_PGxTRIGC     PG6TRIGC // PWM channel ADC trigger A register
#define ECP31_PWM_IF       _PWM6IF // interrupt flag bit
#define ECP31_PWM_IE       _PWM6IE // interrupt enable bit
#define ECP31_PWM_IP       _PWM6IP // interrupt priority for this analog input
#define _ECP31_PWM_Interrupt _PWM6Interrupt // Interrupt Service Routine name declaration

// Device Pin #37 is RC9
#define ECP32_TRIS    TRISCbits.TRISC9 // GPIO direction register bit
#define ECP32_Write() LATCbits.LATC9 // GPIO port latch register bit
#define ECP32_Read()  PORTCbits.RC9 // GPIO port register bit
#define ECP32_ODC     ODCCbits.ODCC9 // GPIO port open drain configuration register bit
#define ECP32_CNPU    CNPUCbits.CNPUC9 // GPIO port pull-up resistor register bit
#define ECP32_CNPD    CNPDCbits.CNPDC9 // GPIO port pull-down resistor register bit
#define ECP32_CNEN0   CNEN0Cbits.CNEN0C9 // GPIO port change notification Enable register bit
#define ECP32_CNSTAT  CNSTATCbits.CNSTATC9 // GPIO port change notification Status register bit
#define ECP32_CNEN1   CNEN1Cbits.CNEN1C9 // GPIO port change notification Edge Select Enable register bit
#define ECP32_CNF     CNFCbits.CNFC9 // GPIO port change notification flag bit register bit
#define ECP32_RP      57 // Number of Remappable Pin
#define ECP32_Set()    { asm volatile ("bset _LATC, #9 \n"); }
#define ECP32_Clear() { asm volatile ("bclr _LATC, #9 \n"); }
#define ECP32_Toggle() { asm volatile ("btg  _LATC, #9 \n"); }
#define ECP32_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP32_InitAsOutput()   {ECP32_Write() = PINSTATE_LOW; ECP32_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP32_InitAsInput()    {ECP32_Write() = PINSTATE_HIGH; ECP32_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #6 is RC15
#define ECP33_TRIS    TRISCbits.TRISC15 // GPIO direction register bit
#define ECP33_Write() LATCbits.LATC15 // GPIO port latch register bit
#define ECP33_Read()  PORTCbits.RC15 // GPIO port register bit
#define ECP33_ODC     ODCCbits.ODCC15 // GPIO port open drain configuration register bit
#define ECP33_CNPU    CNPUCbits.CNPUC15 // GPIO port pull-up resistor register bit
#define ECP33_CNPD    CNPDCbits.CNPDC15 // GPIO port pull-down resistor register bit
#define ECP33_CNEN0   CNEN0Cbits.CNEN0C15 // GPIO port change notification Enable register bit
#define ECP33_CNSTAT  CNSTATCbits.CNSTATC15 // GPIO port change notification Status register bit
#define ECP33_CNEN1   CNEN1Cbits.CNEN1C15 // GPIO port change notification Edge Select Enable register bit
#define ECP33_CNF     CNFCbits.CNFC15 // GPIO port change notification flag bit register bit
#define ECP33_RP      63 // Number of Remappable Pin
#define ECP33_Set()    { asm volatile ("bset _LATC, #15 \n"); }
#define ECP33_Clear() { asm volatile ("bclr _LATC, #15 \n"); }
#define ECP33_Toggle() { asm volatile ("btg  _LATC, #15 \n"); }
#define ECP33_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP33_InitAsOutput()   {ECP33_Write() = PINSTATE_LOW; ECP33_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP33_InitAsInput()    {ECP33_Write() = PINSTATE_HIGH; ECP33_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP33_PGx_CHANNEL  6 // PWM channel index
#define ECP33_PGx_PER      PG6PER // PWM channel period register
#define ECP33_PGx_PHASE    PG6PHASE // PWM channel phase register
#define ECP33_PGx_DC       PG6DC // PWM channel duty cycle register
#define ECP33_PGx_DCA      PG6DCA// PWM channel duty cycle A register
#define ECP33_PGx_DTH      PG6DTH // PWM channel rising edge dead time register
#define ECP33_PGx_DTL      PG6DTL // PWM channel falling edge dead time register
#define ECP33_PGx_OVRENL   PG6IOCONLbits.OVRENL // PWM channel IO config register override low control bit
#define ECP33_PGx_PENL     PG6IOCONLbits.PENL // PWM channel IO config register pin enable low control bit
#define ECP33_PGxUPDREQ    PG6STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP33_PGxTRIGA     PG6TRIGA // PWM channel ADC trigger A register
#define ECP33_PGxTRIGB     PG6TRIGB // PWM channel ADC trigger A register
#define ECP33_PGxTRIGC     PG6TRIGC // PWM channel ADC trigger A register

// Device Pin #44 is RD5
#define ECP34_TRIS    TRISDbits.TRISD5 // GPIO direction register bit
#define ECP34_Write() LATDbits.LATD5 // GPIO port latch register bit
#define ECP34_Read()  PORTDbits.RD5 // GPIO port register bit
#define ECP34_ODC     ODCDbits.ODCD5 // GPIO port open drain configuration register bit
#define ECP34_CNPU    CNPUDbits.CNPUD5 // GPIO port pull-up resistor register bit
#define ECP34_CNPD    CNPDDbits.CNPDD5 // GPIO port pull-down resistor register bit
#define ECP34_CNEN0   CNEN0Dbits.CNEN0D5 // GPIO port change notification Enable register bit
#define ECP34_CNSTAT  CNSTATDbits.CNSTATD5 // GPIO port change notification Status register bit
#define ECP34_CNEN1   CNEN1Dbits.CNEN1D5 // GPIO port change notification Edge Select Enable register bit
#define ECP34_CNF     CNFDbits.CNFD5 // GPIO port change notification flag bit register bit
#define ECP34_RP      69 // Number of Remappable Pin
#define ECP34_Set()    { asm volatile ("bset _LATD, #5 \n"); }
#define ECP34_Clear() { asm volatile ("bclr _LATD, #5 \n"); }
#define ECP34_Toggle() { asm volatile ("btg  _LATD, #5 \n"); }
#define ECP34_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP34_InitAsOutput()   {ECP34_Write() = PINSTATE_LOW; ECP34_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP34_InitAsInput()    {ECP34_Write() = PINSTATE_HIGH; ECP34_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #50 is RC4
#define ECP35_TRIS    TRISCbits.TRISC4 // GPIO direction register bit
#define ECP35_Write() LATCbits.LATC4 // GPIO port latch register bit
#define ECP35_Read()  PORTCbits.RC4 // GPIO port register bit
#define ECP35_ODC     ODCCbits.ODCC4 // GPIO port open drain configuration register bit
#define ECP35_CNPU    CNPUCbits.CNPUC4 // GPIO port pull-up resistor register bit
#define ECP35_CNPD    CNPDCbits.CNPDC4 // GPIO port pull-down resistor register bit
#define ECP35_CNEN0   CNEN0Cbits.CNEN0C4 // GPIO port change notification Enable register bit
#define ECP35_CNSTAT  CNSTATCbits.CNSTATC4 // GPIO port change notification Status register bit
#define ECP35_CNEN1   CNEN1Cbits.CNEN1C4 // GPIO port change notification Edge Select Enable register bit
#define ECP35_CNF     CNFCbits.CNFC4 // GPIO port change notification flag bit register bit
#define ECP35_RP      52 // Number of Remappable Pin
#define ECP35_Set()    { asm volatile ("bset _LATC, #4 \n"); }
#define ECP35_Clear() { asm volatile ("bclr _LATC, #4 \n"); }
#define ECP35_Toggle() { asm volatile ("btg  _LATC, #4 \n"); }
#define ECP35_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP35_InitAsOutput()   {ECP35_Write() = PINSTATE_LOW; ECP35_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP35_InitAsInput()    {ECP35_Write() = PINSTATE_HIGH; ECP35_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP35_PGx_CHANNEL  5 // PWM channel index
#define ECP35_PGx_PER      PG5PER // PWM channel period register
#define ECP35_PGx_PHASE    PG5PHASE // PWM channel phase register
#define ECP35_PGx_DC       PG5DC // PWM channel duty cycle register
#define ECP35_PGx_DCA      PG5DCA// PWM channel duty cycle A register
#define ECP35_PGx_DTH      PG5DTH // PWM channel rising edge dead time register
#define ECP35_PGx_DTL      PG5DTL // PWM channel falling edge dead time register
#define ECP35_PGx_OVRENH   PG5IOCONLbits.OVRENH // PWM channel IO config register override high control bit
#define ECP35_PGx_PENH     PG5IOCONLbits.PENH // PWM channel IO config register pin enable high control bit
#define ECP35_PGxUPDREQ    PG5STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP35_PGxTRIGA     PG5TRIGA // PWM channel ADC trigger A register
#define ECP35_PGxTRIGB     PG5TRIGB // PWM channel ADC trigger A register
#define ECP35_PGxTRIGC     PG5TRIGC // PWM channel ADC trigger A register
#define ECP35_PWM_IF       _PWM5IF // interrupt flag bit
#define ECP35_PWM_IE       _PWM5IE // interrupt enable bit
#define ECP35_PWM_IP       _PWM5IP // interrupt priority for this analog input
#define _ECP35_PWM_Interrupt _PWM5Interrupt // Interrupt Service Routine name declaration

// Device Pin #43 is RD6
#define ECP36_TRIS    TRISDbits.TRISD6 // GPIO direction register bit
#define ECP36_Write() LATDbits.LATD6 // GPIO port latch register bit
#define ECP36_Read()  PORTDbits.RD6 // GPIO port register bit
#define ECP36_ODC     ODCDbits.ODCD6 // GPIO port open drain configuration register bit
#define ECP36_CNPU    CNPUDbits.CNPUD6 // GPIO port pull-up resistor register bit
#define ECP36_CNPD    CNPDDbits.CNPDD6 // GPIO port pull-down resistor register bit
#define ECP36_CNEN0   CNEN0Dbits.CNEN0D6 // GPIO port change notification Enable register bit
#define ECP36_CNSTAT  CNSTATDbits.CNSTATD6 // GPIO port change notification Status register bit
#define ECP36_CNEN1   CNEN1Dbits.CNEN1D6 // GPIO port change notification Edge Select Enable register bit
#define ECP36_CNF     CNFDbits.CNFD6 // GPIO port change notification flag bit register bit
#define ECP36_RP      70 // Number of Remappable Pin
#define ECP36_Set()    { asm volatile ("bset _LATD, #6 \n"); }
#define ECP36_Clear() { asm volatile ("bclr _LATD, #6 \n"); }
#define ECP36_Toggle() { asm volatile ("btg  _LATD, #6 \n"); }
#define ECP36_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP36_InitAsOutput()   {ECP36_Write() = PINSTATE_LOW; ECP36_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP36_InitAsInput()    {ECP36_Write() = PINSTATE_HIGH; ECP36_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #61 is RB10
#define ECP37_TRIS    TRISBbits.TRISB10 // GPIO direction register bit
#define ECP37_Write() LATBbits.LATB10 // GPIO port latch register bit
#define ECP37_Read()  PORTBbits.RB10 // GPIO port register bit
#define ECP37_ODC     ODCBbits.ODCB10 // GPIO port open drain configuration register bit
#define ECP37_CNPU    CNPUBbits.CNPUB10 // GPIO port pull-up resistor register bit
#define ECP37_CNPD    CNPDBbits.CNPDB10 // GPIO port pull-down resistor register bit
#define ECP37_CNEN0   CNEN0Bbits.CNEN0B10 // GPIO port change notification Enable register bit
#define ECP37_CNSTAT  CNSTATBbits.CNSTATB10 // GPIO port change notification Status register bit
#define ECP37_CNEN1   CNEN1Bbits.CNEN1B10 // GPIO port change notification Edge Select Enable register bit
#define ECP37_CNF     CNFBbits.CNFB10 // GPIO port change notification flag bit register bit
#define ECP37_RP      42 // Number of Remappable Pin
#define ECP37_Set()    { asm volatile ("bset _LATB, #10 \n"); }
#define ECP37_Clear() { asm volatile ("bclr _LATB, #10 \n"); }
#define ECP37_Toggle() { asm volatile ("btg  _LATB, #10 \n"); }
#define ECP37_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP37_InitAsOutput()   {ECP37_Write() = PINSTATE_LOW; ECP37_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP37_InitAsInput()    {ECP37_Write() = PINSTATE_HIGH; ECP37_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP37_PGx_CHANNEL  3 // PWM channel index
#define ECP37_PGx_PER      PG3PER // PWM channel period register
#define ECP37_PGx_PHASE    PG3PHASE // PWM channel phase register
#define ECP37_PGx_DC       PG3DC // PWM channel duty cycle register
#define ECP37_PGx_DCA      PG3DCA// PWM channel duty cycle A register
#define ECP37_PGx_DTH      PG3DTH // PWM channel rising edge dead time register
#define ECP37_PGx_DTL      PG3DTL // PWM channel falling edge dead time register
#define ECP37_PGx_OVRENH   PG3IOCONLbits.OVRENH // PWM channel IO config register override high control bit
#define ECP37_PGx_PENH     PG3IOCONLbits.PENH // PWM channel IO config register pin enable high control bit
#define ECP37_PGxUPDREQ    PG3STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP37_PGxTRIGA     PG3TRIGA // PWM channel ADC trigger A register
#define ECP37_PGxTRIGB     PG3TRIGB // PWM channel ADC trigger A register
#define ECP37_PGxTRIGC     PG3TRIGC // PWM channel ADC trigger A register
#define ECP37_PWM_IF       _PWM3IF // interrupt flag bit
#define ECP37_PWM_IE       _PWM3IE // interrupt enable bit
#define ECP37_PWM_IP       _PWM3IP // interrupt priority for this analog input
#define _ECP37_PWM_Interrupt _PWM3Interrupt // Interrupt Service Routine name declaration

// Device Pin #51 is RC5
#define ECP38_TRIS    TRISCbits.TRISC5 // GPIO direction register bit
#define ECP38_Write() LATCbits.LATC5 // GPIO port latch register bit
#define ECP38_Read()  PORTCbits.RC5 // GPIO port register bit
#define ECP38_ODC     ODCCbits.ODCC5 // GPIO port open drain configuration register bit
#define ECP38_CNPU    CNPUCbits.CNPUC5 // GPIO port pull-up resistor register bit
#define ECP38_CNPD    CNPDCbits.CNPDC5 // GPIO port pull-down resistor register bit
#define ECP38_CNEN0   CNEN0Cbits.CNEN0C5 // GPIO port change notification Enable register bit
#define ECP38_CNSTAT  CNSTATCbits.CNSTATC5 // GPIO port change notification Status register bit
#define ECP38_CNEN1   CNEN1Cbits.CNEN1C5 // GPIO port change notification Edge Select Enable register bit
#define ECP38_CNF     CNFCbits.CNFC5 // GPIO port change notification flag bit register bit
#define ECP38_RP      53 // Number of Remappable Pin
#define ECP38_Set()    { asm volatile ("bset _LATC, #5 \n"); }
#define ECP38_Clear() { asm volatile ("bclr _LATC, #5 \n"); }
#define ECP38_Toggle() { asm volatile ("btg  _LATC, #5 \n"); }
#define ECP38_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP38_InitAsOutput()   {ECP38_Write() = PINSTATE_LOW; ECP38_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP38_InitAsInput()    {ECP38_Write() = PINSTATE_HIGH; ECP38_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP38_PGx_CHANNEL  5 // PWM channel index
#define ECP38_PGx_PER      PG5PER // PWM channel period register
#define ECP38_PGx_PHASE    PG5PHASE // PWM channel phase register
#define ECP38_PGx_DC       PG5DC // PWM channel duty cycle register
#define ECP38_PGx_DCA      PG5DCA// PWM channel duty cycle A register
#define ECP38_PGx_DTH      PG5DTH // PWM channel rising edge dead time register
#define ECP38_PGx_DTL      PG5DTL // PWM channel falling edge dead time register
#define ECP38_PGx_OVRENL   PG5IOCONLbits.OVRENL // PWM channel IO config register override low control bit
#define ECP38_PGx_PENL     PG5IOCONLbits.PENL // PWM channel IO config register pin enable low control bit
#define ECP38_PGxUPDREQ    PG5STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP38_PGxTRIGA     PG5TRIGA // PWM channel ADC trigger A register
#define ECP38_PGxTRIGB     PG5TRIGB // PWM channel ADC trigger A register
#define ECP38_PGxTRIGC     PG5TRIGC // PWM channel ADC trigger A register

// Device Pin #58 is RD2
#define ECP39_TRIS    TRISDbits.TRISD2 // GPIO direction register bit
#define ECP39_Write() LATDbits.LATD2 // GPIO port latch register bit
#define ECP39_Read()  PORTDbits.RD2 // GPIO port register bit
#define ECP39_ODC     ODCDbits.ODCD2 // GPIO port open drain configuration register bit
#define ECP39_CNPU    CNPUDbits.CNPUD2 // GPIO port pull-up resistor register bit
#define ECP39_CNPD    CNPDDbits.CNPDD2 // GPIO port pull-down resistor register bit
#define ECP39_CNEN0   CNEN0Dbits.CNEN0D2 // GPIO port change notification Enable register bit
#define ECP39_CNSTAT  CNSTATDbits.CNSTATD2 // GPIO port change notification Status register bit
#define ECP39_CNEN1   CNEN1Dbits.CNEN1D2 // GPIO port change notification Edge Select Enable register bit
#define ECP39_CNF     CNFDbits.CNFD2 // GPIO port change notification flag bit register bit
#define ECP39_RP      66 // Number of Remappable Pin
#define ECP39_Set()    { asm volatile ("bset _LATD, #2 \n"); }
#define ECP39_Clear() { asm volatile ("bclr _LATD, #2 \n"); }
#define ECP39_Toggle() { asm volatile ("btg  _LATD, #2 \n"); }
#define ECP39_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP39_InitAsOutput()   {ECP39_Write() = PINSTATE_LOW; ECP39_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP39_InitAsInput()    {ECP39_Write() = PINSTATE_HIGH; ECP39_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #64 is RB13
#define ECP40_TRIS    TRISBbits.TRISB13 // GPIO direction register bit
#define ECP40_Write() LATBbits.LATB13 // GPIO port latch register bit
#define ECP40_Read()  PORTBbits.RB13 // GPIO port register bit
#define ECP40_ODC     ODCBbits.ODCB13 // GPIO port open drain configuration register bit
#define ECP40_CNPU    CNPUBbits.CNPUB13 // GPIO port pull-up resistor register bit
#define ECP40_CNPD    CNPDBbits.CNPDB13 // GPIO port pull-down resistor register bit
#define ECP40_CNEN0   CNEN0Bbits.CNEN0B13 // GPIO port change notification Enable register bit
#define ECP40_CNSTAT  CNSTATBbits.CNSTATB13 // GPIO port change notification Status register bit
#define ECP40_CNEN1   CNEN1Bbits.CNEN1B13 // GPIO port change notification Edge Select Enable register bit
#define ECP40_CNF     CNFBbits.CNFB13 // GPIO port change notification flag bit register bit
#define ECP40_RP      45 // Number of Remappable Pin
#define ECP40_Set()    { asm volatile ("bset _LATB, #13 \n"); }
#define ECP40_Clear() { asm volatile ("bclr _LATB, #13 \n"); }
#define ECP40_Toggle() { asm volatile ("btg  _LATB, #13 \n"); }
#define ECP40_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP40_InitAsOutput()   {ECP40_Write() = PINSTATE_LOW; ECP40_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP40_InitAsInput()    {ECP40_Write() = PINSTATE_HIGH; ECP40_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP40_PGx_CHANNEL  2 // PWM channel index
#define ECP40_PGx_PER      PG2PER // PWM channel period register
#define ECP40_PGx_PHASE    PG2PHASE // PWM channel phase register
#define ECP40_PGx_DC       PG2DC // PWM channel duty cycle register
#define ECP40_PGx_DCA      PG2DCA// PWM channel duty cycle A register
#define ECP40_PGx_DTH      PG2DTH // PWM channel rising edge dead time register
#define ECP40_PGx_DTL      PG2DTL // PWM channel falling edge dead time register
#define ECP40_PGx_OVRENL   PG2IOCONLbits.OVRENL // PWM channel IO config register override low control bit
#define ECP40_PGx_PENL     PG2IOCONLbits.PENL // PWM channel IO config register pin enable low control bit
#define ECP40_PGxUPDREQ    PG2STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP40_PGxTRIGA     PG2TRIGA // PWM channel ADC trigger A register
#define ECP40_PGxTRIGB     PG2TRIGB // PWM channel ADC trigger A register
#define ECP40_PGxTRIGC     PG2TRIGC // PWM channel ADC trigger A register

// Device Pin #62 is RB11
#define ECP41_TRIS    TRISBbits.TRISB11 // GPIO direction register bit
#define ECP41_Write() LATBbits.LATB11 // GPIO port latch register bit
#define ECP41_Read()  PORTBbits.RB11 // GPIO port register bit
#define ECP41_ODC     ODCBbits.ODCB11 // GPIO port open drain configuration register bit
#define ECP41_CNPU    CNPUBbits.CNPUB11 // GPIO port pull-up resistor register bit
#define ECP41_CNPD    CNPDBbits.CNPDB11 // GPIO port pull-down resistor register bit
#define ECP41_CNEN0   CNEN0Bbits.CNEN0B11 // GPIO port change notification Enable register bit
#define ECP41_CNSTAT  CNSTATBbits.CNSTATB11 // GPIO port change notification Status register bit
#define ECP41_CNEN1   CNEN1Bbits.CNEN1B11 // GPIO port change notification Edge Select Enable register bit
#define ECP41_CNF     CNFBbits.CNFB11 // GPIO port change notification flag bit register bit
#define ECP41_RP      43 // Number of Remappable Pin
#define ECP41_Set()    { asm volatile ("bset _LATB, #11 \n"); }
#define ECP41_Clear() { asm volatile ("bclr _LATB, #11 \n"); }
#define ECP41_Toggle() { asm volatile ("btg  _LATB, #11 \n"); }
#define ECP41_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP41_InitAsOutput()   {ECP41_Write() = PINSTATE_LOW; ECP41_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP41_InitAsInput()    {ECP41_Write() = PINSTATE_HIGH; ECP41_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP41_PGx_CHANNEL  3 // PWM channel index
#define ECP41_PGx_PER      PG3PER // PWM channel period register
#define ECP41_PGx_PHASE    PG3PHASE // PWM channel phase register
#define ECP41_PGx_DC       PG3DC // PWM channel duty cycle register
#define ECP41_PGx_DCA      PG3DCA// PWM channel duty cycle A register
#define ECP41_PGx_DTH      PG3DTH // PWM channel rising edge dead time register
#define ECP41_PGx_DTL      PG3DTL // PWM channel falling edge dead time register
#define ECP41_PGx_OVRENL   PG3IOCONLbits.OVRENL // PWM channel IO config register override low control bit
#define ECP41_PGx_PENL     PG3IOCONLbits.PENL // PWM channel IO config register pin enable low control bit
#define ECP41_PGxUPDREQ    PG3STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP41_PGxTRIGA     PG3TRIGA // PWM channel ADC trigger A register
#define ECP41_PGxTRIGB     PG3TRIGB // PWM channel ADC trigger A register
#define ECP41_PGxTRIGC     PG3TRIGC // PWM channel ADC trigger A register

// Device Pin #63 is RB12
#define ECP42_TRIS    TRISBbits.TRISB12 // GPIO direction register bit
#define ECP42_Write() LATBbits.LATB12 // GPIO port latch register bit
#define ECP42_Read()  PORTBbits.RB12 // GPIO port register bit
#define ECP42_ODC     ODCBbits.ODCB12 // GPIO port open drain configuration register bit
#define ECP42_CNPU    CNPUBbits.CNPUB12 // GPIO port pull-up resistor register bit
#define ECP42_CNPD    CNPDBbits.CNPDB12 // GPIO port pull-down resistor register bit
#define ECP42_CNEN0   CNEN0Bbits.CNEN0B12 // GPIO port change notification Enable register bit
#define ECP42_CNSTAT  CNSTATBbits.CNSTATB12 // GPIO port change notification Status register bit
#define ECP42_CNEN1   CNEN1Bbits.CNEN1B12 // GPIO port change notification Edge Select Enable register bit
#define ECP42_CNF     CNFBbits.CNFB12 // GPIO port change notification flag bit register bit
#define ECP42_RP      44 // Number of Remappable Pin
#define ECP42_Set()    { asm volatile ("bset _LATB, #12 \n"); }
#define ECP42_Clear() { asm volatile ("bclr _LATB, #12 \n"); }
#define ECP42_Toggle() { asm volatile ("btg  _LATB, #12 \n"); }
#define ECP42_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP42_InitAsOutput()   {ECP42_Write() = PINSTATE_LOW; ECP42_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP42_InitAsInput()    {ECP42_Write() = PINSTATE_HIGH; ECP42_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP42_PGx_CHANNEL  2 // PWM channel index
#define ECP42_PGx_PER      PG2PER // PWM channel period register
#define ECP42_PGx_PHASE    PG2PHASE // PWM channel phase register
#define ECP42_PGx_DC       PG2DC // PWM channel duty cycle register
#define ECP42_PGx_DCA      PG2DCA// PWM channel duty cycle A register
#define ECP42_PGx_DTH      PG2DTH // PWM channel rising edge dead time register
#define ECP42_PGx_DTL      PG2DTL // PWM channel falling edge dead time register
#define ECP42_PGx_OVRENH   PG2IOCONLbits.OVRENH // PWM channel IO config register override high control bit
#define ECP42_PGx_PENH     PG2IOCONLbits.PENH // PWM channel IO config register pin enable high control bit
#define ECP42_PGxUPDREQ    PG2STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP42_PGxTRIGA     PG2TRIGA // PWM channel ADC trigger A register
#define ECP42_PGxTRIGB     PG2TRIGB // PWM channel ADC trigger A register
#define ECP42_PGxTRIGC     PG2TRIGC // PWM channel ADC trigger A register
#define ECP42_PWM_IF       _PWM2IF // interrupt flag bit
#define ECP42_PWM_IE       _PWM2IE // interrupt enable bit
#define ECP42_PWM_IP       _PWM2IP // interrupt priority for this analog input
#define _ECP42_PWM_Interrupt _PWM2Interrupt // Interrupt Service Routine name declaration

// Device Pin #59 is RD1
#define ECP43_TRIS    TRISDbits.TRISD1 // GPIO direction register bit
#define ECP43_Write() LATDbits.LATD1 // GPIO port latch register bit
#define ECP43_Read()  PORTDbits.RD1 // GPIO port register bit
#define ECP43_ODC     ODCDbits.ODCD1 // GPIO port open drain configuration register bit
#define ECP43_CNPU    CNPUDbits.CNPUD1 // GPIO port pull-up resistor register bit
#define ECP43_CNPD    CNPDDbits.CNPDD1 // GPIO port pull-down resistor register bit
#define ECP43_CNEN0   CNEN0Dbits.CNEN0D1 // GPIO port change notification Enable register bit
#define ECP43_CNSTAT  CNSTATDbits.CNSTATD1 // GPIO port change notification Status register bit
#define ECP43_CNEN1   CNEN1Dbits.CNEN1D1 // GPIO port change notification Edge Select Enable register bit
#define ECP43_CNF     CNFDbits.CNFD1 // GPIO port change notification flag bit register bit
#define ECP43_RP      65 // Number of Remappable Pin
#define ECP43_Set()    { asm volatile ("bset _LATD, #1 \n"); }
#define ECP43_Clear() { asm volatile ("bclr _LATD, #1 \n"); }
#define ECP43_Toggle() { asm volatile ("btg  _LATD, #1 \n"); }
#define ECP43_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP43_InitAsOutput()   {ECP43_Write() = PINSTATE_LOW; ECP43_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP43_InitAsInput()    {ECP43_Write() = PINSTATE_HIGH; ECP43_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP43_PGx_CHANNEL  4 // PWM channel index
#define ECP43_PGx_PER      PG4PER // PWM channel period register
#define ECP43_PGx_PHASE    PG4PHASE // PWM channel phase register
#define ECP43_PGx_DC       PG4DC // PWM channel duty cycle register
#define ECP43_PGx_DCA      PG4DCA// PWM channel duty cycle A register
#define ECP43_PGx_DTH      PG4DTH // PWM channel rising edge dead time register
#define ECP43_PGx_DTL      PG4DTL // PWM channel falling edge dead time register
#define ECP43_PGx_OVRENH   PG4IOCONLbits.OVRENH // PWM channel IO config register override high control bit
#define ECP43_PGx_PENH     PG4IOCONLbits.PENH // PWM channel IO config register pin enable high control bit
#define ECP43_PGxUPDREQ    PG4STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP43_PGxTRIGA     PG4TRIGA // PWM channel ADC trigger A register
#define ECP43_PGxTRIGB     PG4TRIGB // PWM channel ADC trigger A register
#define ECP43_PGxTRIGC     PG4TRIGC // PWM channel ADC trigger A register
#define ECP43_PWM_IF       _PWM4IF // interrupt flag bit
#define ECP43_PWM_IE       _PWM4IE // interrupt enable bit
#define ECP43_PWM_IP       _PWM4IP // interrupt priority for this analog input
#define _ECP43_PWM_Interrupt _PWM4Interrupt // Interrupt Service Routine name declaration

// Device Pin #60 is RD0
#define ECP44_TRIS    TRISDbits.TRISD0 // GPIO direction register bit
#define ECP44_Write() LATDbits.LATD0 // GPIO port latch register bit
#define ECP44_Read()  PORTDbits.RD0 // GPIO port register bit
#define ECP44_ODC     ODCDbits.ODCD0 // GPIO port open drain configuration register bit
#define ECP44_CNPU    CNPUDbits.CNPUD0 // GPIO port pull-up resistor register bit
#define ECP44_CNPD    CNPDDbits.CNPDD0 // GPIO port pull-down resistor register bit
#define ECP44_CNEN0   CNEN0Dbits.CNEN0D0 // GPIO port change notification Enable register bit
#define ECP44_CNSTAT  CNSTATDbits.CNSTATD0 // GPIO port change notification Status register bit
#define ECP44_CNEN1   CNEN1Dbits.CNEN1D0 // GPIO port change notification Edge Select Enable register bit
#define ECP44_CNF     CNFDbits.CNFD0 // GPIO port change notification flag bit register bit
#define ECP44_RP      64 // Number of Remappable Pin
#define ECP44_Set()    { asm volatile ("bset _LATD, #0 \n"); }
#define ECP44_Clear() { asm volatile ("bclr _LATD, #0 \n"); }
#define ECP44_Toggle() { asm volatile ("btg  _LATD, #0 \n"); }
#define ECP44_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP44_InitAsOutput()   {ECP44_Write() = PINSTATE_LOW; ECP44_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP44_InitAsInput()    {ECP44_Write() = PINSTATE_HIGH; ECP44_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP44_PGx_CHANNEL  4 // PWM channel index
#define ECP44_PGx_PER      PG4PER // PWM channel period register
#define ECP44_PGx_PHASE    PG4PHASE // PWM channel phase register
#define ECP44_PGx_DC       PG4DC // PWM channel duty cycle register
#define ECP44_PGx_DCA      PG4DCA// PWM channel duty cycle A register
#define ECP44_PGx_DTH      PG4DTH // PWM channel rising edge dead time register
#define ECP44_PGx_DTL      PG4DTL // PWM channel falling edge dead time register
#define ECP44_PGx_OVRENL   PG4IOCONLbits.OVRENL // PWM channel IO config register override low control bit
#define ECP44_PGx_PENL     PG4IOCONLbits.PENL // PWM channel IO config register pin enable low control bit
#define ECP44_PGxUPDREQ    PG4STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP44_PGxTRIGA     PG4TRIGA // PWM channel ADC trigger A register
#define ECP44_PGxTRIGB     PG4TRIGB // PWM channel ADC trigger A register
#define ECP44_PGxTRIGC     PG4TRIGC // PWM channel ADC trigger A register

// Device Pin #1 is RB14
#define ECP45_TRIS    TRISBbits.TRISB14 // GPIO direction register bit
#define ECP45_Write() LATBbits.LATB14 // GPIO port latch register bit
#define ECP45_Read()  PORTBbits.RB14 // GPIO port register bit
#define ECP45_ODC     ODCBbits.ODCB14 // GPIO port open drain configuration register bit
#define ECP45_CNPU    CNPUBbits.CNPUB14 // GPIO port pull-up resistor register bit
#define ECP45_CNPD    CNPDBbits.CNPDB14 // GPIO port pull-down resistor register bit
#define ECP45_CNEN0   CNEN0Bbits.CNEN0B14 // GPIO port change notification Enable register bit
#define ECP45_CNSTAT  CNSTATBbits.CNSTATB14 // GPIO port change notification Status register bit
#define ECP45_CNEN1   CNEN1Bbits.CNEN1B14 // GPIO port change notification Edge Select Enable register bit
#define ECP45_CNF     CNFBbits.CNFB14 // GPIO port change notification flag bit register bit
#define ECP45_RP      46 // Number of Remappable Pin
#define ECP45_Set()    { asm volatile ("bset _LATB, #14 \n"); }
#define ECP45_Clear() { asm volatile ("bclr _LATB, #14 \n"); }
#define ECP45_Toggle() { asm volatile ("btg  _LATB, #14 \n"); }
#define ECP45_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP45_InitAsOutput()   {ECP45_Write() = PINSTATE_LOW; ECP45_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP45_InitAsInput()    {ECP45_Write() = PINSTATE_HIGH; ECP45_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP45_PGx_CHANNEL  1 // PWM channel index
#define ECP45_PGx_PER      PG1PER // PWM channel period register
#define ECP45_PGx_PHASE    PG1PHASE // PWM channel phase register
#define ECP45_PGx_DC       PG1DC // PWM channel duty cycle register
#define ECP45_PGx_DCA      PG1DCA// PWM channel duty cycle A register
#define ECP45_PGx_DTH      PG1DTH // PWM channel rising edge dead time register
#define ECP45_PGx_DTL      PG1DTL // PWM channel falling edge dead time register
#define ECP45_PGx_OVRENH   PG1IOCONLbits.OVRENH // PWM channel IO config register override high control bit
#define ECP45_PGx_PENH     PG1IOCONLbits.PENH // PWM channel IO config register pin enable high control bit
#define ECP45_PGxUPDREQ    PG1STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP45_PGxTRIGA     PG1TRIGA // PWM channel ADC trigger A register
#define ECP45_PGxTRIGB     PG1TRIGB // PWM channel ADC trigger A register
#define ECP45_PGxTRIGC     PG1TRIGC // PWM channel ADC trigger A register
#define ECP45_PWM_IF       _PWM1IF // interrupt flag bit
#define ECP45_PWM_IE       _PWM1IE // interrupt enable bit
#define ECP45_PWM_IP       _PWM1IP // interrupt priority for this analog input
#define _ECP45_PWM_Interrupt _PWM1Interrupt // Interrupt Service Routine name declaration

// Device Pin #3 is RC12
#define ECP46_TRIS    TRISCbits.TRISC12 // GPIO direction register bit
#define ECP46_Write() LATCbits.LATC12 // GPIO port latch register bit
#define ECP46_Read()  PORTCbits.RC12 // GPIO port register bit
#define ECP46_ODC     ODCCbits.ODCC12 // GPIO port open drain configuration register bit
#define ECP46_CNPU    CNPUCbits.CNPUC12 // GPIO port pull-up resistor register bit
#define ECP46_CNPD    CNPDCbits.CNPDC12 // GPIO port pull-down resistor register bit
#define ECP46_CNEN0   CNEN0Cbits.CNEN0C12 // GPIO port change notification Enable register bit
#define ECP46_CNSTAT  CNSTATCbits.CNSTATC12 // GPIO port change notification Status register bit
#define ECP46_CNEN1   CNEN1Cbits.CNEN1C12 // GPIO port change notification Edge Select Enable register bit
#define ECP46_CNF     CNFCbits.CNFC12 // GPIO port change notification flag bit register bit
#define ECP46_RP      60 // Number of Remappable Pin
#define ECP46_Set()    { asm volatile ("bset _LATC, #12 \n"); }
#define ECP46_Clear() { asm volatile ("bclr _LATC, #12 \n"); }
#define ECP46_Toggle() { asm volatile ("btg  _LATC, #12 \n"); }
#define ECP46_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP46_InitAsOutput()   {ECP46_Write() = PINSTATE_LOW; ECP46_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP46_InitAsInput()    {ECP46_Write() = PINSTATE_HIGH; ECP46_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP46_PGx_CHANNEL  8 // PWM channel index
#define ECP46_PGx_PER      PG8PER // PWM channel period register
#define ECP46_PGx_PHASE    PG8PHASE // PWM channel phase register
#define ECP46_PGx_DC       PG8DC // PWM channel duty cycle register
#define ECP46_PGx_DCA      PG8DCA// PWM channel duty cycle A register
#define ECP46_PGx_DTH      PG8DTH // PWM channel rising edge dead time register
#define ECP46_PGx_DTL      PG8DTL // PWM channel falling edge dead time register
#define ECP46_PGx_OVRENH   PG8IOCONLbits.OVRENH // PWM channel IO config register override high control bit
#define ECP46_PGx_PENH     PG8IOCONLbits.PENH // PWM channel IO config register pin enable high control bit
#define ECP46_PGxUPDREQ    PG8STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP46_PGxTRIGA     PG8TRIGA // PWM channel ADC trigger A register
#define ECP46_PGxTRIGB     PG8TRIGB // PWM channel ADC trigger A register
#define ECP46_PGxTRIGC     PG8TRIGC // PWM channel ADC trigger A register
#define ECP46_PWM_IF       _PWM8IF // interrupt flag bit
#define ECP46_PWM_IE       _PWM8IE // interrupt enable bit
#define ECP46_PWM_IP       _PWM8IP // interrupt priority for this analog input
#define _ECP46_PWM_Interrupt _PWM8Interrupt // Interrupt Service Routine name declaration

// Device Pin #2 is RB15
#define ECP47_TRIS    TRISBbits.TRISB15 // GPIO direction register bit
#define ECP47_Write() LATBbits.LATB15 // GPIO port latch register bit
#define ECP47_Read()  PORTBbits.RB15 // GPIO port register bit
#define ECP47_ODC     ODCBbits.ODCB15 // GPIO port open drain configuration register bit
#define ECP47_CNPU    CNPUBbits.CNPUB15 // GPIO port pull-up resistor register bit
#define ECP47_CNPD    CNPDBbits.CNPDB15 // GPIO port pull-down resistor register bit
#define ECP47_CNEN0   CNEN0Bbits.CNEN0B15 // GPIO port change notification Enable register bit
#define ECP47_CNSTAT  CNSTATBbits.CNSTATB15 // GPIO port change notification Status register bit
#define ECP47_CNEN1   CNEN1Bbits.CNEN1B15 // GPIO port change notification Edge Select Enable register bit
#define ECP47_CNF     CNFBbits.CNFB15 // GPIO port change notification flag bit register bit
#define ECP47_RP      47 // Number of Remappable Pin
#define ECP47_Set()    { asm volatile ("bset _LATB, #15 \n"); }
#define ECP47_Clear() { asm volatile ("bclr _LATB, #15 \n"); }
#define ECP47_Toggle() { asm volatile ("btg  _LATB, #15 \n"); }
#define ECP47_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP47_InitAsOutput()   {ECP47_Write() = PINSTATE_LOW; ECP47_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP47_InitAsInput()    {ECP47_Write() = PINSTATE_HIGH; ECP47_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP47_PGx_CHANNEL  1 // PWM channel index
#define ECP47_PGx_PER      PG1PER // PWM channel period register
#define ECP47_PGx_PHASE    PG1PHASE // PWM channel phase register
#define ECP47_PGx_DC       PG1DC // PWM channel duty cycle register
#define ECP47_PGx_DCA      PG1DCA// PWM channel duty cycle A register
#define ECP47_PGx_DTH      PG1DTH // PWM channel rising edge dead time register
#define ECP47_PGx_DTL      PG1DTL // PWM channel falling edge dead time register
#define ECP47_PGx_OVRENL   PG1IOCONLbits.OVRENL // PWM channel IO config register override low control bit
#define ECP47_PGx_PENL     PG1IOCONLbits.PENL // PWM channel IO config register pin enable low control bit
#define ECP47_PGxUPDREQ    PG1STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP47_PGxTRIGA     PG1TRIGA // PWM channel ADC trigger A register
#define ECP47_PGxTRIGB     PG1TRIGB // PWM channel ADC trigger A register
#define ECP47_PGxTRIGC     PG1TRIGC // PWM channel ADC trigger A register

// Device Pin #4 is RC13
#define ECP48_TRIS    TRISCbits.TRISC13 // GPIO direction register bit
#define ECP48_Write() LATCbits.LATC13 // GPIO port latch register bit
#define ECP48_Read()  PORTCbits.RC13 // GPIO port register bit
#define ECP48_ODC     ODCCbits.ODCC13 // GPIO port open drain configuration register bit
#define ECP48_CNPU    CNPUCbits.CNPUC13 // GPIO port pull-up resistor register bit
#define ECP48_CNPD    CNPDCbits.CNPDC13 // GPIO port pull-down resistor register bit
#define ECP48_CNEN0   CNEN0Cbits.CNEN0C13 // GPIO port change notification Enable register bit
#define ECP48_CNSTAT  CNSTATCbits.CNSTATC13 // GPIO port change notification Status register bit
#define ECP48_CNEN1   CNEN1Cbits.CNEN1C13 // GPIO port change notification Edge Select Enable register bit
#define ECP48_CNF     CNFCbits.CNFC13 // GPIO port change notification flag bit register bit
#define ECP48_RP      61 // Number of Remappable Pin
#define ECP48_Set()    { asm volatile ("bset _LATC, #13 \n"); }
#define ECP48_Clear() { asm volatile ("bclr _LATC, #13 \n"); }
#define ECP48_Toggle() { asm volatile ("btg  _LATC, #13 \n"); }
#define ECP48_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP48_InitAsOutput()   {ECP48_Write() = PINSTATE_LOW; ECP48_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP48_InitAsInput()    {ECP48_Write() = PINSTATE_HIGH; ECP48_TRIS = PINDIR_INPUT;} // initialization macro for digital input
#define ECP48_PGx_CHANNEL  8 // PWM channel index
#define ECP48_PGx_PER      PG8PER // PWM channel period register
#define ECP48_PGx_PHASE    PG8PHASE // PWM channel phase register
#define ECP48_PGx_DC       PG8DC // PWM channel duty cycle register
#define ECP48_PGx_DCA      PG8DCA// PWM channel duty cycle A register
#define ECP48_PGx_DTH      PG8DTH // PWM channel rising edge dead time register
#define ECP48_PGx_DTL      PG8DTL // PWM channel falling edge dead time register
#define ECP48_PGx_OVRENL   PG8IOCONLbits.OVRENL // PWM channel IO config register override low control bit
#define ECP48_PGx_PENL     PG8IOCONLbits.PENL // PWM channel IO config register pin enable low control bit
#define ECP48_PGxUPDREQ    PG8STATbits.UPDREQ // PWM channel ADC trigger A register
#define ECP48_PGxTRIGA     PG8TRIGA // PWM channel ADC trigger A register
#define ECP48_PGxTRIGB     PG8TRIGB // PWM channel ADC trigger A register
#define ECP48_PGxTRIGC     PG8TRIGC // PWM channel ADC trigger A register

// Device Pin #42 is RD7
#define ECP50_TRIS    TRISDbits.TRISD7 // GPIO direction register bit
#define ECP50_Write() LATDbits.LATD7 // GPIO port latch register bit
#define ECP50_Read()  PORTDbits.RD7 // GPIO port register bit
#define ECP50_ODC     ODCDbits.ODCD7 // GPIO port open drain configuration register bit
#define ECP50_CNPU    CNPUDbits.CNPUD7 // GPIO port pull-up resistor register bit
#define ECP50_CNPD    CNPDDbits.CNPDD7 // GPIO port pull-down resistor register bit
#define ECP50_CNEN0   CNEN0Dbits.CNEN0D7 // GPIO port change notification Enable register bit
#define ECP50_CNSTAT  CNSTATDbits.CNSTATD7 // GPIO port change notification Status register bit
#define ECP50_CNEN1   CNEN1Dbits.CNEN1D7 // GPIO port change notification Edge Select Enable register bit
#define ECP50_CNF     CNFDbits.CNFD7 // GPIO port change notification flag bit register bit
#define ECP50_RP      71 // Number of Remappable Pin
#define ECP50_Set()    { asm volatile ("bset _LATD, #7 \n"); }
#define ECP50_Clear() { asm volatile ("bclr _LATD, #7 \n"); }
#define ECP50_Toggle() { asm volatile ("btg  _LATD, #7 \n"); }
#define ECP50_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP50_InitAsOutput()   {ECP50_Write() = PINSTATE_LOW; ECP50_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP50_InitAsInput()    {ECP50_Write() = PINSTATE_HIGH; ECP50_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #35 is RB4
#define ECP51_TRIS    TRISBbits.TRISB4 // GPIO direction register bit
#define ECP51_Write() LATBbits.LATB4 // GPIO port latch register bit
#define ECP51_Read()  PORTBbits.RB4 // GPIO port register bit
#define ECP51_ODC     ODCBbits.ODCB4 // GPIO port open drain configuration register bit
#define ECP51_CNPU    CNPUBbits.CNPUB4 // GPIO port pull-up resistor register bit
#define ECP51_CNPD    CNPDBbits.CNPDB4 // GPIO port pull-down resistor register bit
#define ECP51_CNEN0   CNEN0Bbits.CNEN0B4 // GPIO port change notification Enable register bit
#define ECP51_CNSTAT  CNSTATBbits.CNSTATB4 // GPIO port change notification Status register bit
#define ECP51_CNEN1   CNEN1Bbits.CNEN1B4 // GPIO port change notification Edge Select Enable register bit
#define ECP51_CNF     CNFBbits.CNFB4 // GPIO port change notification flag bit register bit
#define ECP51_RP      36 // Number of Remappable Pin
#define ECP51_Set()    { asm volatile ("bset _LATB, #4 \n"); }
#define ECP51_Clear() { asm volatile ("bclr _LATB, #4 \n"); }
#define ECP51_Toggle() { asm volatile ("btg  _LATB, #4 \n"); }
#define ECP51_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP51_InitAsOutput()   {ECP51_Write() = PINSTATE_LOW; ECP51_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP51_InitAsInput()    {ECP51_Write() = PINSTATE_HIGH; ECP51_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #39 is RD8
#define ECP52_TRIS    TRISDbits.TRISD8 // GPIO direction register bit
#define ECP52_Write() LATDbits.LATD8 // GPIO port latch register bit
#define ECP52_Read()  PORTDbits.RD8 // GPIO port register bit
#define ECP52_ODC     ODCDbits.ODCD8 // GPIO port open drain configuration register bit
#define ECP52_CNPU    CNPUDbits.CNPUD8 // GPIO port pull-up resistor register bit
#define ECP52_CNPD    CNPDDbits.CNPDD8 // GPIO port pull-down resistor register bit
#define ECP52_CNEN0   CNEN0Dbits.CNEN0D8 // GPIO port change notification Enable register bit
#define ECP52_CNSTAT  CNSTATDbits.CNSTATD8 // GPIO port change notification Status register bit
#define ECP52_CNEN1   CNEN1Dbits.CNEN1D8 // GPIO port change notification Edge Select Enable register bit
#define ECP52_CNF     CNFDbits.CNFD8 // GPIO port change notification flag bit register bit
#define ECP52_RP      72 // Number of Remappable Pin
#define ECP52_Set()    { asm volatile ("bset _LATD, #8 \n"); }
#define ECP52_Clear() { asm volatile ("bclr _LATD, #8 \n"); }
#define ECP52_Toggle() { asm volatile ("btg  _LATD, #8 \n"); }
#define ECP52_IS_ANALOG_INPUT  0 // Pin is/is not analog input 
#define ECP52_InitAsOutput()   {ECP52_Write() = PINSTATE_LOW; ECP52_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP52_InitAsInput()    {ECP52_Write() = PINSTATE_HIGH; ECP52_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #46 is RB6
#define ECP53_TRIS    TRISBbits.TRISB6 // GPIO direction register bit
#define ECP53_Write() LATBbits.LATB6 // GPIO port latch register bit
#define ECP53_Read()  PORTBbits.RB6 // GPIO port register bit
#define ECP53_ODC     ODCBbits.ODCB6 // GPIO port open drain configuration register bit
#define ECP53_CNPU    CNPUBbits.CNPUB6 // GPIO port pull-up resistor register bit
#define ECP53_CNPD    CNPDBbits.CNPDB6 // GPIO port pull-down resistor register bit
#define ECP53_CNEN0   CNEN0Bbits.CNEN0B6 // GPIO port change notification Enable register bit
#define ECP53_CNSTAT  CNSTATBbits.CNSTATB6 // GPIO port change notification Status register bit
#define ECP53_CNEN1   CNEN1Bbits.CNEN1B6 // GPIO port change notification Edge Select Enable register bit
#define ECP53_CNF     CNFBbits.CNFB6 // GPIO port change notification flag bit register bit
#define ECP53_RP      38 // Number of Remappable Pin
#define ECP53_Set()    { asm volatile ("bset _LATB, #6 \n"); }
#define ECP53_Clear() { asm volatile ("bclr _LATB, #6 \n"); }
#define ECP53_Toggle() { asm volatile ("btg  _LATB, #6 \n"); }
#define ECP53_IS_ANALOG_INPUT  false // Pin is/is not analog input 
#define ECP53_InitAsOutput()   {ECP53_Write() = PINSTATE_LOW; ECP53_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP53_InitAsInput()    {ECP53_Write() = PINSTATE_HIGH; ECP53_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #12 is RD13
#define ECP54_TRIS    TRISDbits.TRISD13 // GPIO direction register bit
#define ECP54_Write() LATDbits.LATD13 // GPIO port latch register bit
#define ECP54_Read()  PORTDbits.RD13 // GPIO port register bit
#define ECP54_ODC     ODCDbits.ODCD13 // GPIO port open drain configuration register bit
#define ECP54_CNPU    CNPUDbits.CNPUD13 // GPIO port pull-up resistor register bit
#define ECP54_CNPD    CNPDDbits.CNPDD13 // GPIO port pull-down resistor register bit
#define ECP54_CNEN0   CNEN0Dbits.CNEN0D13 // GPIO port change notification Enable register bit
#define ECP54_CNSTAT  CNSTATDbits.CNSTATD13 // GPIO port change notification Status register bit
#define ECP54_CNEN1   CNEN1Dbits.CNEN1D13 // GPIO port change notification Edge Select Enable register bit
#define ECP54_CNF     CNFDbits.CNFD13 // GPIO port change notification flag bit register bit
#define ECP54_RP      77 // Number of Remappable Pin
#define ECP54_Set()    { asm volatile ("bset _LATD, #13 \n"); }
#define ECP54_Clear() { asm volatile ("bclr _LATD, #13 \n"); }
#define ECP54_Toggle() { asm volatile ("btg  _LATD, #13 \n"); }
#define ECP54_IS_ANALOG_INPUT  false // Pin is/is not analog input 
#define ECP54_InitAsOutput()   {ECP54_Write() = PINSTATE_LOW; ECP54_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP54_InitAsInput()    {ECP54_Write() = PINSTATE_HIGH; ECP54_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #45 is RB5
#define ECP55_TRIS    TRISBbits.TRISB5 // GPIO direction register bit
#define ECP55_Write() LATBbits.LATB5 // GPIO port latch register bit
#define ECP55_Read()  PORTBbits.RB5 // GPIO port register bit
#define ECP55_ODC     ODCBbits.ODCB5 // GPIO port open drain configuration register bit
#define ECP55_CNPU    CNPUBbits.CNPUB5 // GPIO port pull-up resistor register bit
#define ECP55_CNPD    CNPDBbits.CNPDB5 // GPIO port pull-down resistor register bit
#define ECP55_CNEN0   CNEN0Bbits.CNEN0B5 // GPIO port change notification Enable register bit
#define ECP55_CNSTAT  CNSTATBbits.CNSTATB5 // GPIO port change notification Status register bit
#define ECP55_CNEN1   CNEN1Bbits.CNEN1B5 // GPIO port change notification Edge Select Enable register bit
#define ECP55_CNF     CNFBbits.CNFB5 // GPIO port change notification flag bit register bit
#define ECP55_RP      37 // Number of Remappable Pin
#define ECP55_Set()    { asm volatile ("bset _LATB, #5 \n"); }
#define ECP55_Clear() { asm volatile ("bclr _LATB, #5 \n"); }
#define ECP55_Toggle() { asm volatile ("btg  _LATB, #5 \n"); }
#define ECP55_IS_ANALOG_INPUT  false // Pin is/is not analog input 
#define ECP55_InitAsOutput()   {ECP55_Write() = PINSTATE_LOW; ECP55_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP55_InitAsInput()    {ECP55_Write() = PINSTATE_HIGH; ECP55_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #34 is RB3
#define ECP56_TRIS    TRISBbits.TRISB3 // GPIO direction register bit
#define ECP56_Write() LATBbits.LATB3 // GPIO port latch register bit
#define ECP56_Read()  PORTBbits.RB3 // GPIO port register bit
#define ECP56_ODC     ODCBbits.ODCB3 // GPIO port open drain configuration register bit
#define ECP56_CNPU    CNPUBbits.CNPUB3 // GPIO port pull-up resistor register bit
#define ECP56_CNPD    CNPDBbits.CNPDB3 // GPIO port pull-down resistor register bit
#define ECP56_CNEN0   CNEN0Bbits.CNEN0B3 // GPIO port change notification Enable register bit
#define ECP56_CNSTAT  CNSTATBbits.CNSTATB3 // GPIO port change notification Status register bit
#define ECP56_CNEN1   CNEN1Bbits.CNEN1B3 // GPIO port change notification Edge Select Enable register bit
#define ECP56_CNF     CNFBbits.CNFB3 // GPIO port change notification flag bit register bit
#define ECP56_RP      35 // Number of Remappable Pin
#define ECP56_Set()    { asm volatile ("bset _LATB, #3 \n"); }
#define ECP56_Clear() { asm volatile ("bclr _LATB, #3 \n"); }
#define ECP56_Toggle() { asm volatile ("btg  _LATB, #3 \n"); }
#define ECP56_IS_ANALOG_INPUT  true // Pin is/is not analog input 
#define ECP56_ANSEL   _ANSELB3 // analog/digital pin configuration register bit
#define ECP56_ADCCORE 2 // index starts from zero, last index indicated shared adC core
#define ECP56_IS_SHARED_CORE false // AN input is routed to a dedicated or shared ACD core
#define ECP56_ADC_AN_INPUT 8   // ANx input pin number
#define ECP56_ADCBUF  ADCBUF8 // ADC buffer register for this input
#define ECP56_ADC_ANIE ADIELbits.IE8
#define ECP56_ADC_ANEIE ADEIELbits.EIEN8
#define ECP56_ADC_IF   _ADCAN8IF // interrupt flag bit
#define ECP56_ADC_IE   _ADCAN8IE // interrupt enable bit
#define ECP56_ADC_IP   _ADCAN8IP // interrupt priority for this analog input
#define ECP56_ADC_RDY  _AN8RDY // ADC buffer ready bit
#define _ECP56_ADC_Interrupt _ADCAN8Interrupt
#define ECP56_INIT_ANALOG	{ECP56_ANSEL = 1; ECP56_Write() = PINSTATE_HIGH; ECP56_TRIS = PINDIR_INPUT;} // initialization macro for analog input
#define ECP56_InitAsOutput()   {ECP56_Write() = PINSTATE_LOW; ECP56_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define ECP56_InitAsInput()    {ECP56_Write() = PINSTATE_HIGH; ECP56_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #46 is RB6
#define SCL_TRIS    TRISBbits.TRISB6 // GPIO direction register bit
#define SCL_Write() LATBbits.LATB6 // GPIO port latch register bit
#define SCL_Read()  PORTBbits.RB6 // GPIO port register bit
#define SCL_ODC     ODCBbits.ODCB6 // GPIO port open drain configuration register bit
#define SCL_CNPU    CNPUBbits.CNPUB6 // GPIO port pull-up resistor register bit
#define SCL_CNPD    CNPDBbits.CNPDB6 // GPIO port pull-down resistor register bit
#define SCL_CNEN0   CNEN0Bbits.CNEN0B6 // GPIO port change notification Enable register bit
#define SCL_CNSTAT  CNSTATBbits.CNSTATB6 // GPIO port change notification Status register bit
#define SCL_CNEN1   CNEN1Bbits.CNEN1B6 // GPIO port change notification Edge Select Enable register bit
#define SCL_CNF     CNFBbits.CNFB6 // GPIO port change notification flag bit register bit
#define SCL_RP      38 // Number of Remappable Pin
#define SCL_Set()    { asm volatile ("bset _LATB, #6 \n"); }
#define SCL_Clear() { asm volatile ("bclr _LATB, #6 \n"); }
#define SCL_Toggle() { asm volatile ("btg  _LATB, #6 \n"); }
#define SCL_IS_ANALOG_INPUT  false // Pin is/is not analog input 
#define SCL_InitAsOutput()   {SCL_Write() = PINSTATE_LOW; SCL_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define SCL_InitAsInput()    {SCL_Write() = PINSTATE_HIGH; SCL_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #45 is RB5
#define SDA_TRIS    TRISBbits.TRISB5 // GPIO direction register bit
#define SDA_Write() LATBbits.LATB5 // GPIO port latch register bit
#define SDA_Read()  PORTBbits.RB5 // GPIO port register bit
#define SDA_ODC     ODCBbits.ODCB5 // GPIO port open drain configuration register bit
#define SDA_CNPU    CNPUBbits.CNPUB5 // GPIO port pull-up resistor register bit
#define SDA_CNPD    CNPDBbits.CNPDB5 // GPIO port pull-down resistor register bit
#define SDA_CNEN0   CNEN0Bbits.CNEN0B5 // GPIO port change notification Enable register bit
#define SDA_CNSTAT  CNSTATBbits.CNSTATB5 // GPIO port change notification Status register bit
#define SDA_CNEN1   CNEN1Bbits.CNEN1B5 // GPIO port change notification Edge Select Enable register bit
#define SDA_CNF     CNFBbits.CNFB5 // GPIO port change notification flag bit register bit
#define SDA_RP      37 // Number of Remappable Pin
#define SDA_Set()    { asm volatile ("bset _LATB, #5 \n"); }
#define SDA_Clear() { asm volatile ("bclr _LATB, #5 \n"); }
#define SDA_Toggle() { asm volatile ("btg  _LATB, #5 \n"); }
#define SDA_IS_ANALOG_INPUT  false // Pin is/is not analog input 
#define SDA_InitAsOutput()   {SDA_Write() = PINSTATE_LOW; SDA_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define SDA_InitAsInput()    {SDA_Write() = PINSTATE_HIGH; SDA_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #54 is RD4
#define UART_RX_TRIS    TRISDbits.TRISD4 // GPIO direction register bit
#define UART_RX_Write() LATDbits.LATD4 // GPIO port latch register bit
#define UART_RX_Read()  PORTDbits.RD4 // GPIO port register bit
#define UART_RX_ODC     ODCDbits.ODCD4 // GPIO port open drain configuration register bit
#define UART_RX_CNPU    CNPUDbits.CNPUD4 // GPIO port pull-up resistor register bit
#define UART_RX_CNPD    CNPDDbits.CNPDD4 // GPIO port pull-down resistor register bit
#define UART_RX_CNEN0   CNEN0Dbits.CNEN0D4 // GPIO port change notification Enable register bit
#define UART_RX_CNSTAT  CNSTATDbits.CNSTATD4 // GPIO port change notification Status register bit
#define UART_RX_CNEN1   CNEN1Dbits.CNEN1D4 // GPIO port change notification Edge Select Enable register bit
#define UART_RX_CNF     CNFDbits.CNFD4 // GPIO port change notification flag bit register bit
#define UART_RX_RP      68 // Number of Remappable Pin
#define UART_RX_Set()    { asm volatile ("bset _LATD, #4 \n"); }
#define UART_RX_Clear() { asm volatile ("bclr _LATD, #4 \n"); }
#define UART_RX_Toggle() { asm volatile ("btg  _LATD, #4 \n"); }
#define UART_RX_IS_ANALOG_INPUT  false // Pin is/is not analog input 
#define UART_RX_InitAsOutput()   {UART_RX_Write() = PINSTATE_LOW; UART_RX_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define UART_RX_InitAsInput()    {UART_RX_Write() = PINSTATE_HIGH; UART_RX_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #55 is RD3
#define UART_TX_TRIS    TRISDbits.TRISD3 // GPIO direction register bit
#define UART_TX_Write() LATDbits.LATD3 // GPIO port latch register bit
#define UART_TX_Read()  PORTDbits.RD3 // GPIO port register bit
#define UART_TX_ODC     ODCDbits.ODCD3 // GPIO port open drain configuration register bit
#define UART_TX_CNPU    CNPUDbits.CNPUD3 // GPIO port pull-up resistor register bit
#define UART_TX_CNPD    CNPDDbits.CNPDD3 // GPIO port pull-down resistor register bit
#define UART_TX_CNEN0   CNEN0Dbits.CNEN0D3 // GPIO port change notification Enable register bit
#define UART_TX_CNSTAT  CNSTATDbits.CNSTATD3 // GPIO port change notification Status register bit
#define UART_TX_CNEN1   CNEN1Dbits.CNEN1D3 // GPIO port change notification Edge Select Enable register bit
#define UART_TX_CNF     CNFDbits.CNFD3 // GPIO port change notification flag bit register bit
#define UART_TX_RP      67 // Number of Remappable Pin
#define UART_TX_Set()    { asm volatile ("bset _LATD, #3 \n"); }
#define UART_TX_Clear() { asm volatile ("bclr _LATD, #3 \n"); }
#define UART_TX_Toggle() { asm volatile ("btg  _LATD, #3 \n"); }
#define UART_TX_IS_ANALOG_INPUT  false // Pin is/is not analog input 
#define UART_TX_InitAsOutput()   {UART_TX_Write() = PINSTATE_LOW; UART_TX_TRIS = PINDIR_OUTPUT;} // initialization macro for digital output
#define UART_TX_InitAsInput()    {UART_TX_Write() = PINSTATE_HIGH; UART_TX_TRIS = PINDIR_INPUT;} // initialization macro for digital input

// Device Pin #7 is MCLR

// Device Pin #9 is VSS

// Device Pin #10 is VDD

// Device Pin #19 is AVDD

// Device Pin #20 is AVss

// Device Pin #25 is VDD

// Device Pin #26 is VSS

// Device Pin #40 is VSS

// Device Pin #41 is VDD

// Device Pin #56 is VSS

// Device Pin #57 is VDD


#define	RPOR_U1TX	    0b000001  // RPn tied to UART1 Transmit	
#define	RPOR_U1RTS	    0b000010  // RPn tied to UART1 Request-to-Send	
#define	RPOR_U2TX	    0b000011  // RPn tied to UART2 Transmit	
#define	RPOR_U2RTS	    0b000100  // RPn tied to UART2 Request-to-Send	
#define	RPOR_SDO1	    0b000101  // RPn tied to SPI1 Data Output
#define	RPOR_SCK1	    0b000110  // RPn tied to SPI1 Clock Output
#define	RPOR_SS1        0b000111  // RPn tied to SPI1 Slave Select
#define	RPOR_SDO2	    0b001000  // RPn tied to SPI2 Data Output
#define	RPOR_SCK2	    0b001001  // RPn tied to SPI2 Clock Output
#define	RPOR_SS2        0b001010  // RPn tied to SPI2 Slave Select
#define	RPOR_SDO3       0b001011  // RPn tied to SPI3 Data Output
#define	RPOR_SCK3       0b001100  // RPn tied to SPI3 Clock Output
#define	RPOR_SS3        0b001101  // RPn tied to SPI3 Slave Select
#define	RPOR_REFCLKO    0b001110  // RPn tied to Reference Clock Output
#define	RPOR_OCM1       0b001111  // RPn tied to SCCP1 Output	
#define	RPOR_OCM2       0b010000  // RPn tied to SCCP2 Output	
#define	RPOR_OCM3       0b010001  // RPn tied to SCCP3 Output	
#define	RPOR_OCM4       0b010010  // RPn tied to SCCP4 Output	
#define	RPOR_OCM5       0b010011  // RPn tied to SCCP5 Output	
#define	RPOR_OCM6       0b010100  // RPn tied to SCCP6 Output	

#define	RPO_CAN1	    0b010101  // RPn tied to CAN1 Output		
#define	RPO_CMP1	    0b010111  // RPn tied to Comparator 1 Output	
#define	RPO_CMP2	    0b011000  // RPn tied to Comparator 2 Output	
#define	RPO_CMP3	    0b011001  // RPn tied to Comparator 3 Output	
#define	RPO_U3TX	    0b011011  // RPn tied to UART3 Transmit		
#define	RPO_U3RTS	    0b011100  // RPn tied to UART3 Request-to-Send		
#define	RPO_PWM4H	    0b100010  // RPn tied to PWM4H Output		
#define	RPO_PWM4L	    0b100011  // RPn tied to PWM4L Output		
#define	RPO_PWMEA	    0b100100  // RPn tied to PWM Event A Output
#define	RPO_PWMEB	    0b100101  // RPn tied to PWM Event B Output
#define	RPO_QEICMP1	    0b100110  // RPn tied to QEI1 Comparator Output	
#define	RPO_QEICMP2	    0b100111  // RPn tied to QEI2 Comparator Output	
#define	RPO_CLC1OUT	    0b101000  // RPn tied to CLC1 Output		
#define	RPO_CLC2OUT	    0b101001  // RPn tied to CLC2 Output		
#define	RPO_OCM7	    0b101010  // RPn tied to SCCP7 Output		
#define	RPO_OCM8	    0b101011  // RPn tied to SCCP8 Output		
#define	RPO_PWMEC	    0b101100  // RPn tied to PWM Event C Output
#define	RPO_PWMED	    0b101101  // RPn tied to PWM Event D Output
#define	RPO_PTGTRG24	0b101110  // PTG Trigger Output 24			
#define	RPO_PTGTRG25	0b101111  // PTG Trigger Output 25			
#define	RPO_SENT1OUT	0b110000  // RPn tied to SENT1 Output		
#define	RPO_SENT2OUT	0b110001  // RPn tied to SENT2 Output		
#define	RPO_MCCP9A      0b110010  // RPn tied to MCCP9 Output A	
#define	RPO_MCCP9B      0b110011  // RPn tied to MCCP9 Output B	
#define	RPO_MCCP9C      0b110100  // RPn tied to MCCP9 Output C	
#define	RPO_MCCP9D      0b110101  // RPn tied to MCCP9 Output D	
#define	RPO_MCCP9E      0b110110  // RPn tied to MCCP9 Output E	
#define	RPO_MCCP9F      0b110111  // RPn tied to MCCP9 Output F	
#define	RPO_CLC3OUT     0b111011  // RPn tied to CLC4  Output		
#define	RPO_CLC4OUT     0b111100  // RPn tied to CLC4  Output		
#define	RPO_U1DTR       0b111101  // RPn tied to UART1 DTR		
#define	RPO_U2DTR       0b111110  // RPn tied to UART2 DTR		
#define	RPO_U3DTR       0b111111  // RPn tied to UART3 DTR		


#endif	/* __MA330048_P33CK_R30_PINMAP_H__ */
