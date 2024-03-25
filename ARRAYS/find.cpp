//Find the element x in the array . Take array and x as input.
#include<iostream>
using namespace std;
int main(){
    int array[5];
    for(int i=0;i<5;i++){
        cout<<"Enter";
        cin>>array[i];
    }

    int x;
    cout<<"Enter the value you want to find:"<<endl;
    cin>>x;

    for(int i=0;i<6;i++){
        if(array[i]==x){
            cout<<i<<endl;
            break;
        }
        
    
    }
    return 0;
}