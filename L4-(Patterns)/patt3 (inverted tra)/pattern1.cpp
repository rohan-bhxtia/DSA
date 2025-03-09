// 1111
//  222
//   33
//    4
#include <iostream>
using namespace std;
int main (){
    int a,i,j;   
    cout<<"enter number of rows :";
    cin>>a;
    for(i=0;i<a;i++){
        //spaces
        for(j=0;j<i;j++){
            cout<<" ";
        }
        //nums
        for( j=0;j<a-i;j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}
            
