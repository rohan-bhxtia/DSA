// capacity of vectors .... sttatic vs dynamic memory  
#include <iostream>
#include <vector>
using namespace std ;
int main(){
    vector<int> vec;
    vec.push_back(20);
    vec.push_back(22);
    vec.push_back(24);
    vec.push_back(27);
    vec.push_back(25);
    vec.push_back(21);

    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
  



}

