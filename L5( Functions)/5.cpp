// factorial of a number 
#include <iostream>
using namespace std ;

int factorial ( int n){
    int fact = 1;
    for (int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    cout<< "enter n: ";
    cin>> n;
    cout <<"factorial of number u entered is: "<< factorial(n) << endl;
    return 0;
}