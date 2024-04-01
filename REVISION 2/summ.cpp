//WAP to print sum of digits of a given number. 
#include<iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int digit;
    while(num>0){
          digit=num%10;
          sum+=digit;
          num/=10;
      
    }
    cout<<sum<<endl;
    return 0;
}
