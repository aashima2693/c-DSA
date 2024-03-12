//Given an integer Print the absolute value of that integer
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the value of a"<<endl;
    cin>>a;

      if (a>0){
        cout<<"Absolute value is=" <<a<<endl;
      }

      else if (a<0){
        cout <<"Absolute value is=" <<-a<<endl;
      }

      return 0;
}