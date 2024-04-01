//WAP to print reverse of a given number.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int reversedNum=0;
    int digit;
    while(num!=0){
        digit=num%10;
        reversedNum=reversedNum*10+digit;
        num/=10;
    }
    cout<<reversedNum<<endl;
    return 0;
} 