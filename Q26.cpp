#include <iostream>
using namespace std;

int main()
{
    float sub[5];
    float total;
    for (int i=0;i<5;i++)
    {
        cout << "enter the marks of subject["<<i<<"]";
        cin>> sub[i];

        total =total+sub[i];
    }
    float precent = (total/500)*100;
    cout << "the total marks are --" << total << endl ;
    cout << "the percentage is --" << precent << endl ;  
    
    return 0;
}