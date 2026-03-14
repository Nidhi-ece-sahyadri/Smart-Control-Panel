
# STM32 Smart Control Panel – One Week Skill Lab Project

## Overview

This repository contains the work completed during a **1 Week Embedded Systems Skill Lab** using the STM32 Nucleo F401RE Carrier Board. The lab focused on hands-on learning of embedded peripherals, sensor interfacing, and real-time control systems.

The final outcome was a fully integrated embedded project called **Smart Control Panel**, which combines multiple sensors and peripherals into a menu-driven control system similar to real embedded products.

---

# One Week Skill Lab Schedule

## Day 1 – STM32 Fundamentals
Learned:

• STM32 architecture basics  
• STM32CubeMX configuration  
• GPIO programming  
• Digital input/output  
• LED and push button interfacing  

Outcome:
Built foundation in STM32 peripheral configuration.

---

## Day 2 – Output Device Interfacing

Learned:

• RGB LED control  
• Color generation logic  
• Buzzer interfacing  
• Sound pattern generation  

Outcome:
Understanding of actuator control.

---

## Day 3 – Keypad Interfacing

Learned:

• Matrix keypad scanning
• Row-column detection logic
• UART debugging
• User input handling

Outcome:
Implemented menu selection using keypad.

---

## Day 4 – ADC and Analog Sensors

Learned:

• ADC configuration
• Reading rotary sensor values
• Mapping analog values
• Sensor calibration basics

Outcome:
Understanding analog interfacing.

---

## Day 5 – TFT Display Interfacing

Learned:

• SPI communication
• ST7735 TFT display driver
• Font libraries usage
• Text rendering on display

Outcome:
Implemented display UI.

---

## Day 6 – Sensor Integration

Learned:

• Touch sensor interfacing
• Multi sensor monitoring
• Embedded logic design
• Peripheral integration

Outcome:
Built multi-input system.

---

## Day 7 – Final Project Integration

Integrated:

• Keypad
• TFT display
• RGB LED
• Buzzer
• Rotary sensor
• Touch sensor
• Push buttons

Outcome:
Complete embedded control system.

---

# Final Project – Smart Control Panel


## Project Description

Smart Control Panel is a **menu driven embedded system** where the user selects operating modes using a keypad and the TFT display shows the active mode.

The system behaves like a real embedded product UI.

---

# Control Panel Menu

```
==== CONTROL PANEL ====

1 LED CONTROL
2 COLOR MODE
3 SOUND MODE
* SENSOR MODE
```

---

# Features

• Menu navigation using keypad  
• Mode display on TFT  
• RGB LED control  
• Rotary controlled color mode  
• Buzzer sound patterns  
• Touch sensor alerts  
• Sensor monitoring mode  
• UART debug output  

---

# Modes Explained

## Mode 1 – LED CONTROL
User controls RGB LED using directional buttons.

Functions:

UP → Red  
DOWN → Green  
LEFT → Blue  
RIGHT → OFF  

---

## Mode 2 – COLOR MODE

Rotary sensor controls LED color based on ADC value.

Low rotation → Red  
Medium rotation → Green  
High rotation → Blue  

---

## Mode 3 – SOUND MODE

Buttons generate different buzzer tones.

UP → Short beep  
DOWN → Medium beep  
LEFT → Long beep  
RIGHT → Extra long beep  

---

## Mode 4 – SENSOR MODE

Displays sensor values and detects touch input.

Functions:

• ADC rotation monitoring  
• Touch detection alert  
• Buzzer notification  

---

# Hardware Used

• STM32 Nucleo F401RE  
• STM32 Carrier Board  
• ST7735 TFT Display  
• Matrix Keypad  
• RGB LED  
• Buzzer  
• Rotary Sensor  
• Touch Sensor  
• Push Buttons  

---

# Software Used

• STM32CubeIDE  
• STM32CubeMX  
• Embedded C  
• HAL Drivers  
• ST7735 Display Library  

---

# Learning Outcomes

This lab helped in understanding:

• Embedded system design
• Peripheral interfacing
• Real-time control logic
• Sensor integration
• SPI communication
• ADC programming
• UI architecture in embedded systems
• Debugging techniques

---

# Key Skills Developed

Embedded C  
STM32 HAL  
GPIO Programming  
SPI Communication  
ADC Programming  
Sensor Integration  
Embedded UI Design  
System Integration  

---

# Future Improvements

Possible extensions:

• Add menu navigation on TFT
• Add color sensor visualization
• Add EEPROM storage
• Add PWM brightness control
• Add RTOS scheduling

---

# Conclusion

This project demonstrates how multiple embedded peripherals can be integrated into a structured real-world embedded application. The Smart Control Panel simulates the behavior of commercial embedded devices such as home automation panels and industrial control interfaces.

This lab significantly improved practical embedded development skills and system design thinking.

---


Embedded Systems Skill Lab Project – 2026
