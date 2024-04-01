//WAP to print the sum of all the even digits of a given number.
//Sample Input : 4556
//Output: 10
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int sum=0;
    int digit;
    while(num>0){
        digit=num%10;
        if(digit%2==0){
        sum+=digit;
        }
        num/=10;
    }
    
    return 0;
}
