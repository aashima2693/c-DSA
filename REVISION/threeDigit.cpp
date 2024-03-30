//Take positive integer input and tell if it is a three digit number or not
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num>99&&num<1000){
        cout<<"It is a three digit number"<<endl;
    }
    else{
        cout<<"It is not a three digit number"<<endl;
    }
    return 0;

}