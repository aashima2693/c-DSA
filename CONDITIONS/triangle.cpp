//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of sides";
    cin>>a>>b>>c;

    if(a==c && c==b){
        cout<<"It is an equilateral triangle."<<endl;
    }
     else if(a==b || b==c || a==c){
        cout<<"It is an isosceles triangle."<<endl;
     }

     else{
        cout<<"It is an scalene triangle"<<endl;
     }

     return 0;

}