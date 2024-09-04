#include <iostream>
using namespace std;

class A {
public:
    void show_A() {
        cout << "class A" << endl;
    }
};

class B : public A {
public:
    void show_B() {
        cout << "class B" << endl;
    }
};

class C : public A {
public:
    void show_C() {
        cout << "class C" << endl;
    }
};

int main() {
    cout<<"Ishan Joshi";
    B b; // Creating an object of class B
    cout << "Calling from B: " << endl;
    b.show_B(); // Call function of class B
    b.show_A(); // Call function of class A (inherited function)

    C c; // Creating an object of class C
    cout << "Calling from C: " << endl;
    c.show_C(); // Call function of class C
    c.show_A(); // Call function of class A (inherited function)

    return 0;
}