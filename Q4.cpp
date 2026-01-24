#include<iostream>
using namespace std;

int main()
{
    int iteam_n, quantity, price;

    cout<<"want your iteam number--";
    cin>>iteam_n;

    cout<<"tell me quantity sirrr--";
    cin>>quantity;
    
    cout<<"price of iteam--";
    cin>>price;

    int tot_price = quantity * price;

    cout<<"the total price is --"<<tot_price<<endl;
    cout<<"on iteam number -=>"<<iteam_n<<endl;
    cout<<"__________THANK YOU__________"<<endl;
}