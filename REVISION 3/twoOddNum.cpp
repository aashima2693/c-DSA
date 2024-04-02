//Given two numbers a and b, write a 
//function to print all odd numbers between them.
#include<iostream>
using namespace std;
int oddNum(int c,int d){
    for(int i=c;i<d-1;i++){
        if(i%2!=0){
            cout<<i<<endl;
        }
        cout<<"";
    }

}
int main(){
    int a,b;
    cout<<"Enter the values:"<<endl;
    cin>>a>>b;
    cout<<oddNum(a,b);
    return 0;

}
