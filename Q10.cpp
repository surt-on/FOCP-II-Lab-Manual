#include <iostream>
using namespace std ;
int main ()
{
    int saal;
    cout << "enter the year->";
    cin >> saal;
    if (saal%4==0)
    {
        cout<<"the year is a leap year";
    }
    else
    {
        cout<<"the year is not a leap year";
    }
    return 0;
}