//Write a function that takes the radius of 
//a circle as an argument and returns its area
#include<iostream>
using namespace std;
float area(int radius,float p=3.14){
    float area=radius*radius*p;
    return area;
}
int main(){
    int r;
    cout<<"Enter the value of radius:"<<endl;
    cin>>r;
    
    cout<<area(r)<<endl;
    return 0;
}
