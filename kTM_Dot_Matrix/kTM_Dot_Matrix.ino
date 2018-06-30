#include "LedControl.h"
#include "binary.h"
/*
 DIN connects to pin 7
 CLK connects to pin 5
 CS connects to pin 6 
*/
LedControl lc=LedControl(7,5,6,1);

// delay time between faces
unsigned long delayTime=1000;


byte K[8] = {
  B00000000,
  B01100110,
  B01101100,
  B01111000,
  B01110000,
  B01111000,
  B01101100,
  B01100110
 };
byte M[8] = {
  B00000000,
  B01100011,
  B01110111,
  B01111111,
  B01101011,
  B01100011,
  B01100011,
  B01100011
};
byte T[8]= {
  B00000000,
  B01111110,
  B01011010,
  B00011000,
  B00011000,
  B00011000,
  B00011000,
  B00011000
};


void setup() {
  lc.shutdown(0,false);
  // Set brightness to a medium value
  lc.setIntensity(0,1);
  // Clear the display
  lc.clearDisplay(0); 

};

void Kappa() {
  lc.setRow(0,0,K[0]);
  lc.setRow(0,1,K[1]);
  lc.setRow(0,2,K[2]);
  lc.setRow(0,3,K[3]);
  lc.setRow(0,4,K[4]);
  lc.setRow(0,5,K[5]);
  lc.setRow(0,6,K[6]);
  lc.setRow(0,7,K[7]);
  lc.setRow(0,8,K[8]);
};
void Te() {  
  lc.setRow(0,0,T[0]);
  lc.setRow(0,1,T[1]);
  lc.setRow(0,2,T[2]);
  lc.setRow(0,3,T[3]);
  lc.setRow(0,4,T[4]);
  lc.setRow(0,5,T[5]);
  lc.setRow(0,6,T[6]);
  lc.setRow(0,7,T[7]);
  lc.setRow(0,8,T[8]);
};
void eMe() {
  lc.setRow(0,0,M[0]);
  lc.setRow(0,1,M[1]);
  lc.setRow(0,2,M[2]);
  lc.setRow(0,3,M[3]);
  lc.setRow(0,4,M[4]);
  lc.setRow(0,5,M[5]);
  lc.setRow(0,6,M[6]);
  lc.setRow(0,7,M[7]);
  lc.setRow(0,8,M[8]);  
};


void loop() {
  Kappa();
  delay(delayTime);
  Te();
  delay(delayTime);
  eMe();
  delay(delayTime*2);
}
