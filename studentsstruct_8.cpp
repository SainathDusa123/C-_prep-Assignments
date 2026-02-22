#include<iostream>
using namespace std;

struct student
{
    int rollno;
    char name[20];
    float marks;
};

void studentread(struct student &s)
    {
        cout<<"Enter roll number: ";
        cin>>s.rollno;
        cout<<"Enter name: ";
        cin.ignore();
        cin.getline(s.name,20);
        cout<<"Enter marks: ";
        cin>>s.marks;
        cout<<endl;
    }

    void studentdisplay(struct student s)
    {
        cout<<"Roll number: "<<s.rollno<<endl;
        cout<<"Name: "<<s.name<<endl;
        cout<<"Marks: "<<s.marks<<endl;
    }

    
int main()
{
    struct student s1;
    studentread(s1);
    studentdisplay(s1);

    return 0;
}