#include "devicemouse.h"
#include <iostream>

using namespace std;

DeviceMouse::DeviceMouse()
{
    cout << "Mouse created" << endl;
}

short DeviceMouse::getPrimaryButton() const
{
    return primaryButton;
}

void DeviceMouse::setPrimaryButton()
{
    cin >> primaryButton;
    if (primaryButton > 2 || primaryButton < 1){
        cout << "Select between 1 and 2, please try again." << endl;
        setPrimaryButton();
    }
}
