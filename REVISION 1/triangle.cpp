//Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or isosceles triangle
#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter the value of sides:"<<endl;
    cin>>side1>>side2>>side3;
    if(side1==side2&&side1==side3&&side2==side3){
        cout<<"It is a equilateral triangle."<<endl;
    }
    else if(side1==side2||side2==side3||side1==side3){
        cout<<"It is a isosceles triangle."<<endl;
    }
    else{
        cout<<"It is a scalene triangle"<<endl;
    }
    return 0;
}