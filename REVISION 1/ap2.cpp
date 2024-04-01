//Display this AP - 100,97,94,..upto all terms which are positive.
#include<iostream>
using namespace std;
int main(){
    int terms=100;
    while(terms>0){
        cout<<terms<<endl;
        terms-=3;
    }
    return 0;

}