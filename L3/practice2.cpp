// print factorial of a number

#include <iostream>
using namespace std;
int main()
{
    int x, factorial = 1;
    cout << "enter number x :";
    cin >> x;
    int i;
    for (i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    cout << "factorial of x is :" << factorial << endl;
    return 0;
}