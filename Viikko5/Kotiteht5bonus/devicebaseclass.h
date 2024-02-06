#ifndef DEVICEBASECLASS_H
#define DEVICEBASECLASS_H


class DeviceBaseClass
{
public:
    DeviceBaseClass();
    short getDeviceId() const;
    void setDeviceId();

protected:
    short deviceId = 0;
};

#endif // DEVICEBASECLASS_H
