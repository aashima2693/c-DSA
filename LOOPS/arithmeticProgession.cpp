//Display this AP - 1,3,5,7,9.. upto ‘n’ terms.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of terms:"<<endl;
    cin>>n;
    int firstTerm=1;
    int commonDifference =2;

        for(int i=0;i<=n;i++){
        cout<<" "<<firstTerm+i*commonDifference<<endl;

    }
    return 0;

}
