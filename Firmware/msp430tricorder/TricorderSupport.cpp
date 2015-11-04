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
    return 0;
}



//OPT3001
float TricorderSupport::read_OPT3001() {
    return 0;
}


//MAG3110
float TricorderSupport::read_MAG3110() {
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
