// practice questions 

//WAF to calculate the sum and product of all numbers in an array 

#include <iostream>
using namespace std;

void sum_prod(int arr[],int sz){
    int sum=0;
    int prod =1;
    for(int i=0;i<sz;i++){
        sum += arr[i];
        prod *= arr[i];
   }
   cout<<sum<<endl;
   cout<<prod<<endl;

}
int main(){
    int arr[]={1,2,3,4,5};
    int sz = 5;
    sum_prod(arr,5);
    return 0;
}