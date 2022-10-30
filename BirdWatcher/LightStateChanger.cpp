#include "LightStateChanger.h" 
#include <chrono>
#include "../../../Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/VC/Linux/include/wiringPi/2.32/wiringPi.h"
#include <ctime>
using namespace watcher;

/// <summary>
/// 
/// </summary>
/// <param name="state"></param>
/// <returns></returns>
bool watcher::LightStateChanger::ManualSwitch(LightState state)
{
    wiringPiSetupSys();
    pinMode(_led, OUTPUT);
    digitalWrite(_led, state);

    int out = digitalRead(_led);

    if (out == state) {
        return true;
    }
    return false;
}