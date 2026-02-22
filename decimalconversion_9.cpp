#include<iostream>
using namespace std;

void printoctal(int n)
{
   
    if (n == 0)
    {
        return;
    }
    printoctal(n / 8);
     cout << n % 8;
  
}

void printhexadecimal(int n)
{
    
    if (n == 0)
    {
        return;
    }
    printhexadecimal(n / 16);
    int remainder = n % 16;
  
    if (remainder < 10)
        cout << remainder;
    else
        cout << char(remainder - 10 + 'A');

}

void printbinary(int n)
{
    cout << "Binary representation: ";
    if(n == 0)
    {
        cout << 0;
        return;
    }

    int size = sizeof(int) * 8;
    bool start = false;
    for(int i = size - 1; i >= 0; i--)
    {
        int bit = (n >> i) & 1;

        if(bit == 1)
            start = true;

        if(start)
            cout << bit;
}
cout <<endl;
}

int main()
{
    int dec;
    cout<<"Enter a decimal number: ";
    cin>>dec;
     printbinary(dec);
     cout << "Octal representation: ";
     printoctal(dec);
     cout << endl;
     cout << "Hexadecimal representation: ";
     printhexadecimal(dec);
     cout << endl;

    return 0;
}