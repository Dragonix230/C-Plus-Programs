#include <iostream>
#include <string> // Include the <string> header for string usage
using namespace std;

class student {
    int rno;
    string name;
    double fee;

public:
    // Parameterized constructor declaration
    student(int, string, double);

    // Copy constructor declaration
    student(const student &t);

    void display();
};

// Parameterized constructor definition
student::student(int no, string n, double f) {
    rno = no;
    name = n;
    fee = f;
}

// Copy constructor definition
student::student(const student &t) {
    rno = t.rno;
    name = t.name;
    fee = t.fee;
}

void student::display() {
    cout << endl << rno << "\t" << name << "\t" << fee;
}

int main() {
    cout <<"Ishan Joshi:";
    // Creating object s using parameterized constructor
    student s(1001, "Ishan", 10000);
    s.display();

    // Creating object obj using copy constructor
    student obj(s);
    obj.display();

    return 0;
}