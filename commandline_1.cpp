#include <iostream>
#include <cstdlib>   
using namespace std;

int main(int argc, char* argv[]) {

    if (argc < 2) {
        cout << "Please enter numbers as command line arguments." << endl;
        return 1;
    }

    int max = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {
        int num = atoi(argv[i]);

        if (num > max) {
            max = num;
        }
    }

    cout << "Maximum number is: " << max << endl;

    return 0;
}