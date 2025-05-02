//Brute force approach 
// Maximum subarray sum
 
#include <iostream>
using namespace std ;
int main(){
    int n=5 ;
    int arr[5]={1,2,3,4,5};
    for( int st=0 ; st<n ; st++){
        int currentSum =0;
        for(int end=st ; st <n ; st++){
            currentSum += arr[end];
        }

    }
    cout<< currentSum<<endl;
    return 0;
    


}