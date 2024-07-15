//Calculate the sum of all the elements in the given array
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
        cout<<arr[i];
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
     cout<<sum;
     return 0;
}