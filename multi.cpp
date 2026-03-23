#include <iostream>
using namespace std;
void mult(int a, int b, int c = 1)
{

    cout << "the multiplication is " << a * b * c << endl;
}
void mult(double a, double b)
{

    cout << "the multiplication is " << a * b << endl;
}
int main()
{
    mult(24, 23);
    mult(24.982324f, 23.4512f);
    return 0;
}