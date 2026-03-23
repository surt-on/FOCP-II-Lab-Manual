#include <iostream>
using namespace std ;
int main ()
{
    char crax;
    cout<<"enter either a character or a number->";
    cin>>crax;
    if(crax>='0' || crax<='9')
    {
        cout<<"a number has been found in your input";
    }
    else if (crax>='a' && crax<='z' || crax>='A' &&  crax<='Z')
    {
        char low = tolower(crax);
        if (low=='a'|| low=='e'|| low=='i'|| low=='o'|| low=='u')
        {
            cout<<" a  has been found in your input";
        }
        else
        {
            cout<<" a consonant has been found in your input";
        }
    }
    else
    {
        cout<<" a special character has been found in your input";
    }
    return 0;
}