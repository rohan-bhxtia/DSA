// A
// BB
// CCC
// DDDD
#include<iostream>
using namespace std;
int main (){
    int a,i,j;
   
    cout<<"enter number a :";
    cin>>a;
    for(i=0;i<a;i++){
        for(j=1;j<=i+1;j++){
            cout<<char('A'+i);
        }
        cout<<endl;
    }
    return 0;
}