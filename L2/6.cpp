// reverse of two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "enter number a :";
    cin >> a;
    cout << "enter number b:";
    cin >> b;
    cout << "final number is :" << a << b << endl;
    // swapping numbers
    temp = a;
    a = b;
    b = temp;
    cout << "reverse of number is:" << a << b << endl;
    return 0;
}