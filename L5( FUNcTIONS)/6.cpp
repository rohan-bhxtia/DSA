#include <iostream>
using namespace std;
//calculate the sum of digits of a number 
int sumofdigits(int n){
    int digsum =0;
    
    while( n>0){
        int lastdig = n%10;
        n = n/10;
        digsum = digsum +lastdig;
    }
    return digsum;
    
}
int main(){
    int n;
    cout<< "enter number n: ";
    cin>>n;
    cout << "sum is : "<<sumofdigits(n)<<endl;
    return 0;
}