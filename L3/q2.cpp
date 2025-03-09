#include <iostream>
using namespace std;
int main()
{
    int x, i, sum = 0;
    cout << "enter number :";
    cin >> x;
    for (i = 1; i <= x; i++)
    { // for loop
        sum += i;
    }
    cout << "sum is " << sum << endl;
    return 0;
}