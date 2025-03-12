#include <iostream>
using namespace std ;
//just for basic contribution 
int BinNum( int BinNum){
    int ans = 0;
    int pow =1;
    
    while( BinNum>0){
        int rem = BinNum%10;
        BinNum /= 10;
        ans = ans +(rem*pow );
        pow = pow*2;
    }
    return ans;
}

int main(){
    int n;
    cout<<" enter ur binary number: ";
    cin>>n;
    cout<<"ur decimal number is: "<< BinNum(n)<<endl;
    return 0;
}