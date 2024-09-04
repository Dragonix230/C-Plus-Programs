#include <iostream>
using namespace std;

class Test {
public:
    // User-defined Constructor
    Test() {
        cout << "\n Constructor executed";
    }

    // User-defined Destructor
    ~Test() {
        cout << "\n Destructor executed";
    }
};

int main() {
    cout <<"Ishan Joshi:";
    // Create multiple objects of the Test class
    Test t, t1, t2, t3;
    return 0;
}