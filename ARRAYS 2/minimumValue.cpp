//Find the minimum value out of all the elements in the array.
#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the elements:";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Array:";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    int min=arr[0];
    for(int i=0;i<6;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
   cout<<"Minimum value out of all is:"<<min<<endl;
}