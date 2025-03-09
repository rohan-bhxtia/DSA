// 123
// 456
// 789
#include <iostream>
using namespace std;
int main (){
    int n,i,j,num=0;
    cout<<"Enter the number of rows: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<num<<" ";
            num++;
            }
            cout<<endl;
            }
            return 0;
            
}