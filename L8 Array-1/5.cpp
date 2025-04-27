// reverse an array 

#include <iostream>
using namespace std;
                                                           // 2 pointer approach 
 
void reverse_arr(int arr[],int size){
    int start =0;
    int end = size-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

    int main(){
        int arr[]= {2,5,4,6,4,3,7,4};
        int size =8;
        reverse_arr(arr,size);

        for(int i=0; i<size;i++){
            cout<< arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
    
   
