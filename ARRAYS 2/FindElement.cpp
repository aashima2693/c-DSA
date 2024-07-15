//Find the element x in the array . Take array and x as input
#include<iostream>
using namespace std;
int main(){
    int arr[5],x,count=0;
    cout<<"Enter the elments of an array:";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Array is:";
    for (int i=0;i<5;i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"Enter the element you want to find in the array:";
    cin>>x;
    cout<<endl;
    for(int i=0;i<5;i++){
        if(arr[i]==x){
            count++;
            cout<<"Element found at position"<<" :"<<i;
        }
        
    }
    if(count==0){
        cout<<"Element not found";
    
    }
       return 0;
    }

