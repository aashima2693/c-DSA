//Write a program to check whether a character is an alphabet or not.
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character:"<<endl;
    cin>>ch;
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
         cout<<"It is an alphabet"<<endl;
    }
    else{
        cout<<"It is not an alphabet"<<endl;
    }
    return 0;
}