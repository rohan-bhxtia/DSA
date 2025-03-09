#include <iostream>
using namespace std;
int main (){
    int a,i,j;
    cout<<"enter the count :";
    cin>>a;
    for(i=1;i<=a;i++){
        //spaces
        for(j=a-i;j>0;j--){
            cout<<" ";
        }
        cout<<"*";
        if(i != 1){
            for(j=1;j<(2*i-1);j++){
                cout<<" ";
            }
            cout<<"*";
        }
        //aage ka apne aap kr practice mein 
        cout<<endl;
    }
     

       
return 0;
}
