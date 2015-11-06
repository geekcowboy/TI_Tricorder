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
  
  float A_val = LMT70_AMul * (LMT70_reading^3);
  float B_val = LMT70_BMul * (LMT70_reading^2);
  float C_val = LMT70_CMul * LMT70_reading;
      
  return A_val+B_val+C_val+LMT70_DMul;
}



//HDC1000
float TricorderSupport::read_HDC1000() {
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
  Wire.send(MAG3110_CTRL_REG2);   
  Wire.send(0x80);     
  Wire.endTransmission();     
  
  delay(15);
  
  Wire.beginTransmission(MAG3110_ADDRESS);
  Wire.send(MAG3110_CTRL_REG1);            
  Wire.send(0x01);                 
  Wire.endTransmission();      
  
  Wire.beginTransmission(MAG3110_ADDRESS); 
  Wire.send(MAG3110_X_MSB);           
  Wire.endTransmission();     
 
  delayMicroseconds(2); 
  
  Wire.requestFrom(MAG3110_ADDRESS, 1); 
  while(Wire.available()) { 
    X_MSB = Wire.receive(); 
  }
  
  delayMicroseconds(2); 
  
  Wire.beginTransmission(MAG3110_ADDRESS);
  Wire.send(MAG3110_X_LSB);              
  Wire.endTransmission();     
 
  delayMicroseconds(2); 
  
  Wire.requestFrom(MAG3110_ADDRESS, 1); 
  while(Wire.available()) { 
    X_LSB = Wire.receive();
  }
  
  int X_Field = (X_LSB|(X_MSB << 8));
  return X_Field; 
}




//OPT3001
float TricorderSupport::read_OPT3001() {
    return 0;
}

//LMP91000
float TricorderSupport::read_LMP91000() {
    return 0;
}

//PGA900
float TricorderSupport::read_PGA900() {
    return 0;
}
