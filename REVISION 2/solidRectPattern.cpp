//Print the solid reactangle pattern
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the values:"<<endl;
    cin>>m>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}