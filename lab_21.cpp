#include <iostream>
using namespace std;

class student {
    int rno;
    char name[50];
    double fee;

public:
    // Constructor definition
    student() {
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";   
        cin >> fee;
    }   
    
    // Member function to display student details
    void display() {
        cout << endl << rno << "\t" << name << "\t" << fee;
    }
};

int main() {
    cout <<"Ishan Joshi:";
    student s; // Object creation, constructor gets called automatically
    s.display(); // Displaying student details
    return 0;
}