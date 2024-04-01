//Calculating percentage of 5 subjects
#include<iostream>
using namespace std;
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    cout<<"Enter marks:"<<endl;
    cin>>sub1>>sub2>>sub3>>sub4>>sub5;
    int totalMarks=sub1+sub2+sub3+sub4+sub5;
    int percentage = totalMarks/5;
    cout<<"The percentage is:"<<percentage<<"%"<<endl;

    return 0;
}