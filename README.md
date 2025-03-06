# KASE Micromouse
## 1. MCU Pinout
![pinout](https://github.com/user-attachments/assets/e538b270-8444-4017-91b1-d15f1b60a781)

TIM1 (Advanced-control timer) - motor control PWM control
- PA8 - Clockwise left motor
- PA9 - Counterclockwise left motor
- PA10 - Clockwise right motor
- PA11 - Counterclockwise right motor

TIM2 (General Purpose Timer 32bit) - encoder reading of left motor
- PA15 - Left motor A channel
- PB3 - Left motor B channel

TIM5 (General Purpose Timer 32bit) - encoder reading of right motor
- PA0 - Right motor A channel
- PA1 - Right motor B channel

TIM3 & TIM4 (General Purpose Timer 16bit) - RGB indicator & buzzer PWM control
- PB4 - Red pin
- PB5 - Green pin
- PB6 - Blue pin
- PB7 - Buzzer

I2C Bus - IMU communication (BMI088)
- PB8 - I2C1 SCL
- PB9 - I2C1 SDA

UART Bus - Wireless communication (HC-05 Bluetooth)
- PA2 - USART2 TX
- PA3 - USART2 RX

HSE & LSE Oscillator 
- PH0 & PH1 - HSE (ABM3-8.000MHZ-D2Y-T)
- PC14 & PC15 - LSE (ABS25-32.768KHZ-6-T)

Serial Wire Debug & Programming
- PA13 - SWDIO
- PA14 - SWCLK

Design choice note: I used advanced control TIM1 due to its high feature for motor control. TIM2 & TIM5 is 32bit which good for reading high rate of encoder for both left and right motor. TIM3 & TIM4 is 16bit which is more than enough for RGB indicator and buzzer. 

## 2. HARDWARE DESIGN
### a. IR Sensor (Emitter & Receiver)
Using SFH4550-DW & TEFT4300
- SFH4550-DW have very narrow half angle. Peter Harrison himself tested and the light pattern very good. Spec: Infrared (IR) Emitter 860nm 1.5V 100mA 1000mW/sr @ 100mA 6° Radial
- TEFT4300 used by a lot of winning micromouse and I also saw Peter Harrison used it so im sure it will run. Spec: Phototransistors 925nm Top View Radial, 3mm Dia (T-1) (it actually 875 TO 1000 NM so won't be a problem)
![SFH4550](https://github.com/user-attachments/assets/8ac33904-2551-4c40-a5ef-d7ca29c35c97)

Sensor Pointing Direction
[Insert Picture later]

Schematic
[Insert Picture later]

Reference
Ambient filter using an op amp
Source: MicroMouse Wall Sensor Design with Duncan Louttit - Part 2 | Minos 2024 Robotics Conference 
![image](https://github.com/user-attachments/assets/21e7dcc0-c78a-40fe-9e08-eff08c322017)

IR emitter & transceiver is refererences from IEEE UCLA
![image2-c66befa84519665607fb52e1dea775f7](https://github.com/user-attachments/assets/307224b2-9329-433e-927f-4a9a80cb6e6c)
![image4-fdaa1b565959880bd3d00708fd752c78](https://github.com/user-attachments/assets/86c91278-9ce7-4ce6-abc3-35dd5543a60b)






### b. Power Regulator

