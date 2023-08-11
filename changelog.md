# dspic33ck-power-pwm-complementary, release v1.1.0

### Release Highlights

Version 1.1.0 of this code example is a maintenance cycle release, which is required to keep the source code provided being fully supported by the most recent development tool chain. In this release no functional changes have been made in comparison with the previous version.

### Toolchain Updates

* Changed minimum MPLAB X IDE version to 6.05 and later - [Get latest Version](https://www.microchip.com/mplabx)
* Changed minimum XC16 compiler version to v2.00 - [Get latest Version](https://www.microchip.com/xc16)
* Changed minimum Device File Pack (DFP) version to 1.10.341
* Microchip Code Configurator Update
  * Updated MCC Plug-In version to require v5.3.7 or later
  * Updated mc3 file contents to work with core version 4.85.1 or later

### Features Added\Updated

* Updated gitignore file filtering clutter of MPLAB X IDE 6.05 and later
* Fixed typos in leading comment of main.c
* Removed interrupt register bits, which are not supported by DFP versions v1.5.135 and later
* Removed empty virtual folder 'config' from section Sources in MPLAB X project explorer
* Changed label of PWM Module register set from P33C_PWM_SFRSET_t to P33C_PWM_MODULE_t

&copy; 2023, Microchip Technology Inc.

- - -

# dspic33ck-power-pwm-complementary, release v1.0.0

### Release Highlights

This is the initial release demonstrating the basic configuration of a high-resolution PWM generator of the dsPIC33C family of devices.
This example is part of a series of code examples highlighting specific operating modes and features.

### Features Added\Updated

In this initial version the on-board LED of the dsPIC33CK Digital Power Plug-In Module is toggled with a interval period of 300 ms, when the controller is running at maximum speed of 100 MIPS.
After startup, PWM generator #3 is generating a 200 kHz complementary waveform at the PWM3H/PWM3L outputs. By pressing the on-board push button *USER* on the Digital Power Development Board, the switching frequency is toggled between the initial 200 kHz and 1 MHz.
