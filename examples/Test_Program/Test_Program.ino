#include<TLC5620.h>

TLC5620 tlc5620(7, 8, 9, 10);

void setup() {
  // put your setup code here, to run once:
  tlc5620.initTLC5620();
  tlc5620.writeTLC5620(DACA, DAC_REF, 255);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 8; i++)
    tlc5620.writeTLC5620(DACA, DAC_REFX2, i * 32);
}
