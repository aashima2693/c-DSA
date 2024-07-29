// Input a string of length n and count all the consonants in the given string’
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="abyteio";
    int count =0;
    for(int i=0;str[i]!=0;i++){
        if(str[i] !='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
            count++;
        }
    }
    cout<<count;
    return 0;
}