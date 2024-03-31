//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
#include<iostream>
using namespace std;
int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter the valuesof x1,y1,x2,y2,x3,y3:"<<endl;
    cin>>x1>>x2>>x3>>y1>>y2>>y3;
    float slope1=(x2-x1)/(y2-y1);
    float slope2=(x3-x2)/(y3-y2);
    if(slope1==slope2){
        cout<<"The points lie in the same line"<<endl;
    }
    else{
        cout<<"The points do not lie in the same line"<<endl;
    }
    return 0;

}