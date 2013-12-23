#include "EEPROMAnything.h"
//version of user settings 'Magic Number'
#define MAGIC_NUMBER 100

struct settings_t 
{
	unsigned int magicNumber;
	char color;
	unsigned int pwm;
};

settings_t userSettings;

void setup()
{	
	Serial.begin(19200);
	
	readUserSettings();
	if (userSettings.magicNumber!=MAGIC_NUMBER)
	{
		//set default values
		userSettings.magicNumber = MAGIC_NUMBER;
		userSettings.color = 'B';
		userSettings.pwm = 255;
		saveUserSettings();				
	}		
	printUserSettings();
}

void loop()
{
}

void readUserSettings()
{
	EP_READ_BLOCK(0, userSettings);
	delay(20);
}

void saveUserSettings()
{
	EP_WRITE_BLOCK(0, userSettings);
	delay(20);
}

void printUserSettings()
{
	Serial.print("magicNumber=");
	Serial.println(userSettings.magicNumber);
	Serial.print("color=");
	Serial.println(userSettings.color);
	Serial.print("pwm=");
	Serial.println(userSettings.pwm);
}