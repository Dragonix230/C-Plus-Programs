#include <iostream>
using namespace std;

// Base Class
class Student {
private:
    int marks1, marks2;

public:
    void setMarks() {
        cout << "Enter marks of first subject: ";
        cin >> marks1;
        cout << "Enter marks of second subject: ";
        cin >> marks2;
    }

    // Function to calculate average marks
    float calculateAverage() {
        // Casting one operand to float to perform floating-point division
        return static_cast<float>(marks1 + marks2) / 2.0f;
    }
};

// Derived Class inheriting privately from Student
class AverageCalculator : private Student {
public:
    void calculateAndDisplayAverage() {
        setMarks(); // Accessing setMarks() from base class Student

        // Calculate average marks
        float average = calculateAverage(); // Accessing calculateAverage() from base class Student
        cout << "Average marks: " << average << endl;
    }
};

int main() {
    cout << "Ishan Joshi";
    AverageCalculator obj;
    obj.calculateAndDisplayAverage();
    return 0;
}