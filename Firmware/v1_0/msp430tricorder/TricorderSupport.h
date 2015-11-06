//
//  TricorderSupport
//  Example for library for MSP432P401R-based Tricorder BoosterPack
//
//
//  Date   :  Sep 12, 2015
//  Version:  1.00
//  File   :  TricorderSupport.h
//
//  Licence CC = BY SA NC
//
//  Use of Clock from Galaxia library for MSP432 proposed by ReiVilo
//

#ifndef TricorderSupport_h
#define TricorderSupport_h

//
// #DEFINES
//
#define numSensors             6
#define debounceDelay          175

#define HDC1000_id             0
#define LMT70_id               1
#define OPT3001_id             2
#define MAG3110_id             3
#define LMP91000_id            4
#define PGA900_id              5

#define leftButton             P6_7        //pin35  P6_7
#define rightButton            P6_6        //pin36  P6_6
#define powerLED               P2_7        //pin40  P2_7
#define LED0                   P5_7        //pin17  P5_7
#define LED1                   P2_6        //pin39  P2_6

#define PMOD0                 P3_6         //pin11
#define PMOD1                 P3_5         //pin32
#define PMOD2                 P5_1         //pin33
#define PMOD3                 P2_3         //pin34

#define LMT70_TON             P4_6         //pin8
#define LMT70_TAO             A14          //pin23    P6_1
#define LMP91000_VOUT         A8           //pin27    P4_5
#define PGA900_VOUT           A6           //pin28    P4_7
#define LMP91000_MENB         P3_7         //pin31
#define MAG3110_INT           P2_4         //pin38

#define SCL_pin               P6_5           //pin9
#define SDA_pin               P6_4           //pin10

#define SD_CS                 P5_2             //pin12

#define HDC1000_ADDRESS                (0x40)
#define HDC1000_HUMIDITY_REGISTER      (0x01)
#define MAG3110_ADDRESS                (0x0E)
#define MAG3110_X_MSB                  (0x01)
#define MAG3110_X_LSB                  (0x02)
#define MAG3110_Y_MSB                  (0x03)
#define MAG3110_Y_LSB                  (0x04)
#define MAG3110_Z_MSB                  (0x05)
#define MAG3110_Z_LSB                  (0x06)
#define MAG3110_CTRL_REG1              (0X10)
#define MAG3110_CTRL_REG2              (0X11)
#define LMP91000_ADDRESS               (0x90)
#define PGA900_TEST_REG                (0x40)
#define PGA900_DATA_RAM                (0x41)
#define PGA900_CTRL_STAT_REG1          (0x42)
#define PGA900_DEV_RAM                 (0x43)
#define PGA900_OTP                     (0x44)
#define PGA900_DATA_RAM                (0x45)
#define PGA900_CTRL_STAT_REG2          (0x47)



//TricorderSupport Class
class TricorderSupport {
public:
    TricorderSupport();
    void begin(void);
    float read_LMT70(void);
    double read_HDC1000(void);
    float read_OPT3001(void);
    int read_MAG3110(void);
    float read_PGA900(void);
    float read_LMP91000(void);

private:
  const float LMT70_AMul = -0.00000000180963;
  const float LMT70_BMul = -0.000003325395;
  const float LMT70_CMul = -0.1814103;
  const float LMT70_DMul = 205.5894;
};


#endif
