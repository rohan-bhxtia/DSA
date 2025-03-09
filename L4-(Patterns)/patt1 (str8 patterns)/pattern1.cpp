//star square pattern or 123,123,123 patern
#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"ENTER NUMBER :";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<j;
        }
      cout<<endl;
    }
    return 0;
}