// linear_search algo

#include <iostream>
using namespace std ;

int main(){
int arr[6] ={1,5,3,8,4,7};
for (int i =0;i<=5;i++){
    if(arr[i]==20){
        cout<<"found at index: "<< i<<endl;
        break;    // cuts 
    }
    else{
        cout<<"didnt found "<<endl;
        break;                              //normally cuts 
    }
}
return 0;
}