#include <iostream>
using namespace std;

void swap(int *x,int*y);
void swap(int &r1,int &r2);

int main ()
{
    int a,b;
    cout<<"enter the alues of a --";

    cin>>a;
    cout<<"enter the alues of  b--";
    cin>>b;


    swap(a,b);




return 0;
}
void swap(int *x,int *y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;

    cout <<"the values are \n a="<<*x<<endl<<"b="<<*y;

}
void swap(int &r1,int &r2)
{
    r1=r1+r2;
    r2=r1-r2;
    r1=r1-r2;

    cout <<"the values are \n a="<<r1<<endl<<"b="<<r2;

}