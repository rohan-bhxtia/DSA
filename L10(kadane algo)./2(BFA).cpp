//Brute force approach 
// Maximum subarray sum
 
#include <iostream>
#include <climits>
using namespace std ;
int main(){
    int n=5 ;
    int arr[5]={1,2,3,4,5};

    int max_sum =INT_MIN; 

    for( int st=0 ; st<n ; st++){
        int currentSum =0;
        for(int end=st ; end <n ; end++){
            currentSum += arr[end];
            max_sum = max(currentSum,max_sum);
        }
    }

    cout<< max_sum<<endl;
    return 0;
    


}