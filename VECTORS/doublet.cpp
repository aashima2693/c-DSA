//Find the doublet in the Array whose sum is equal to the given value
#include<iostream>
using namespace std;
int main(){
    int array[5];
    for(int i=0;i<5;i++){
        cout<<" "<<endl;
        cin>>array[i];
    }
     int x;
     cout<<"Enter the sum:";
     cin>>x;
      

    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(x-array[i]==array[j]){
                cout<<"("<<array[i]<<","<<array[j]<<")";
            }
            
        }
        
    }
    return 0;
    
}
