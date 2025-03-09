// simple intrest calculator
#include <iostream>
using namespace std;
int main()
{
    int P, T;
    float R;
    cout << "enter principle amount :";
    cin >> P;
    cout << "enter time :";
    cin >> T;
    cout << "enter rate :";
    cin >> R;
    float SI;
    SI = (P * T * R) / 100;
    cout << "simple intrest is :" << SI;
    return 0;
}
