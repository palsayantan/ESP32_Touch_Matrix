# ESP32_Touch_Matrix
*This utilizes the built-in touch sensors of ESP32*

The ESP32 has 10 capacitive touch GPIOs. These GPIOs can sense variations in anything that holds an electrical charge, like the human skin. So they can detect variations induced when touching the GPIOs with a finger.These pins can be easily integrated into capacitive pads, and replace mechanical buttons. Additionally, the touch pins can also be used as a wake up source when the ESP32 is in deep sleep using interrupts.

Pin mapping of touch pins with GPIO pins is shown below. This pin mapping is for ESP32 Devkit DOIT.  But you can check the pinout image of other types of ESP32 development boards online. Devkit 30 pin version supports  9 touch pins out of total 10 touch pins available on ESP32 WROOM chip. T1 is not available on this Devkit DOIT board.

![alt text](http://www.andreadrian.de/ESP_Schachzwerg/38pin%20ESP32%20pinout.jpg)

- Touch0 >> GPIO4
- Touch1 >>  Not available on Devkit 30 pin version but available on Devkit 36 pin version 
- Touch2 >> GPIO2
- Touch3 >> GPIO15
- Touch4 >> GPIO13
- Touch5 >> GPIO12
- Touch6 >> GPIO14
- Touch7 >> GPIO27
- Touch8 >> GPIO33
- Touch9 >> GPIO32

# Note: 
1. If you're facing an issue with **Touch pin T0 & T1** in your ESP32 breakout board, that might because those pins **(GPIO0 & GPIO2) are used during boot up.** So maybe there are            some pull-down resistors on those pins depending on the on-board auto boot select circuitry, which interrupts the touch functionality. By removing it might solve the              issue.

2. As of now, in the arduino IDE, **touch pin T8(GPIO33) & T9(GPIO32) are swapped.** This means that **GPIO 32 should be referred as T8**, and **GPIO33 should be referred as T9** in the code. If you don’t have this issue, please ignore this note.

[Follow me on Instagram](https://www.instagram.com/electropoint4u/)
