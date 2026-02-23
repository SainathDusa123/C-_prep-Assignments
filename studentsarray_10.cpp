#include<iostream>
#include<cstring>
using namespace std;

int compare(const void *a, const void *b)
{
    return strcmp((char*)a, (char*)b);
}


int main()
{
    char students[10][50];
    cout<<"Enter the names of 10 students: "<<endl;
    for(int i=0; i<10; i++)
    {
        cin.getline(students[i], 50);
    }

    qsort(students, 10, sizeof(students[0]), compare);

     cout<<"The names of the students in sorted order are: "<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<students[i]<<endl;
    }

    return 0;
}