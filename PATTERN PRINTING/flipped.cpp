#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for the flipped number triangle: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= rows - i + 1; k++) {
            cout << k << " ";
        }

        cout << endl;
    }

    return 0;
}
