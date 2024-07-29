// Change the second element of the array arr to 25 and print the updated array.
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout<<"Enter the elements of array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Array is:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    arr[1]=25;
    cout<<"Updated array is:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
 return 0;

}

