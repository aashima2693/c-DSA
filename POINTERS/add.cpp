#include<iostream>
using namespace std;
int main(){
    int x , y;
    cout<<"Enter the values:"<<endl;
    cin>>x>>y;
    int *ptrx =&x;
      int *ptry =&y;

      int result;
      
      int *ptr=&result;

      *ptr = *ptrx + *ptry;

      cout<<"RESULT="<<*ptr<<endl;

    
    return 0;
}