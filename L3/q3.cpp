#include <iostream>
using namespace std;
int main()
{
    int x, i, sum = 0;
    cout << "Enter a number: ";
    cin >> x;
    for (i = 1; i <= x; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << "Sum of odd numbers is: " << sum;
    return 0;
}