// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *
#include <iostream>
using namespace std;
int main(){
    int a,i,j;
    cout<<" enter a:";
    cin>>a;
    for(i=1;i<=a;i++){
        //for first quad star
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        //for spaces
        for(j=2*(a-i);j>=1;j--){
            cout<<" ";
        }
        //for 2nd quad stars
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
   
    //for lower butterfly
    //for 3rd qyad stars
    for(i=1;i<=a;i++){
        for(j=a;j>=i;j--){
            cout<<"*";
        }
        //for spaces
        for(j=0;j<2*(i-1);j++){
            cout<<" ";
        }
        //for 4th quad stars
        for(j=a;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}