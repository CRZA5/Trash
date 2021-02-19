#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i;
    cout << "Enter a Digit\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        sum = sum + i * i;
    }
    cout << "Sum of squares: " << sum << endl;
    return 0;
}