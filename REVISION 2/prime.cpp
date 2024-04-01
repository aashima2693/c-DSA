//WAP to check if a number is prime or not (use of break statement)
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    for(int i=2;i<=num;i++){
        if(num%i==0){
            cout<<"It is a prime number."<<endl;
            break;
        }
        else{
            cout<<"It is not a prime number."<<endl;
        }
    }
    return 0;
}