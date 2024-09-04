#include <iostream>

using namespace std;

class Student {
protected:
    int ages[100]; // Assuming a maximum of 100 students
    int mathsMarks[100];
    int size;
public:
    Student(int n) : size(n) {}

    void inputDetails() {
        cout << "Enter ages and marks in Maths for " << size << " students:" << endl;
        for (int i = 0; i < size; ++i) {
            cout << "Student " << i + 1 << " Age: ";
            cin >> ages[i];
            cout << "Student " << i + 1 << " Maths Marks: ";
            cin >> mathsMarks[i];
        }
    }

    double calculateAverageAge() {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += ages[i];
        }
        return static_cast<double>(sum) / size;
    }

    double calculateAverageMathsMarks() {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += mathsMarks[i];
        }
        return static_cast<double>(sum) / size;
    }
};

int main() {
    cout<<"Ishan Joshi";
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student student(n);
    student.inputDetails();

    cout << "Average age of the students: " << student.calculateAverageAge() << endl;
    cout << "Average marks in Maths: " << student.calculateAverageMathsMarks() << endl;

    return 0;
}