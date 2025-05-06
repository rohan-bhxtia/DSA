// return pain in sorted array with target sum .
//   ex. array ---> 2,7,11,15   target = 9
//       output ---> 2,7

#include <iostream>
#include <vector>
using namespace std ;

int main(){
    int target =9;
    int arr[4]={2,7,11,15};
    int n = 4;
    vector<int> ans;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ;j++){
            if( arr[i]+arr[j]==target){
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                return ans;
            }
        }
    }
    return ans;
}

