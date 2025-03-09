// factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int a, i, factorial = 1;
    cout << "Enter number a : ";
    cin >> a;
    for (i = a; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    cout << factorial;
    return 0;
}