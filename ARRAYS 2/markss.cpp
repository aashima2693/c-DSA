//Given an array of marks of students, if the mark of any student is less than 35 print its roll number. 
//[roll number here refers to the index of the array.
#include<iostream>
using namespace std;
int main(){
    int arr[6],x=35;
    cout<<"Enter the Marks:";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Marks are:";
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        if(arr[i]<x){
        cout<<i<<endl;
        }
        
    }
    
    return 0;

}