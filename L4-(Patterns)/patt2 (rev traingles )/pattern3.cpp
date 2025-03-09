// Floyd's triangle character  version
// A
// B C 
// D E F 
// G H I J
#include <iostream>
using namespace std;
int main (){
    int a,i,j;
    char ch='A';
    cout<<"enter number a :";
    cin>>a;
    for (i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            cout<<ch++<<" ";
        }
        cout<<endl;
    }
    return 0;
}
