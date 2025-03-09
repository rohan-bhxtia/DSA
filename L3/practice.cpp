// sum of all numbers for 1 to n which are divisible by 3
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "enter number n:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "sum of numbers :" << sum << endl;
    return 0;
}