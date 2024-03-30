//Take 3 positive integers input and print the greatest of them.
#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the numbers:"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2&&num1>num3){
        cout<<"The greatest number is:"<<num1<<endl;
    }
    else if(num2>num1&&num2>num3){
        cout<<"The greatest number is:"<<num2<<endl;
    }
    else{
        cout<<"The greatest number is:"<<num3<<endl;
    }
    return 0;

}