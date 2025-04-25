// print the index or array where smallest and largest values are stored 

#include <iostream>
#include <climits>   //use this header for int_max and int_min macros...
using namespace std;
int main(){

    int size = 28;
    int arr[size]= {2,4,3,-5,7,5,8,87,6,87,65,46,-2,-56,78,-67,88,-76,98,57,54,22,75,75,98,65,44,3,65};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int smallestIndex = -1;
    int largestIndex = -1;

    for ( int i =0 ; i<size;i++){
        if ( smallest > arr[i]){
            smallest = arr[i];
            smallestIndex =i;

        }
        if(largest < arr[i]){
            largest = arr[i];
            largestIndex = i;
        }
        }
        cout<<"smallest number in array is :"<<smallest<<" at index "<<smallestIndex<<endl;
        cout<<"largest number in array is :"<<largest<<" at index "<<largestIndex<<endl;
        return 0;


    }

