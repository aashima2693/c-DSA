//Write a program to check whether a character is an alphabet or not
#include<iostream>
using namespace std;
int main(){
    char name;
    cout<<"enter  character"<<endl;
    cin>>name;

    if((name>='a' && name<='z')||(name>='A'&& name<='Z')){
        cout<<"It is an alphabet"<<endl;
    }
    else{
        cout<<"It is not an alphabet"<<endl;
    }
        return 0;
}
