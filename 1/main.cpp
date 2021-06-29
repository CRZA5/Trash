#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Program to find largest three digit number\n";
    cout << "Enter Three Digits\n";
    cin >> a >> b >> c;    
    int largest = a >= b ? a >= c ? a : c : b;
    cout << largest << " is the largest number";
    return 0;
}
