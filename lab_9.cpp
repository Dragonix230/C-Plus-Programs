#include <iostream>
using namespace std;

class Sample {
private:
    int x, y;

public:
    void getData(int a, int b) {
        x = a;
        y = b;
    }

    int sum() {
        return (x + y);
    }

    int diff() {
        return (x - y);
    }
};

int main() {
    Sample obj1;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    obj1.getData(num1, num2);

    cout << "Sum: " << obj1.sum() << endl;
    cout << "Difference: " << obj1.diff() << endl;

    return 0;
}