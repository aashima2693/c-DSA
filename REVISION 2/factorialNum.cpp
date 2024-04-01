//Print the factorial of a given number ‘n’
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int factorial=1;
    for(int i=1;i<=num;++i){
        factorial*=i;
        
           
    }
    cout<<factorial<<endl;
    return 0;
}