#include "../../../Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/Linux/include/wiringPi/2.32/wiringPi.h"

#define	LED	17

int main(void)
{
	wiringPiSetupSys();

	pinMode(LED, OUTPUT);

	while (true)
	{
		digitalWrite(LED, HIGH);  // On
		delay(500); // ms
		digitalWrite(LED, LOW);	  // Off
		delay(500);
	}
	return 0;
}