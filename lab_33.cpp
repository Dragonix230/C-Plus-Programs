#include <iostream>
using namespace std;

class Person {
private:
    int id;
    string name;

public:
    void set_p() {
        cout << "Enter the Id: ";
        cin >> id;
        cout << "Enter the Name: ";
        cin >> name;
    }

    void display_p() {
        cout << endl << "Id: " << id << "\nName: " << name << endl;
    }
};

class Student : private Person {
private:
    string course;
    int fee;

public:
    void set_s() {
        set_p(); // Accessing set_p() from base class Person
        cout << "Enter the Course Name: ";
        cin >> course;
        cout << "Enter the Course Fee: ";
        cin >> fee;
    }

    void display_s() {
        display_p(); // Accessing display_p() from base class Person
        cout << "Course: " << course << "\nFee: " << fee << endl;
    }
};

int main() {
    cout<<"Ishan Joshi";
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}