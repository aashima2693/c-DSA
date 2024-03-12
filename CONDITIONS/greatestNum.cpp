//Take 3 positive integers input and print the greatest of them
#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout<<"Enter the values"<<endl;
    cin>>a>>b>>c;

    if(a>b && a>c){
        cout<<"The greatest number is:"<<a<<endl;
    }

    else if (b>a && b>c){
        cout<<"The greatest number is:"<<b<<endl;
    }

    else if (c>a && c>b){
        cout<<"The greatest number is:"<<c<<endl;
    }
    return 0;
}

