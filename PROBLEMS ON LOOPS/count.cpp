//WAP to count digits of a given number
#include <iostream>
using namespace std;
int main(){
    int num,count=0;
    cout<<"Enter the num:"<<endl;
    cin>>num;
    if(num==0){
        count=1;
    }
    else{
        while(num!=0){
            num/=10;
            count++;
        }
    }
    cout<<"number of digits="<<count<<endl;
    return 0;
}