//Take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num%5==0&&num%3==0){
        cout<<"It is divisible by both 5 and 3"<<endl;
    }
    else{
        cout<<"It is not divisible by both 5 and 3"<<endl;
    }
    return 0;
}