#include <iostream>
using namespace std;

class construct {
public:
    int a, b;

    // Default Constructor
    construct() {
        a = 10;
        b = 20;
        cout << a << b; // Outputting a and b directly in the constructor
    }
};

int main() {
    // Default constructor called automatically
    // when the object is created
    cout <<"Ishan Joshi";
    construct c;
    cout << "a: " << c.a << endl << "b: " << c.b;
    return 0;
}