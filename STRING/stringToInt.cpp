// Input a string of length less than 10 and convert it into integer without using builtin function.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter less than 10 elements:"<<endl;
    getline(cin,str);
    if(str.length()<10){
      int num=stoi(str);
      cout<<"Converted integer:"<<num<<endl;
    }
    else{
        cout<<"Invaild input.Please enter less than 10 elements.";
    }
    return 0;
}