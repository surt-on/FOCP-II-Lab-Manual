#include <iostream>
using namespace std ;
int main ()
{
    int ID;
    cout << "enter ID number->";
    cin >> ID;
    if( ID%3==0)
    {
        cout<<"BUZZ";
    }
    else if( ID%5==0)
    {
        cout<<"FUZZ";
    }
    else if (ID%3==0 && ID%5==0)
    {
        cout<<"BUZZ FUZZ";
    }
    else
    {
        cout<<"No tag for this ID number -_-";
    }
    return 0;
}