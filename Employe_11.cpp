#include <iostream>
#include <string>

using namespace std;


struct Employee {
    string firstName;
    string lastName;
    double monthlySalary;
};


void emp_init(Employee* e) {
    cout << "Enter First Name: ";
    cin >> e->firstName;

    cout << "Enter Last Name: ";
    cin >> e->lastName;

    cout << "Enter Monthly Salary: ";
    cin >> e->monthlySalary;

  
    if (e->monthlySalary < 0) {
          e->monthlySalary = 0;
     }
}

void set_salary(Employee* e, double sal) {
    if (sal >= 0)
        e->monthlySalary = sal;
}


void emp_display(Employee* e) {
    cout << "\nEmployee Name: " 
         << e->firstName << " " 
         << e->lastName << endl;

    cout << "Monthly Salary: " 
         << e->monthlySalary << endl;

    cout << "Yearly Salary: " 
         << e->monthlySalary * 12 << endl;
}

int main() {
    Employee emp1, emp2;

    cout << "Enter details for Employee 1\n";
    emp_init(&emp1);

    cout << "\nEnter details for Employee 2\n";
    emp_init(&emp2);


    cout << "\n--- Before 10% Raise ---\n";
    emp_display(&emp1);
    emp_display(&emp2);


    set_salary(&emp1, emp1.monthlySalary * 1.10);
    set_salary(&emp2, emp2.monthlySalary * 1.10);


    cout << "\n--- After 10% Raise ---\n";
    emp_display(&emp1);
    emp_display(&emp2);

    return 0;
}