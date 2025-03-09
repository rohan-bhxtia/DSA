// abc
// abc
// abc
#include <iostream>
using namespace std;
int main (){
    int n,i,j;
    cout<<"enter number n:";
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<char('A'+j);
        }
        cout<<endl;
}
return 0;
}