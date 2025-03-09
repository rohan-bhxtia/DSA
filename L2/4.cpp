// largest of 3 numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter number a:";
    cin >> a;
    cout << "enter nummber b:";
    cin >> b;
    cout << "enter number c:";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "largest number is " << a;
    }
    else if (b > a && b > c)
    {
        cout << "largest number is :" << b;
    }
    else
    { // ELSE KE SAATH KABHI CONDITION NHI LIKHTE
        cout << "largest number is :" << c;
    }

    return 0;
}