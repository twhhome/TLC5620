#include "TLC5620.h"

TLC5620::TLC5620(unsigned int DATA, unsigned int CLK, unsigned int LOAD, unsigned int LDAC)
{
	PIN_DATA = DATA;
	PIN_CLK = CLK;
	PIN_LOAD = LOAD;
	PIN_LDAC = LDAC;
}

void TLC5620::initTLC5620()
{
	pinMode(PIN_DATA, OUTPUT);
	pinMode(PIN_CLK, OUTPUT);
	pinMode(PIN_LOAD, OUTPUT);
	pinMode(PIN_LDAC, OUTPUT);
}

void TLC5620::writeTLC5620(int channel, int range, int data)
{
	int MSB;
	int LSB;

	MSB = (channel & 0x03) << 1 | (range & 0x01) << 0;
	LSB = data;

	digitalWrite(PIN_LDAC, HIGH);
	digitalWrite(PIN_LOAD, HIGH);

	shiftOut(PIN_DATA, PIN_CLK, MSBFIRST, MSB);
	shiftOut(PIN_DATA, PIN_CLK, MSBFIRST, LSB);

	digitalWrite(PIN_LOAD, LOW);
	delayMicroseconds(10);
	digitalWrite(PIN_LOAD, HIGH);
	delayMicroseconds(10);
	digitalWrite(PIN_LDAC, LOW);
	delayMicroseconds(10);
	digitalWrite(PIN_LDAC, HIGH);
}
