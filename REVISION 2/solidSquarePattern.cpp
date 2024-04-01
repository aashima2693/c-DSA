//Print the Solid Square  pattern 
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the values:"<<endl;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;

}