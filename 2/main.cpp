#include <iostream>
using namespace std;
int main()
{
    int Day;
    cout << "Program to print Day of the week\n";
    cout << "Enter a number to print name of the day\n";
    cin >> Day;
    switch (Day)
    {
    case 1:
        cout << "Sunday";
        break;
    case 2:
        cout << "Monday";
    case 3:
        cout << "Tuesday";
    case 4:
        cout << "Wednesday";
    case 5:
        cout << "Thursday";
    case 6:
        cout << "Friday";
    case 7:
        cout << "Saturday";
    default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}