#ifndef DEVICEDISPLAY_H
#define DEVICEDISPLAY_H

#include "devicebaseclass.h"

class DeviceDisplay : public DeviceBaseClass
{
public:
    DeviceDisplay();
    short getDisplayResolution() const;
    void setDisplayResolution();

private:
    short displayResolution = 0;
};

#endif // DEVICEDISPLAY_H
