
# STM32 Smart Control Panel – One Week Skill Lab Project

## Overview

This repository contains the work completed during a **1 Week Embedded Systems Skill Lab** using the STM32 Nucleo F401RE Carrier Board. The lab focused on hands-on learning of embedded peripherals, sensor interfacing, and real-time control systems.

The final outcome was a fully integrated embedded project called **Smart Control Panel**, which combines multiple sensors and peripherals into a menu-driven control system similar to real embedded products.

---

# One Week Skill Lab Schedule

## 7-Day Embedded Systems Skill Lab Summary

### Day 1 – STM32 Basics & GPIO Programming
Learned STM32 architecture, STM32CubeIDE setup, GPIO configuration, and basic LED interfacing to understand digital input/output control.

### Day 2 – LED and Buzzer Interfacing
Interfaced RGB LED and buzzer, implemented digital output control, and developed basic embedded control logic.

### Day 3 – Polling and Interrupt Concepts
Worked with push buttons using polling method and understood interrupt-based event handling for efficient event detection.

### Day 4 – ADC and Analog Sensors
Configured ADC and interfaced a rotary sensor to read analog values and control RGB LED behavior based on sensor input.

### Day 5 – SPI Communication & TFT Display
Interfaced ST7735 TFT display using SPI protocol and displayed text data from STM32 using display libraries.

### Day 6 – Multi-Peripheral Integration
Integrated keypad, touch sensor, buttons, RGB LED, buzzer, and sensors into a single embedded application.

### Day 7 – Final Project Development
Designed and implemented the **Smart Control Panel**, a menu-driven embedded system integrating all peripherals with multiple operating modes.

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
https://drive.google.com/drive/folders/1nR1mWUle-_6AaA9EN-zCaOUh2EQ1wU6z?usp=sharing

Embedded Systems Skill Lab Project – 2026
