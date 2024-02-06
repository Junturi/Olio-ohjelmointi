#include "devicebaseclass.h"
#include <iostream>

using namespace std;

DeviceBaseClass::DeviceBaseClass()
{

}

short DeviceBaseClass::getDeviceId() const
{
    return deviceId;
}

void DeviceBaseClass::setDeviceId()
{
    cin >> deviceId;
}
