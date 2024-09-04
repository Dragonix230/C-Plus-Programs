#include <iostream>
using namespace std;

// Declare Base Class
class Base {
public:
    int a;
};

// Declare Derived Class
class Derived : public Base {
public:
    int b;
};

int main() {
    cout<<"Ishan Joshi";
    // Initialise a Derived class
    Derived obj;

    // Assign value to Derived class variable
    obj.b = 3;

    // Assign value to Base class variable via derived class
    obj.a = 4;

    cout << "Value from derived class: " << obj.b << endl;
    cout << "Value from base class: " << obj.a << endl;

    return 0;
}
