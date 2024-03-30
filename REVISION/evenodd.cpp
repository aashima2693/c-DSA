//Take positive integer input and tell if it is even or odd
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num%2==0&&num>0){
        cout<<"It is an even number."<<endl;
    }
    else if(num%2!=0&&num>0){
        cout<<"It is an odd number."<<endl;
    }

    else{
        cout<<"Please enter a positive value"<<endl;
    }
    return 0;
}
