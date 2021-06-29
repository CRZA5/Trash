#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cout << "Enter a positive number\n";
    cin >> n;
    string numStr = to_string(n);
    string revStr = to_string(n);
    reverse(revStr.begin(), revStr.end());
    cout << "The reverse of the number is: " << revStr << endl;
    cout << (!numStr.compare(revStr) ? "The number is a palindrome" : "The number is not a palindrome");
    return 0;
}
