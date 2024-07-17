//Count the number of elements in given array greater than a given number x.
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
    int x;
    cout<<"Enter the numberr:";
    cin>>x;
    int count=0;
    for(int i=0;i<6;i++){
        if(x<arr[i]){
            count++;     
    }  
    }
    cout<<count;      
return 0;
}