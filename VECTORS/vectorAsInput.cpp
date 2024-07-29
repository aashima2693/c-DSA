//Write a program that takes n integers as input from the user and stores them in a vector.Print the 
//vector using a loop.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v;
    int n;
    int num;
    cout<<"Enter the number of elements: ";
    cin>>n; 

    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>num;
        v.push_back(num);
    }
    cout<<"Vector is:";
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}