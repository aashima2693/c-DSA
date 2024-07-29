#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target;
    cout<<"Enter the element :";
    cin>>target;
    vector<int>v;
    int n;
    cout<<"Enter the size of vector:";
    cin>>n;

    cout<<"Enter the elements of vector:";
    for(int i=1;i<=v.size();i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==target){
                cout<<"("<<i<<","<<j<<")";
            }
        }
    }
    return 0;
}