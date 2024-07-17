//Given an array arr. Your task is to find the elements whose value is equal to that of its index value
#include<iostream>
using namespace std;
int main(){
    int arr[6];
    cout<<"Enter the elements:";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    for(int i=0;i<6;i++){
        if(arr[i]==i){
            cout<<arr[i]<<endl;    
    }  
    }
        
return 0;
}