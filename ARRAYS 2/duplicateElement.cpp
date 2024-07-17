//Given an array, predict if the array contains duplicates or not.
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
    bool duplicate=false;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(duplicate){
            break;
        }
    }
    if(duplicate){
        cout<<"There are  duplicates in the given array";
    }
    else{
        cout<<"There are no duplicates in the array";
    }

    return 0;

}