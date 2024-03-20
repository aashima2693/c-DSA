// Write a function to count the number of digits in a number and then print the square of their number
#include<iostream>
using namespace std;
int num(int a){
    int count =0;
    while(a!=0){
        a/=10;
        count++;
    }
    return count;
}

int square(int a){
    int digitCount=num(a);
    int squareOfDigits= digitCount*digitCount;
    cout<<"Square of number of digits is="<<squareOfDigits<<endl;

}

int main(){
    int number;
    cout<<"Enter the number"<<endl;
    cin>>number;
    square(number);
    return 0;

}
