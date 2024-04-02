//Write a function to count the number 
//of digits in a number and then print the square of their number.
#include<iostream>
using namespace std;
int count(int a){
    int count=0;
   while(a!=0){
    a/=10;
    count++;
   }    
    return (count);

}
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<count(num);
    return 0;
}