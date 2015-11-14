//
//  TricorderSupport
//  Example for library for MSP432P401R-based Tricorder BoosterPack
//
//
//  Date   :  Sep 12, 2015
//  Version:  1.00
//  File   :  TricorderSupport.cpp
//
//  Licence CC = BY SA NC
//
//  Use of Clock from Galaxia library for MSP432 proposed by ReiVilo
//
#include "TricorderSupport.h"
#include "energia.h"
#include "Wire.h"

#if defined(__MSP432P401R__)
// Let's use the RTOS Clock element from the Galaxia library instead!
#include "Clock.h"
#else
#include <OneMsTaskTimer.h>
#endif



//Constructor
TricorderSupport::TricorderSupport() {
}


//begin
void TricorderSupport::begin() {
  Wire.begin();
}


//LMT70
float TricorderSupport::read_LMT70() {
  digitalWrite(LMT70_TON, HIGH);
  delay(200);
  float LMT70_reading = analogRead(LMT70_TAO);
  digitalWrite(LMT70_TON, LOW);

  float A_val = LMT70_AMul * (LMT70_reading*LMT70_reading*LMT70_reading);
  float B_val = LMT70_BMul * (LMT70_reading*LMT70_reading);
  float C_val = LMT70_CMul * LMT70_reading;

  return A_val+B_val+C_val+LMT70_DMul;
}



//HDC1000
double TricorderSupport::read_HDC1000() {
  uint16_t humidityRaw;
  uint8_t bytes = 2;
  Wire.beginTransmission(HDC1000_ADDRESS);
  Wire.write(HDC1000_HUMIDITY_REGISTER);
  Wire.endTransmission();
  delay(20);

  Wire.requestFrom(HDC1000_ADDRESS, bytes);
  if(Wire.available() >= bytes) {
    humidityRaw = Wire.read()<<8;
    humidityRaw += Wire.read();
  }

  double humidityReading = humidityRaw/65536.0*100.0;
  return humidityReading;
}



//MAG3110
int TricorderSupport::read_MAG3110() {

  int X_LSB, X_MSB;  

  Wire.beginTransmission(MAG3110_ADDRESS);          
  Wire.write(MAG3110_CTRL_REG2);   
  Wire.write(0x80);     
  Wire.endTransmission();     

  delay(15);

  Wire.beginTransmission(MAG3110_ADDRESS);
  Wire.write(MAG3110_CTRL_REG1);            
  Wire.write(0x01);                 
  Wire.endTransmission();      

  Wire.beginTransmission(MAG3110_ADDRESS); 
  Wire.write(MAG3110_X_MSB);           
  Wire.endTransmission();     

  delayMicroseconds(2); 

  Wire.requestFrom(MAG3110_ADDRESS, 1); 
  while(Wire.available()) { 
    X_MSB = Wire.read(); 
  }

  delayMicroseconds(2); 

  Wire.beginTransmission(MAG3110_ADDRESS);
  Wire.write(MAG3110_X_LSB);              
  Wire.endTransmission();     

  delayMicroseconds(2); 

  Wire.requestFrom(MAG3110_ADDRESS, 1); 
  while(Wire.available()) { 
    X_LSB = Wire.read();
  }

  int X_Field = (X_LSB|(X_MSB << 8));
  return X_Field; 
}




//OPT3001
float TricorderSupport::read_OPT3001() {

  uint16_t writeByte = DEFAULT_CONFIG_100;
  uint16_t exponent = 0;
  uint32_t result = 0;
  int16_t raw;
  int8_t lsb;
  int8_t msb;

  Wire.beginTransmission(OPT3001_ADDRESS);
  Wire.write(OPT3001_CONFIG_REG);
  Wire.write((unsigned char)(writeByte>>8));
  Wire.write((unsigned char)(writeByte&0x00FF));
  Wire.endTransmission();

  delay(5);

  Wire.beginTransmission(OPT3001_ADDRESS);
  Wire.write(OPT3001_RESULT_REG);
  Wire.endTransmission(true);

  Wire.requestFrom(OPT3001_ADDRESS, 2);
  while(Wire.available() < 2)	{
  }

  msb = Wire.read();
  lsb = Wire.read();
  raw = (msb << 8) | lsb;

  result = raw&0x0FFF;
  exponent = (raw>>12)&0x000F;

  //convert raw readings to LUX
  switch(exponent){
  case 0: //*0.015625
    result = result>>6;
    break;
  case 1: //*0.03125
    result = result>>5;
    break;
  case 2: //*0.0625
    result = result>>4;
    break;
  case 3: //*0.125
    result = result>>3;
    break;
  case 4: //*0.25
    result = result>>2;
    break;
  case 5: //*0.5
    result = result>>1;
    break;
  case 6:
    result = result;
    break;
  case 7: //*2
    result = result<<1;
    break;
  case 8: //*4
    result = result<<2;
    break;
  case 9: //*8
    result = result<<3;
    break;
  case 10: //*16
    result = result<<4;
    break;
  case 11: //*32
    result = result<<5;
    break;
  }

  return result;
}






















//LMP91000
float TricorderSupport::read_LMP91000() {
  return 0;
}

//PGA900
float TricorderSupport::read_PGA900() {
  return 0;
}



