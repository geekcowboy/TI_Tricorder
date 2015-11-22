//
//  MSP432Tricoder
//  Example main.cpp for MSP432P401R-based Tricorder BoosterPack
//
//
//  Date   :  Sep 12, 2015
//  Version:  1.00
//  File   :  MSP432Tricorder.ino
//
//  Licence CC = BY SA NC
//
//  Use of Clock from Galaxia library for MSP432 proposed by ReiVilo
//

//
//LIBRARIES
//
#include <TricorderSupport.h>


//
// #DEFINEs and Global Variables
//
int sensorCounter = 0;
boolean goLeft = false;
boolean goRight = false;


// 
//DATA STRUCTURES
//
struct tricorderSensors
{
  String sensorID;
  String UM;
  float sensorVal;
};


//
// INSTANTIATE DEVICES
//
TricorderSupport tricorder;
tricorderSensors tricorderSensor[numSensors];


//
//Function: SETUP
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
  digitalWrite(LED0, LOW);  // Turn off LED0
  digitalWrite(LED1, LOW);  // Turn off LED1


  // Initatize sensors and data fields
  tricorderSensor[HDC1000_id].sensorID ="HDC1000";
  tricorderSensor[HDC1000_id].UM = "% Humidity";
  tricorderSensor[HDC1000_id].sensorVal = -1;
  tricorderSensor[LMT70_id].sensorID ="LMT70";
  tricorderSensor[LMT70_id].UM = "Degrees F";
  tricorderSensor[LMT70_id].sensorVal = -1;
  tricorderSensor[OPT3001_id].sensorID ="OPT3001";
  tricorderSensor[OPT3001_id].UM = "Lux";
  tricorderSensor[OPT3001_id].sensorVal = -1;
  tricorderSensor[MAG3110_id].sensorID ="MAG3110";
  tricorderSensor[MAG3110_id].UM = "uT";
  tricorderSensor[MAG3110_id].sensorVal = -1;
  tricorderSensor[LMP91000_id].sensorID ="O2 Sensor";
  tricorderSensor[LMP91000_id].UM = "ppm";
  tricorderSensor[LMP91000_id].sensorVal = -1;
  tricorderSensor[PGA900_id].sensorID ="Pressure";
  tricorderSensor[PGA900_id].UM = "kPa";
  tricorderSensor[PGA900_id].sensorVal = -1;

  // Initialize Serial Stream
  Serial.begin(9600);
  Serial.println("Tricorder Mk I");

  //Get first reading
  tricorder.begin();
  tricorderSensor[HDC1000_id].sensorVal = tricorder.read_HDC1000();
}


//
// Function: LOOP
//
void loop() {
  // Check for navigation button presses
  goRight = digitalRead(rightButton);
  delay(debounceDelay);
  goLeft = digitalRead(leftButton);
  delay(debounceDelay);

  if (!goRight) {
    sensorCounter++;
  }

  if (!goLeft) {
    sensorCounter--;
  }

  if (sensorCounter < 0) {
    sensorCounter = numSensors - 1;
  }
  else if (sensorCounter > numSensors-1)
  {
    sensorCounter = 0;
  }


  //Update sensor reading based on sensor selected by user
  switch (sensorCounter) {
  case HDC1000_id:
    tricorderSensor[HDC1000_id].sensorVal = (float)tricorder.read_HDC1000();
    break;
    
  case LMT70_id:
    tricorderSensor[LMT70_id].sensorVal = (float)tricorder.read_LMT70();
    break;
    
  case OPT3001_id:
    tricorderSensor[OPT3001_id].sensorVal = (float)tricorder.read_OPT3001();
    break;
    
  case MAG3110_id:
    tricorderSensor[MAG3110_id].sensorVal = (float)tricorder.read_MAG3110();
    if (tricorderSensor[MAG3110_id].sensorVal < 30000) {
      digitalWrite(LED1, HIGH);
    }
    else {
      digitalWrite(LED1, LOW);
    }
    break;
    
  case LMP91000_id:
    tricorderSensor[LMP91000_id].sensorVal = (float)tricorder.read_LMP91000();
    break;
    
  case PGA900_id:
    tricorderSensor[PGA900_id].sensorVal = (float)tricorder.read_PGA900();
    break;
    
  default:
    sensorCounter = 0;
    tricorderSensor[HDC1000_id].sensorVal = (float)tricorder.read_HDC1000();
  }

  // Display selected sensor data
  displayData(tricorderSensor[sensorCounter].sensorID, tricorderSensor[sensorCounter].UM, tricorderSensor[sensorCounter].sensorVal);
}


//
// Function: displayData
//
void displayData(String sensorID, String UM, float sensorVal) {
   Serial.print(sensorID);
   Serial.print(" : ");
   Serial.print(sensorVal);
   Serial.print(" ");
   Serial.println(UM);
   delay(100);
}







