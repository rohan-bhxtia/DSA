// 1
// 12
// 123
// 1234
#include <iostream>
using namespace std;
int main (){
    int a ,i,j;
    cout<<"enter a :";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=1;j<i+1;j++){
            cout<<j;
        }
        cout<<endl;
}
return 0;
}