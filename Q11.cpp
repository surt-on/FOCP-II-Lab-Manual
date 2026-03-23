#include <iostream>
using namespace std ;
int main ()
{
    int saman;
    float rate;
    cout << "enter the quantity of the item->";
    cin >> saman;
    cout << "enter the rate of the item->";
    cin >> rate;
    if (saman>1000)
    {
        cout<<"Dear Coustumer your final bill is--> "<< saman - (saman*rate)*(0.1);
        cout<<"\nCongratulations on getting a discount of 10%";
        cout<<"\n*****thank you for shopping from JHAKAS mall*****";

    }
    else
    {
        cout<<"Dear Coustumer your final bill is-->  "<< saman*rate;
        cout<<"\n*****thank you for shopping from JHAKAS mall*****";
    }
    return 0;
}