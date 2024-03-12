//Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line
#include <iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the values of (x1,y1)"<<endl;
    cin>>x1>>y1;
    cout<<"Enter the values of (x2,y2)"<<endl;
     cin>>x2>>y2;
     cout<<"Enter the values of (x3,y3)"<<endl;
     cin>>x3>>y3;

     float slope1 = (x2-x1)/(y2-y1);
     float  slope2 = (x3-x2)/(y3-y2);

     if(slope1==slope2){
        cout<<"They lie in a straight line"<<endl;
     }
     else{
        cout<<"They do not lie on a straight line"<<endl;
     }
     return 0;
      
      
}