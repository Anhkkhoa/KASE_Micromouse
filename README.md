# KASE Micromouse
### MCU Pinout
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
