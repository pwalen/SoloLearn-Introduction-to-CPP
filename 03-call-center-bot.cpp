#include <iostream>
using namespace std;

int main()
{

    int number;
    cin >> number;
    switch (number)
    {
    case 1:
        cout << "Choose language";
        break;
    case 2:
        cout << "Contact the operator";
        break;
    case 3:
        cout << "Leave feedback";
        break;
    default:
        cout << "Unknown";
        break;
    }
}