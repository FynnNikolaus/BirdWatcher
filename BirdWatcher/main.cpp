#include "LightStateChanger.h"

using namespace watcher;

int main(void)
{
    LightStateChanger nightVision(17);
    while (true)
    {
        nightVision.AutoLightControl();
    }
	return 0;
}