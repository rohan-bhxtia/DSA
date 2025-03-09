// upper case check lower case check
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a ch: ";
    cin >> ch;
    if ('a' <= ch && ch <= 'z')
    {
        cout << "lower case" << endl;
    }
    else if ('A' <= ch && ch <= 'Z')
    {
        cout << "upper case" << endl;
    }
    else
    {
        cout << "not a letter" << endl;
    }
    return 0;
}