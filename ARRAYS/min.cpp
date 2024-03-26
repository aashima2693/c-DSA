//Find the minimum value out of all elements in the array.
#include<iostream>
using namespace std;
int main(){
    int array[5]={1,7,11,4,5};
    int min=array[0];
    for(int i=1;i<5;i++){
        if(array[i]<min){
            min=array[i];
        }
       
    }
    cout<<min<<endl;
    return 0;
}