//Given the length and breadth of a rectangle, write a program to find whether numerically the area of the rectangle is greater than its perimeter
#include <iostream>
using namespace std;
int main(){
    int l = 12;
    int b = 10;

    int area = l*b;
    int perimeter = 2*(l+b);

    if( area>perimeter){
        cout<<"Area of rectangle is greater"<<endl;
    
    }
    else{
        cout<<"perimeter of rectangle is greater"<<endl;
    }

    return 0;
}