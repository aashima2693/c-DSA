//Take positive integer input and tell if it is divisible by 5 or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num%5==0&&num>0){
        cout<<"Number is divisible by 5."<<endl;
    }
    else if(num%5!=0&&num>0){
        cout<<"It is not divisible by 5"<<endl;
    }
    else{
        cout<<"please enter a positive value"<<endl;
    }
    return 0;
}