//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//You must implement a solution with a linear runtime complexity and use only constant extra space.
#include <iostream>
using namespace std;

void unique(int nums[], int sz){
    for(int i=0;i<sz;i++){
         bool isUnique =true;
        for(int j=0;j<sz;j++){                  
            if(i != j && nums[i]==nums[j]){
                isUnique = false;
                break;
            }                                             // ques asked for implement a soln with a linear runtime complexity 
        }                                                 // and use only constant extra space i.e dont use nested loops 
            if(isUnique){        
                cout<<nums[i]<<endl;
        
        }
    }
}
int main(){
int arr[]={1,2,3,7,7,3,2,1,1,2,3,4,4,3,2,1,8};
int sz =17;
unique(arr,sz);
return 0;
}