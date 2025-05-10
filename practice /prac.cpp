#include <iostream>
using namespace std ;
int main(){
    int n=4 ;
    for(int i =1 ; i<=n;i++){
        //for space 
        for(int j=n;j>=i;j--){
            cout<<"*";
        }
        //for numbers first half pyramid
        for(int j = 1;j<=i;j++){  
            cout<<j;
        }
        //for numbers second half pyramind
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}