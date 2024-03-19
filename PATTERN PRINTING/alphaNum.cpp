#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows: ";
    cin >> n;

    int num = 1;
    char ch = 'A';

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) { 
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
                num++;
            }
        } else { 
            for (int j = 1; j <= i; j++) {
                cout << ch << " ";
                ch++;
            }
        }
        cout << endl;
    }

    return 0;
}
