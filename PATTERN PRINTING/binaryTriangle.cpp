#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for the binary triangle: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        int num = i % 2; 
        for (int j = 0; j <= i; j++) {
            cout << num << " ";
            num = 1 - num; 
        }
        cout << endl;
    }

    return 0;
}
