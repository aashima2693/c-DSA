//Calculating percentage of 5 subjects
#include <iostream>
using namespace std;
int main(){
    int sub1,sub2,sub3,sub4,sub5;
    float percentage;

         cout<<"enter subject marks";
         cin>>sub1>>sub2>>sub3>>sub4>>sub5;

       int totalMarks = sub1+sub2+sub3+sub4+sub5;
         percentage= totalMarks/5;

        cout<<"percentage:"<<percentage<<"%"<<endl;

        return 0;

}
