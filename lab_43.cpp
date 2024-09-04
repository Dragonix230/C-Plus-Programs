#include <iostream>
using namespace std;

class A {
public:
    int a;
    virtual void show() {
        a = 10;
    }
};

class B : public virtual A {};

class C : public virtual A {};

class D : public B, public C {};

int main() {
    cout<<"Ishan Joshi"<<endl;
    D object;
    // Call the virtual function
    object.show();
    // Access the member variable 'a'
    cout << "a = " << object.a << endl;

    return 0;
}