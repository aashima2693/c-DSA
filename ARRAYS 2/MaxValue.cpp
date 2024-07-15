//Find the maximum value out of all the elements in the array.
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
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
   cout<<"Maximum value out of all is:"<<max<<endl;
}