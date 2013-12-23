//Board = Arduino Uno
#define __AVR_ATmega328P__
#define ARDUINO 105
#define F_CPU 16000000L
#define __AVR__
extern "C" void __cxa_pure_virtual() {;}

//
//
void readUserSettings();
void saveUserSettings();
void printUserSettings();

#include "D:\applications\arduino-1.0.5\hardware\arduino\variants\standard\pins_arduino.h" 
#include "D:\applications\arduino-1.0.5\hardware\arduino\cores\arduino\arduino.h"
#include "D:\projects_arduino\ArduinoEEPROM_MagicNumber\ArduinoEEPROM_MagicNumber.ino"
#include "D:\projects_arduino\ArduinoEEPROM_MagicNumber\EEPROMAnything.h"
