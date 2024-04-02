// Write a program to find the sum of two numbers using pointers
#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter the numbers:"<<endl;
    cin>>num1>>num2;
    int *ptr1=&num1;
    int *ptr2=&num2;
    int sum;
    int*ptr3=&sum;
    *ptr3=*ptr1 + *ptr2;
    cout<<*ptr3<<endl;
    return 0;
}