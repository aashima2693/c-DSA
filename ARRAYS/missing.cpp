//WAP to find the smallest missing positive element in the sorted Array that contains only positive elements.
#include <iostream>
using namespace std;

int missing(int arr[], int n) {
    int expected = 1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] <= 0) 
            continue;
        if (arr[i] == expected)
            expected++;
        else
            break;
    }
    return expected;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallestMissingPositive = missing(arr, n);
    cout<< missing << endl;

    return 0;
}
