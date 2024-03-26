//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main(){
    int array[5]={1,5,3,9,4};
    int sum=1;
    for(int i=0;i<5;i++){
       sum*=array[i];
       
    }
    cout<<sum<<endl;
    return 0;

}