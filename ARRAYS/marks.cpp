//Given an array of marks of students,
//if mark of any student is less than 35 print its roll
//number. [roll number here refers to the index of the
//array.]

#include<iostream>
using namespace std;
int main(){
     int array[6];
     for(int i=0;i<6;i++){
        cout<<""<<endl;
        cin>>array[i];
     }

     int key = 35;
     for(int i=0;i<6;i++){
        if(array[i]<key){
            cout<<i<<endl;
        }
     }


    return 0;
}