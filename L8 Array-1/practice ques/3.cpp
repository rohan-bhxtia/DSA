//WAF to ptint all the unique values in an array 

#include <iostream>
using namespace std;

void unique(int arr[],int sz){
    for(int i=0;i<sz;i++){
        bool isUnique =true;
        for(int j=1;j<sz;j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique=false;
                break;
            }
            else{
                cout<<arr[i]<<" ";
            }
        }
        
    }
    cout<<endl;

}
int main(){
    int arr[]={1,2,1,2,3};
    int sz = 5;
    unique(arr,sz);
    return 0;
}