//
//LIBRARIES
//
#include "SPI.h"
#include "Wire.h"
#include "OneMsTaskTimer.h"
#include "LCD_SharpBoosterPack_SPI.h"
#include "TricorderSupport.h"


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
  pinMode(powerLED, OUTPUT);
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(leftButton, INPUT_PULLUP);
  pinMode(rightButton, INPUT_PULLUP);
  
  //Initialize system
  digitalWrite(powerLED, HIGH);  // Turn on power indicator LED
  digitalWrite(LED0, HIGH);  // Turn off LED0
  digitalWrite(LED1, HIGH);  // Turn off LED1
  

  // Initatize sensors and data fields
  tricorder[0].sensorID ="HDC1000";
  tricorder[0].UM = "% Humidity";
  tricorder[0].sensorVal = 0;
  tricorder[1].sensorID ="LMT70";
  tricorder[1].UM = "Degrees F";
  tricorder[1].sensorVal = 0;
  tricorder[2].sensorID ="OPT3001";
  tricorder[2].UM = "Lux";
  tricorder[2].sensorVal = 0;
  tricorder[3].sensorID ="MAG3110";
  tricorder[3].UM = "uT";
  tricorder[3].sensorVal = 0;
  tricorder[4].sensorID ="O2 Sensor";
  tricorder[4].UM = "ppm";
  tricorder[4].sensorVal = 0;
  tricorder[5].sensorID ="Pressure";
  tricorder[5].UM = "kPa";
  tricorder[5].sensorVal = 0;

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






