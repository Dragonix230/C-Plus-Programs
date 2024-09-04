#include <iostream>
using namespace std;

class Test {
public:
    // Constructor
    Test() {
        cout << "\n abc..........";
    }

    // Destructor
    ~Test() {
        cout << "\nDestructor executed";
    }
};

int main() {
    cout <<"Ishan Joshi:";
    Test t;

    return 0;
}