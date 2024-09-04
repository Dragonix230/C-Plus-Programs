#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function
    virtual void print() {
        cout << "print base class" << endl;
    }

    // Non-virtual function
    void show() {
        cout << "show base class" << endl;
    }
};

class Derived : public Base {
public:
    // Overriding the virtual function
    void print() override {
        cout << "print derived class" << endl;
    }

    // Hiding the non-virtual function (not necessary but included for demonstration)
    void show() {
        cout << "show derived class" << endl;
    }
};

int main() {
    Base *bptr;
    Derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();

    return 0;
}