// 1
// 21
// 321
// 4321
#include<iostream>
using namespace std;
int main (){
    int a,i,j;
    cout<<"enter a ;";
    cin>>a;
    for(i=0;i<a;i++){
        for(j=i+1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
}
return 0;
}