#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    int r;
    string name;
    cout<<"enter the"<<setw(35)<<"age--";
    cin>>r;
    cin.ignore();
    cout<<"want your name--";
    getline(cin,name);
    cout<<"the age is --"<<setw(25)<<left<<r<<endl;
    cout<<"the name is --"<<name<<endl;


    return 0 ;

}