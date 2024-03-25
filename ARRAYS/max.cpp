//Find the maximum value out of all the elements in the array.
#include<iostream>
using namespace std;
int main(){
    int array[5]={1,7,11,4,5};
    int max=array[0];
    for(int i=1;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
       
    }
    cout<<max<<endl;
    return 0;
    
    

}