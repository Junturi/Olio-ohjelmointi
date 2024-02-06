#include "devicetouchpad.h"
#include <iostream>

using namespace std;

DeviceTouchPad::DeviceTouchPad()
{
    cout << "Touchpad created" << endl;
}

short DeviceTouchPad::getTouchPadSensitivity() const
{
    return touchPadSensitivity;
}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cin >> touchPadSensitivity;
    if (touchPadSensitivity < 1 || touchPadSensitivity > 5){
        cout << "Select between 1-5, please try again." << endl;
        setTouchPadSensitivity();
    }
}
