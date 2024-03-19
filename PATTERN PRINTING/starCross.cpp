#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter : ";
    cin >> n;
    
    if (n % 2 == 0) {
        cout << "Size must be an odd number." << endl;
        return 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
