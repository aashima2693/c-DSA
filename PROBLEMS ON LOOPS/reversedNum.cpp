//WAP to print reverse of a given number.
#include <iostream>
using namespace std;
int main(){
    int num, reversedNum=0;
    cout<<"Enter the num"<<endl;
    cin>>num;
    while(num!=0){
          int digit = num%10;
          reversedNum=reversedNum*10+digit;
          num/=10;
    }
    cout<<"Reversed Num="<<reversedNum<<endl;
    return 0;
}
    
    