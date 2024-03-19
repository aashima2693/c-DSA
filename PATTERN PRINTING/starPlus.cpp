#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of N : ";
    cin >> n;
    
    if (n % 2 == 0) {
        cout << "N must be an odd number." << endl;
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == n / 2 || i == n / 2) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
