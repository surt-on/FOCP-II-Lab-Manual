#include <iostream>
using namespace std;

class Car
{
    public:
    string color;
    int make_year;
    
    string car_type;
    string brand;
void display()
{
    cout<<"color of the car "<<color <<endl;
    cout<<"the "<<car_type <<endl;
    cout<<"the "<<brand <<endl;
}
void entry()
{
    cout<<"enter the color,make_year,car_type,brand";
    cin>>color>>make_year>>car_type>>brand;
}

};


int main() {
    Car c1;
    c1.entry();
     c1.brand="ABC";
     c1.car_type="sidan";
     c1.color="pink";
     c1.display();



    return 0;
}
