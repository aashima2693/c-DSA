//Write a function that takes the radius of a circle as an argument and returns its area
#include<iostream>
using namespace std;
float area(int r,float p =3.14){
    return (p*r*r);
}
int main(){
    int a;
    cout<<"Enter the radius:"<<endl;
    cin>>a;
    cout<<area(a);
    return 0;
}
