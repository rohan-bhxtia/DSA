// find smallest /largest in array 

#include <iostream>
using namespace std;

int main(){

    int arr[10]={2,34,54,12,87,65,43,6,-12,45};
    int largest = arr[0];
    int smallest = arr[0];
    for(int i=0 ; i<10;i++){
        if (arr[i]> largest) {
            largest = arr[i];
        }
        else if(arr[i]<smallest){
            smallest = arr[i];
        }
        
       
    }
    cout<<"largest number in array is : "<<largest<<endl;
    cout<<"smallest number in array is : "<<smallest<<endl;
    return 0;
}


// doing this is also right .. but as we are initiating same index in both smallest and largest .. it can be hectic to use ..
// to remove this issue use  INT_MAX and INT_MIN as (+infinity and -infinity respectively )
// this will help in comparing the value with these infinities .. rather than values in array 