//
//LIBRARIES
//
#include "SPI.h"
#include "OneMsTaskTimer.h"
#include "LCD_SharpBoosterPack_SPI.h"


//
// #DEFINES and GLOBAL VARS
//
#define numSensors 4
#define leftButton P4_5
#define rightButton P1_1
#define debounceDelay 175
int k = 0;
boolean goLeft = false;
boolean goRight = false;


// 
//DATA STRUCTURES
//
struct tricorderSensors
{
  String sensorID;
  String UM;
  int sensorVal;
};


//
// INSTANTIATE DEVICES
//
LCD_SharpBoosterPack_SPI myScreen;
tricorderSensors tricorder[numSensors];


//
//Function SETUP
//
void setup() {  
  // Setup I/O
  pinMode(leftButton, INPUT_PULLUP);
  pinMode(rightButton, INPUT_PULLUP);

  // Initatize sensors and data fields
  tricorder[0].sensorID ="HDC1000";
  tricorder[0].UM = "% Humidity";
  tricorder[0].sensorVal = 46;
  tricorder[1].sensorID ="LMT70";
  tricorder[1].UM = "Degrees F";
  tricorder[1].sensorVal = 75;
  tricorder[2].sensorID ="OPT3001";
  tricorder[2].UM = "Lumens";
  tricorder[2].sensorVal = 416;
  tricorder[3].sensorID ="MAG3110";
  tricorder[3].UM = "Mag Field";
  tricorder[3].sensorVal = 3;

  // Initialize display
  myScreen.begin();
  myScreen.clearBuffer();
  myScreen.setFont(0);
  myScreen.text(10, 10, "Tricorder");
  myScreen.text(10, 30, "Mark I");
  myScreen.flush();  
  delay(5000);
  myScreen.clear();
}


//
// Function: MAIN
//
void loop() {
  
  // Display selected sensor data
  displayData(tricorder[k].sensorID, tricorder[k].UM, String(tricorder[k].sensorVal, DEC));

  // Check for navigation button presses
  goRight = digitalRead(rightButton);
  delay(debounceDelay);
  goLeft = digitalRead(leftButton);
  delay(debounceDelay);

  if (!goRight) {
    k++;
  }

  if (!goLeft) {
    k--;
  }

  if (k < 0) {
    k = numSensors - 1;
  }
  else if (k > numSensors-1)
  {
    k = 0;
  }


}


//
// Function: displayData
//
void displayData(String sensorID, String UM, String sensorVal) {
  myScreen.clear();   
  myScreen.clearBuffer();
  myScreen.setFont(0);
  myScreen.text(10, 10, sensorID);
  myScreen.text(10, 30, UM);
  myScreen.setFont(1);
  myScreen.text(10, 50, sensorVal);
  myScreen.flush();     
}






