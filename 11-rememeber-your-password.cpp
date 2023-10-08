#include <iostream>
using namespace std;

int main()
{

    string password, attempt;
    cin >> password >> attempt;

    // your code goes here
    if (attempt == password)
    {
        cout << "Welcome";
    }
    else
    {
        cout << "Try again";
    }
}