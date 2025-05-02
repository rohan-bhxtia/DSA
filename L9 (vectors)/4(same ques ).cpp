#include <iostream>
#include <vector>
using namespace std;

int uniqueElement(vector<int>& num){
    int sum =0 ;
  
    for(int val : num){
        sum ^= val;  
    }
    return sum;
}
int main(){
    vector<int> vector={3,2,2,6,3};
    cout<<"unique element is : "<<uniqueElement(vector)<<endl;

}

