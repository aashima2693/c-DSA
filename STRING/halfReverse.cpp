//Input a string of even length and reverse the second half of the string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
      string str;
      cout<<"Enter six characters:";
      getline(cin,str);
      int n=str.length();
      reverse( str.begin()+n/2,str.end());
      cout<<str;
      return 0;
      


}