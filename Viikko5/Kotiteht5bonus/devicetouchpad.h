#ifndef DEVICETOUCHPAD_H
#define DEVICETOUCHPAD_H

#include "devicebaseclass.h"

class DeviceTouchPad : public DeviceBaseClass
{
public:
    DeviceTouchPad();
    short getTouchPadSensitivity() const;
    void setTouchPadSensitivity();

private:
    short touchPadSensitivity = 0;
};

#endif // DEVICETOUCHPAD_H
