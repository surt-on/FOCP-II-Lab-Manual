#include <iostream>
using namespace std;
class SmartLight
{
    string brand;
    int brightness;
    bool isOn;

public:
    SmartLight()
    {
        brand = "nil";
        brightness = 50;
        isOn = false;
    }
    SmartLight(string b, int br, bool on)
    {
        brand = b;
        brightness = br;
        isOn = on;
    }
    void turnOff()
    {
        isOn = false;
    }
    void turnOn()
    {
        isOn = true;
    }
    void increaseBrightness()
    {
        if (brightness < 100 && brightness > 90)
        {
            cout << "max limit reached"<<endl;
        }
        else
        {
            brightness = brightness + 10;
        }
    }
    void decreaseBrightness()
    {
        if (brightness < 10 && brightness > 0)
        {
            cout << "minimum limit reached"<<endl;
        }
        else
        {
            brightness = brightness - 10;
        }
    }
    void displayStatus()
    {

        cout << "brand is " << brand << endl;
        cout << "the brightness " << brightness << endl;
        cout << "the device status is  ";
        if (isOn == true)
        {
            cout << "ON";
        }
        else
        {
            cout << "OFF";
        }

        cout << endl
             << endl;
    }
    ~SmartLight()
    {
        cout << "class ended";
    }
};

int main()
{

    SmartLight l1, l2("panasonic", 95, true);
    l1.increaseBrightness();
    l1.displayStatus();
    l2.increaseBrightness();
    l2.displayStatus();

    return 0;
}