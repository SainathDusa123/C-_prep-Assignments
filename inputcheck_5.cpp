#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is an Uppercase letter." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is a Lowercase letter." << endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "The character is a Digit." << endl;
    }
    else {
        cout << "The character is a Special character." << endl;
    }

    return 0;
}