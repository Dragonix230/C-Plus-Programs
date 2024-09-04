#include <iostream>
#include <string>
using namespace std;

// Base Class
class Employee {
private:
    string name;
    double salary;

public:
    // Function to set name and salary
    void setData() {
        cout << "Enter name of employee: ";
        cin >> name;
        cout << "Enter salary of employee: ";
        cin >> salary;
    }

    // Function to display name and salary
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Derived Class inheriting privately from Employee
class EmployeeDetails : private Employee {
public:
    // Function to display name and salary of employee
    void displayDetails() {
        setData(); // Accessing setData() from base class Employee
        displayData(); // Accessing displayData() from base class Employee
    }
};

int main() {
    cout<<"Ishan Joshi";
    EmployeeDetails emp;
    emp.displayDetails();
    return 0;
}