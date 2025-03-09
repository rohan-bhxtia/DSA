// Floyd's traingle pattern
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include <iostream>
using namespace std;
int main (){
    int a,i,j,num=1;
    cout<<"Enter the number of rows: ";
    cin>>a;
    for(i=1;i<=a;i++){
        for(j=1;j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}