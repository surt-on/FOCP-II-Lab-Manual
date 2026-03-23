#include <iostream>
using namespace std;

int main()
{
    float price[10];
    float max_price;

    for (int i = 0; i < 10; i++)
    {
        cout << "enter  the price of item no." << i << "--";
        cin >> price[i];
    }
    max_price = price[0];
    for (int i = 0; i < 10; i++)
    {

        if (max_price < price[i])
        {
            max_price = price[i];
        }
    }
    cout << "the maximum price of items is--" << max_price << endl;

    return 0;
}