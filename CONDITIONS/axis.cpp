//Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
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

