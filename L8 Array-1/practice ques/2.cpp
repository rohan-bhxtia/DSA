//WAF to swap the max and min of an array 

#include <iostream>
using namespace std;

void swapMinMax(int arr[],int sz){
    int big_ind=0;
    int small_ind = 0;
    for(int i =0 ;i<sz;i++){
        if(arr[small_ind] < arr[i]){
            small_ind = i;
        }
        if(arr[big_ind] > arr[i]){
            big_ind = i;
        }
        
    }
    swap(arr[small_ind],arr[big_ind]);

    }

    int main(){
        int arr[]= {5,2,3,4,1};
        int sz = 5;
        swapMinMax(arr,sz);
        for(int i=0;i<sz;i++){
            cout<<arr[i]<<" ";

        }
        cout<<endl;
        return 0;
    }
