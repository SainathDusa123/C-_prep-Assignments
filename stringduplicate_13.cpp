#include <iostream>
#include <cstring>   // for strcmp

using namespace std;

int main() {
    
    // Declare and initialize array of char*
    const char* arr[] = {
        "apple",
        "banana",
        "orange",
        "apple",
        "grapes",
        "banana"
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Duplicate strings are:\n";

    // Compare each string with others
    for (int i = 0; i < n; i++) {
        int count = 1;

        // Check if already printed
        bool alreadyPrinted = false;
        for (int k = 0; k < i; k++) {
            if (strcmp(arr[i], arr[k]) == 0) {
                alreadyPrinted = true;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) == 0) {
                count++;
            }
        }

        if (count > 1) {
            cout << arr[i] << endl;
        }
    }

    return 0;
}