// ABC
// DEF
// GHI
#include <iostream>
using namespace std;
int main (){
    int n,i,j;
    char ch='A';
    cout<<"Enter the number of rows: ";
    cin>>n;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
}
return 0;
}