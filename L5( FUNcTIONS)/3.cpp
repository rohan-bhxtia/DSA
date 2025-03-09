//minimum of two numbers 

#include <iostream>
using namespace std;

int min(int a, int b){
if (a<b){
    return a;}
else {
    return b;}
}

int main(){
    cout<< "minimum is : "<< min(5,7)<<endl;
    return 0;
    
}