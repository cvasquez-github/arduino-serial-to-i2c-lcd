# arduino-serial-to-i2c-lcd

[English]
Simple code to receive commands from the serial port and write to an I2C 16x2 LCD display.

This code uses the LiquidCrystal_I2C Library:
https://github.com/johnrickman/LiquidCrystal_I2C

[Español]
Codigo de ejemplo simple para recivir comandos por puerto serial y escribir a una pantalla LCD I2C de 16x2.

Este codigo utiliza la library LiquidCrystal_I2C:
https://github.com/johnrickman/LiquidCrystal_I2C

![alt text](https://raw.githubusercontent.com/cvasquez-github/arduino-serial-to-i2c-lcd/main/arduino-lcd-diagram.png)

| I2C LCD         | Arduino UNO     | Arduino MEGA 2560   |
| :-------------: | :-------------: | :-------------:     |
| GND             | POWER GND       | GND (POWER)         |
| VCC             | POWER 5V        | 5V (POWER)          |
| SDA             | A4              | SDA (COMMUNICATION) |
| SCL             | A5              | SCL (COMMUNICATION) |


| Hardware        | URL             |
| :-------------: | :-------------: |
| Arduino UNO R3  | https://www.mcielectronics.cl/shop/product/arduino-uno-r3-arduino-10230 |
| Arduino MEGA 2560  | https://mcielectronics.cl/shop/product/arduino-mega-2560-r3-arduino-10231/ |
| Arduino 16x2 LCD Display I2C  | https://www.mcielectronics.cl/shop/product/display-lcd-azul-i2c-para-arduino-27806 |
