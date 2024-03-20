//Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
int num(int a,int b){
      if(a>b){
        int number=a;
        a=b;
        b=number;
      }
      if(a%2==0){
        a++;
      }
      cout<<"Odd numbers between"<< a <<"and"<< b <<"are"<<endl;
      for(int i=a;i<=b;i+=2){
        cout<<i<<"  "<<endl;
      }
}

int main(){
    int num1,num2;
    cout<<"Enter the numbers:"<<endl;
    cin>>num1>>num2;
    num(num1,num2);
    return 0;
}

