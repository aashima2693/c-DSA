//Write a program to copy the contents of one array into another in the reverse order. 
#include<iostream>
using namespace std;
int main(){
    int array[5];
    for(int i=0;i<5;i++){
        cin>>array[i];
    }
    for(int i=5-1;i>=0;i--){
        cout<<array[i];
    }
   

    
    return 0;

}