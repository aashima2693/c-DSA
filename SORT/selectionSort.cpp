#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[minindex]){
                minindex=j;
            }
        }
        swap(v[i],v[minindex]);
    }
}
 int main(){
        vector<int> v={11,77,44,55,66};
        selectionsort(v);
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }