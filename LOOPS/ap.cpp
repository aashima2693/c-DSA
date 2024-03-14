//Display this AP - 100,97,94,..upto all terms which are positive. N
#include<iostream>
using namespace std;
int main(){
    int term=100;
    while(term>0){
        cout<<term<<endl;
        term-= 3;
    }
    return 0;
}