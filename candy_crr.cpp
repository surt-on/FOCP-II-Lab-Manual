#include <iostream>
using namespace std;
class candy
{
    string color;
    int points;

public:
    void setCandy(string c, int p);
    void displayCandy();
    candy();
    candy(string);
    candy(string, int);
};
candy::candy()
{
    color = "0", points = 0;
}
candy::candy(string c)
{
    color = c, points = 0;
}
candy::candy(string c, int p)
{
    color = c, points = p;
}
void candy::setCandy(string c, int p)
{
    color = c, points = p;
}
void candy::displayCandy()
{
    cout << "the points are  " << points << endl;
    cout << "the candies are " << color << endl;
}

int main()
{

    candy c1, c2("blue", 45), c3("red");
    c1.displayCandy();
    c2.displayCandy();
    c3.displayCandy();

    return 0;
}