#include <iostream>
using namespace std;

int main()
{
    int choice = 2;
    switch (choice)
    {
    case 1:
        cout << "one";
        break;
    case 2:
        cout << "two";
        break;
    case 3:
        cout << "three";
        break;
    default:
        cout << "invalid";
    }
}