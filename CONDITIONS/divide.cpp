//Take positive integer input and tell if it is divisible by 5 or not
#include<iostream>
using namespace std;
int main(){
    int a;

    cout<<"enter the value of a=";
    cin>>a;

    if( a%5==0){
        cout<<"It is divisible by 5"<<endl;
    }

    else{
        cout<<"It is not divisible by 5"<<endl;
    
    }

       return 0;
}