#include<iostream>
using namespace std;


int main()
{
    int marks[5];
    cout<<"Enter the marks of student (marks/100):"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    int grade, Total = 0;
    for(int i=0;i<5;i++)
    {
        Total = Total + marks[i];
    }
    grade = Total/5;
    cout<<"Total marks of student is: "<<Total<<"/500"<<" and Grade marks is: "<<grade<<"/100"<<endl;
    if(grade >=90)
    {
        cout<<"Grade of student is EX"<<endl;
    }
    else if(grade >=80 && grade <90)
    {
        cout<<"Grade of student is A"<<endl;
    }
    else if(grade >=70 && grade <80)
    {
        cout<<"Grade of student is B"<<endl;
    }
    else if(grade >=60 && grade <70)
    {
        cout<<"Grade of student is C"<<endl;
    }
    else
    {
        cout<<"Grade of student is F"<<endl;
    }
    return 0;
}