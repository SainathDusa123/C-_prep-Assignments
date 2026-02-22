#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char const *argv[])
{
    int num = atoi(argv[1]);
   
    for (int i = 1; i <= 10; i++) {
            cout << i * num << "\t";
        cout << endl;
    }

    return 0;
}