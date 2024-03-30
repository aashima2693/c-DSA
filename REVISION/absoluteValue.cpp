//Given an integer Print the absolute value of that integer
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    if(num>0){
        cout<<"The absolute value is:"<<num<<endl;
    }

    else{
        cout<<"The absolute value is:"<<(-(num))<<endl;
    }
    return 0;
}