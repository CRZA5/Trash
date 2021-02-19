#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Program to find largest three digit number\n";
    cout << "Enter Three Digits\n";
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << a << " is big";
    else if (b > c)
        cout << b << " is big";
    else
        cout << c << " is big";
    return 0;
}