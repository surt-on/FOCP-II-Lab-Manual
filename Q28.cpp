#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int inp[5];
    int odd=0,even=0;
    for(int i=0;i<5;i++)
    {
        cout<<"want some input from yo--";
        cin>> inp[i];
    }
        for(int i=0;i<5;i++)
    {

        if ( inp[i] % 2 ==0)
        {
           even = even+inp[i] ;
        }
        else
        {
           odd = odd + inp[i] ;
        }
    }
    cout << "the sum of even values are "<<even <<endl;
    cout << "the sum of odd values are "<<odd <<endl;


    return 0;
}