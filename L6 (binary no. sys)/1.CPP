//decimal to binary conversion

#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans=0;
    int pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum=decNum/2;
        ans+= rem*pow;
        pow*=10;
    }
    return ans; //binary form
}
int main(){
    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" : "<<decToBinary(i)<<endl;
    }
    return 0;
}
