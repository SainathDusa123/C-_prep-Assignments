#include <iostream>
#include <cctype>   // for tolower()
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);   // to allow spaces

    int count[26] = {0};   // array for 26 alphabets

    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {          // check if character is alphabet
            char ch = tolower(str[i]);  // convert to lowercase
            count[ch - 'a']++;          // map a-z to 0-25
        }
    }

    cout << "\nOccurrences of each alphabet:\n";

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            cout << char(i + 'a') << " : " << count[i] << endl;
        }
    }

    return 0;
}