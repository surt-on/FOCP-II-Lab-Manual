#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
    int y;
    y=a;
    a=b;
    b=y;
}

void swap_2(float &a,float &b)
{
    float y;
    y=a;
    a=b;
    b=y;
}

int main()
{
    int a,b;
    cout<<"enter your desired values of a & b ";
    cin>>a>>b;
    swap(a,b);
    cout<<"your value of a is "<<a<<"and b is "<<b;
    return 0;
}