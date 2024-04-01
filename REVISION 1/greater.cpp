//Given the radius of the circle predict whether numerically area of this 
//circle is larger than the circumference or not
#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"Enter the radius:"<<endl;
    cin>>r;
    int p=3.14;
    int area=p*r*r;
    int circumference=2*p*r;
    if(area>circumference){
        cout<<"Area of this circle is greater than its circumference"<<endl;
    }
    else{
        cout<<"Area of this circle is not greater than its circumference"<<endl;
    }
    return 0;
}