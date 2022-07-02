# arduino-serial-to-i2c-lcd
Simple code to receive commands from the serial port and write to an I2C 16x2 LCD display.

This code uses the LiquidCrystal_I2C Library:
https://github.com/johnrickman/LiquidCrystal_I2C

Arduino UNO R3:
https://www.mcielectronics.cl/shop/product/arduino-uno-r3-arduino-10230

Arduimo MEGA 2560:
https://mcielectronics.cl/shop/product/arduino-mega-2560-r3-arduino-10231/

16x2 LCD Display I2C for Arduino
https://www.mcielectronics.cl/shop/product/display-lcd-azul-i2c-para-arduino-27806

![alt text](https://raw.githubusercontent.com/cvasquez-github/arduino-serial-to-i2c-lcd/main/arduino-lcd-diagram.png)

| I2C LCD         | Arduino UNO     | Arduino MEGA 2560  |
| :-------------: | :-------------: |
| GND             | POWER GND       | GND (POWER)
| VCC             | POWER 5V        | 5V (POWER)
| SDA             | A4              | SDA (COMMUNICATION)
| SCL             | A5              | SCL (COMMUNICATION)
