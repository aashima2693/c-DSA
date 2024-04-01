//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter
#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the length and breadth:"<<endl;
    cin>>l>>b;
    int area=l*b;
    int circumference=2*(l+b);
    if(area>circumference){
        cout<<"Area of this rectangle is greater than its circumference"<<endl;
    }
    else{
        cout<<"Area of this rectangle is not greater than its circumference"<<endl;
    }
    return 0;
}