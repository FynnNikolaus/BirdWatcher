#pragma once

namespace watcher
{
    /// <summary>
    /// 
    /// </summary>
    class LightStateChanger
    {
    public:
        /// <summary>
        /// Please check the pins with "gpio -g readall" in the command prompt
        /// </summary>
        /// <param name="GPIO pin"></param>
        LightStateChanger(short led) :
            _led(led)
        {}

        enum LightState
        {
            On = 1,
            Off = 0
        };

        /// <summary>
        /// 
        /// </summary>
        /// <param name=""></param>
        /// <returns></returns>
        bool ManualSwitch(LightState);

    private:
        short _led;
    };
}