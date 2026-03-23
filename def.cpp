#include <iostream>
using namespace std;
int sum(int, int);
float sum(float, float);

int main()
{
    int a, b;
    cout << "enter values for int sum--";

    cin >> a >> b;

    int c, d;
    cout << "enter values for float sum --";
    cin >> c >> d;

    sum(a, b);
    sum(c, d);

    cout << "your integer sum is " << sum(a, b) << endl;
    cout << "your float sum is " << sum(c, d) << endl;
}

int sum(int a, int b)
{
    return a + b;
}
float sum(float a, float b)
{
    return a + b;
}