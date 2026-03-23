#include <iostream>
using namespace std ;
/*to find the winning player among the three*/

int main ()
{ 
    int p1,p2,p3;
    cout << "enter  points of player 1->";
    cin >> p1;
    cout << "enter  points of player 2->";   
    cin >> p2;
    cout << "enter  points of player 3->";
    cin >> p3;
    if (p1>p2 && p1>p3)
    {
        cout << "player 1 is the winner";
    }
    else if (p2>p1 && p2>p3)
    {
        cout << "player 2 is the winner";
    }
    else if (p3>p1 && p3>p2)
    {
        cout << "player 3 is the winner";
    return 0;
}
