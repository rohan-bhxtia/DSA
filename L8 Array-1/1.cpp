#include <iostream>
using namespace std;
int main(){
    
    int size =5;  //initialised the size 
    int marks[size]; 

    for (int i=0 ; i<size;i++ ){
        cin>> marks[i];             // without writing cout .. we took the input .. cin helps in taking input 
        cout<<marks[i]<<endl;   
    }
    return 0;
}