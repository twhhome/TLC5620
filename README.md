# TLC5620
This is a driven program for TLC5620 written in Arduino. In the program, I define the TLC5620 class which you can use it.In the class, 
there are there functions, which are TLC5620(DATA, CLK, LOAD, LDAC), initTLC5620() and writeTLC5620(channel, range, data). The first 
function is used to initialize the TLC5620 class, and you have to input the pins of DATA, CLK, LOAD, LDAC. The second function is used 
to initialize the modes of pins. The third function is used to send data toTLC5620, and the first parameter is the channel you want to 
use(DACA, DACB, DACC, DACD), the second parameter is the RNG(DAC_REF, DAC_REFX2), and the third parameter is the data you want to send.
