//Take positive integer input and tell if it is divisible by 5 and 3.
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    if(a%3==0 || a%5==0){
        cout<<"It is divisible by 5 or 3"<<endl;

    }
    else{
        cout<<"It is not divisible by 5 or 3"<<endl;
    }

    return 0;
}