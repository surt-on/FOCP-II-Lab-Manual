#include <iostream>
using namespace std;
float jodh(float,float,float=0,float=0,float=0,float=0);

int main ()
{
    int p,q,r,s,t;
    cout<<"enter your numbers-";
    cin>>p>>q>>r>>s>>t;

    jodh(p,q);

    jodh(r,s,t);
    return 0;
}
float jodh(float a ,float b ,float c ,float d ,float e ,float f )
{
    return a+b+c+d+e+f;
}