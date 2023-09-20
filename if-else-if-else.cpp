#include <iostream>
using namespace std;

int main() {
    int age = 24;
    if (age >= 65) {
        cout << "Senior";
    }
    else{
        if (age >= 18) {
            cout << "Adult";
        }
        else{
            cout << "Child";
        }
    }
}
