//Take positive integer input and tell if it is a three digit number or not
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    if(a>99 && a<1000){
        cout<<"It is a three digit number"<<endl;
    }
    else{
        cout<<"It is not a three digit number"<<endl;
    }

    return 0;
}
    