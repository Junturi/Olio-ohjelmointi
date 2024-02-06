#include "mydeviceui.h"
#include "devicebaseclass.h"
#include <iostream>

using namespace std;

MyDeviceUI::MyDeviceUI()
{
    cout << "Device created" << endl;
    objectDeviceDisplay = new DeviceDisplay;
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
}

MyDeviceUI::~MyDeviceUI()
{
    cout << "Device deleted" << endl;
    delete objectDeviceDisplay;
    objectDeviceDisplay = nullptr;
    delete objectDeviceMouse;
    objectDeviceMouse = nullptr;
    delete objectDeviceTouchPad;
    objectDeviceTouchPad = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    cout << "DEVICE MENU" << endl << "============" << endl;
    cout << "1: Set Mouse Information" << endl;
    cout << "2: Set Touch Pad Information" << endl;
    cout << "3: Set Display Information" << endl;
    cout << "4: Show Devices Information" << endl;
    cout << "5: Finish" << endl << endl;
    cout << "Choose: " << endl;
    int select = 0;
    cin >> select;

    switch(select){
    case 1:{
        uiSetMouseInformation();
        break;
    }
    case 2:{
        uiSetTouchPadInformation();
        break;
    }
    case 3:{
        uiSetDisplayInformation();
        break;
    }
    case 4:{
        uiShowDeviceInformation();
        break;
    }
    case 5:{
        break;
    }
    default:{
        uiShowMenu();
        break;
    }
    }
}

void MyDeviceUI::uiSetMouseInformation()
{
    cout << "SET MOUSE INFORMATION" << endl << "====================" << endl;
    cout << "Set Mouse Device ID: " << endl;
    objectDeviceMouse->setDeviceId();
    cout << "Set Mouse Primary Button: " << endl;
    objectDeviceMouse->setPrimaryButton();
    uiShowMenu();

}

void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "SET TOUCH PAD INFORMATION" << endl << "===========================" << endl;
    cout << "Set Touch Pad ID: " << endl;
    objectDeviceTouchPad->setDeviceId();
    cout << "Set Touch Pad Sensitivity: " << endl;
    objectDeviceTouchPad->setTouchPadSensitivity();
    uiShowMenu();

}

void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "SET DISPLAY INFORMATION" << endl << "===========================" << endl;
    cout << "Set Display ID: " << endl;
    objectDeviceDisplay->setDeviceId();
    cout << "Set Display Resolution: " << endl;
    objectDeviceDisplay->setDisplayResolution();
    uiShowMenu();

}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "DEVICE INFORMATION" << endl << "=========================" << endl;
    cout << "*****" << endl << "Mouse Information" << endl;
    cout << "Mouse ID: " << objectDeviceMouse->getDeviceId() << endl;
    cout << "Mouse Primary Button: " << objectDeviceMouse->getPrimaryButton() << endl;
    cout << "*****" << endl << "Touch Pad Information" << endl;
    cout << "Touch Pad ID: " << objectDeviceTouchPad->getDeviceId() << endl;
    cout << "Touch Pad Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity() << endl;
    cout << "*****" << endl << "Display Information" << endl;
    cout << "Display ID: " << objectDeviceDisplay->getDeviceId() << endl;
    cout << "Display Resolution: " << objectDeviceDisplay->getDisplayResolution() << endl << "*****" << endl;
}
