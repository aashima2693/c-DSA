// Calculating Simple Interest
#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter the values of P R T:"<<endl;
    cin>>p>>r>>t;
    int si = (p*r*t)/100;
    cout<<"Simple Interest is:"<<si<<endl;
    return 0;
}