//       1 
//     1 2 1 
//   1 2 3 2 1 
// 1 2 3 4 3 2 1 
#include <iostream>
using namespace std;
int main()
{
    int a, i, j;
    cout << "enter number a:";
    cin >> a;
    for (i = 1; i <= a; i++)
    {
        for (j = a - i; j > 0; j--)
        {
            cout << "  ";
        }
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        //numbers
        for(j=i-1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}