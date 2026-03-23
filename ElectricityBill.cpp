#include <iostream>
using namespace std;
class ElectricityBill
{
    string consumerName;
    int units;
    float billAmount;

public:
    ElectricityBill()
    {
        consumerName = "Not Assigned";
        units = 10;
        billAmount = 0;
    }
    ElectricityBill(string c, int u, float b = 0)
    {
        consumerName = c;
        units = u;
        billAmount = b;
    }
    void calculateBill();
    void displayBill();
};
void ElectricityBill::calculateBill()
{
    if (units <= 100)
    {
        billAmount = units * 5;
        
    }
    else if (units > 100 && units <= 200)
    {
        billAmount = units * 7;
       
    }
    else if (units > 200)
    {
        billAmount = units * 10;
       
    }
}
void ElectricityBill::displayBill()
{
    cout << "\n name is " << consumerName << endl;
    cout << "\n your number of units are-  " << units << endl;
    cout << "\n your billing amount is  " << billAmount;
}
int main()
{
    ElectricityBill e1, e2("Ramu", 250);
     e1.calculateBill();
     e1.displayBill();
    e2.calculateBill();
    e2.displayBill();

    return 0;
}