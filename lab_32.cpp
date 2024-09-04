#include <iostream>
using namespace std;

// Base Class
class Number {
protected:
    int num1, num2;

public:
    void getNumbers() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
};

// Derived Class inheriting from Base Class
class Sum : public Number {
public:
    void calculateSum() {
        cout << "Sum = " << num1 + num2 << endl;
    }
};

int main() {
    cout<<"Ishan Joshi";
    Sum obj;
    obj.getNumbers(); // Input two numbers
    obj.calculateSum(); // Calculate and display the sum
    return 0;
}