#include <iostream>
using namespace std;

class Sample {
private:
    int x, y;

public:
    void getinfo() {
        cout << "Enter any two numbers: ";
        cin >> x >> y;
    }

    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "Sum = " << sum() << endl;
        cout << "Difference = " << diff() << endl;
        cout << "Product = " << mult() << endl;
        cout << "Quotient = " << div() << endl;
    }

    int sum() {
        return (x + y);
    }

    int diff() {
        return (x - y);
    }

    int mult() {
        return (x * y);
    }

    float div() {
        if (y != 0) {
            return (float)x / y;
        } else {
            cout << "Cannot divide by zero." << endl;
            return 0;
        }
    }
};

int main() {
    Sample obj1;
    obj1.getinfo();
    obj1.display();

    return 0;
}