#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    

    int arr[n][n];

    // input
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    // diagonal sum
    for(int i = 0; i < n; i++) {
        sum += arr[i][i];
    }

    cout << sum;
    return 0;
}