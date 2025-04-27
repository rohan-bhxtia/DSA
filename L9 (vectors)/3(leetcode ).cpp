//given a non empty array of integers (nums), every element appears twice 

#include <iostream>
using namespace std;

void unique(int nums[], int sz){
    for(int i=0;i<sz;i++){
         bool isUnique =true;
        for(int j=0;j<sz;j++){
            if(i != j && nums[i]==nums[j]){
                isUnique = false;
                break;

            }
        }
            if(isUnique){        
                cout<<nums[i]<<endl;
        
        }
    }
}
int main(){
int arr[]={1,2,3,4,4,3,2,1,1,2,3,4,4,3,2,1,8};
int sz =17;
unique(arr,sz);
return 0;
}