// Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or no
#include<iostream>
using namespace std;
int main(){
    float p=3.14;
    float r;
      cout<<"enter the value of r="<<endl;
      cin>>r;

      float area = r*r*p;
      float circumference = 2*r*p;

      if( area>circumference){
        cout<<"Area of circle is greater than its circumference"<<endl;
      }

      else{
        cout<<"Area of circle is not greater than its circumference"<<endl;
      }

      return 0;

}
