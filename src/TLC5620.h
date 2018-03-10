#ifndef __TLC5620_H__
#define __TLC5620_H__

#include<Arduino.h>

#define DACA 0
#define DACB 1
#define DACC 2
#define DACD 3

#define DAC_REF 0 // 1 * Vref
#define DAC_REFX2 1 // 2 * Vref

class TLC5620 {
private:
	unsigned int PIN_DATA;
	unsigned int PIN_CLK;
        unsigned int PIN_LOAD;
       	unsigned int PIN_LDAC;

public:
	TLC5620(unsigned int DATA, unsigned int CLK, unsigned int LOAD, unsigned int LDAC);
	void initTLC5620();
	void writeTLC5620(int channel, int range, int data);
};

#endif
