//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter :"<<endl;
    cin>>n;
    int term=4;
    int commonDifference=3;
    for(int i=0;i<=n;i++){
        cout<<" "<<term+commonDifference*i;
    }
    return 0;
}