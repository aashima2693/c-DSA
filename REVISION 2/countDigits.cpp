//WAP to count digits of a given number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int count=0;
    if(num==0){
        count=1;
    }
    else{
        while(num!=0){
            num/=10;
            count++;

        }
    }
    cout<<count<<endl;
    return 0;
}