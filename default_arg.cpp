#include <iostream>
using namespace std;

void welcome(string="user");

int main()
{
    string a;
    cout<<"enter your name sab ji-";
    cin>>a;

    welcome();
    welcome(a);
    
}
void welcome(string name)
{
    cout<<"welcome "<<name<<endl;
}