#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;

public:
    void getdata();
    void putdata();
};

void Employee::getdata() {
    cout << "Enter Id: ";
    cin >> id;
    cout << "Enter Name: ";
    cin >> name;
}

void Employee::putdata() {
    cout << "Employee ID: " << id << ", Employee Name: " << name << endl;
}

int main() {
    Employee emp[30];
    int n, i;

    cout << "Enter Number of Employees: ";
    cin >> n;

    for (i = 0; i < n; i++)
        emp[i].getdata();

    cout << "Employee Data:\n";

    // Accessing the function
    for (i = 0; i < n; i++)
        emp[i].putdata();

    return 0;
}