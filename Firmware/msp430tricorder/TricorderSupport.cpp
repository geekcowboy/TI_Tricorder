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


//HDC1000
int TricorderSupport::read_HDC1000() {
    return 0;
}


//LMT70
int TricorderSupport::read_LMT70() {
  digitalWrite(LMT70_TON, HIGH);
  delay(200);
  int LMT70_reading = analogRead(LMT70_TAO);
  digitalWrite(LMT70_TON, LOW);
  return LMT70_reading;
}


//OPT3001
int TricorderSupport::read_OPT3001() {
    return 0;
}


//MAG3110
int TricorderSupport::read_MAG3110() {
    return 0;
}


//LMP91000
int TricorderSupport::read_LMP91000() {
    return 0;
}


//PGA900
int TricorderSupport::read_PGA900() {
    return 0;
}
