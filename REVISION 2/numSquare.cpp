//Print the number square pattern
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the values"<<endl;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }

}