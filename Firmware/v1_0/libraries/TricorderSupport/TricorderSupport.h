//
//  Sharp BoosterPackLCD SPI
//  Example for library for Sharp BoosterPack LCD with hardware SPI
//
//
//  Author :  Stefan Schauer
//  Date   :  Mar 05, 2015
//  Version:  1.02
//  File   :  LCD_SharpBoosterPack_SPI_main.h
//
//  Based on the LCD5110 Library
//  Created by Rei VILO on 28/05/12
//  Copyright (c) 2012 http://embeddedcomputing.weebly.com
//  Licence CC = BY SA NC
//
//  Edited 2015-07-10 by ReiVilo
//  Use of Clock from Galaxia library for MSP432
//  The OneMsTaskTimer is superseeded by the clock element myClock.
//

#ifndef TricorderSupport_h
#define TricorderSupport_h

//
// #DEFINES and GLOBAL VARS
//
#define numSensors 6
#define debounceDelay 175

#define leftButton P6_7    //pin35  P6_7
#define rightButton P6_6   //pin36  P6_6
#define powerLED P2_7      //pin40
#define LED0 P5_7          //pin17
#define LED1 P2_6          //pin39


#define PMOD0 P3_6         //pin11
#define PMOD1 P3_5         //pin32
#define PMOD2 P5_1         //pin33
#define PMOD3 P2_3         //pin34


#define LMT70_TON P4_6      //pin8
#define LMT70_TAO P6_1      //pin23
#define LMP91000_VOUT A8    //pin27    P4_5
#define PGA900_VOUT A6      //pin28    P4_7
#define LMP91000_MENB P3_7  //pin31
#define MAG3110_INT P2_4    //pin38

#define SCL_pin P6_5        //pin9
#define SDA_pin P6_4        //pin10

#define SD_CS P5_2          //pin12





#endif
