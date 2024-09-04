#include <iostream>
const int size = 5;

class student {
private:
    int roll_no;
    int marks[size];
public:
    void getdata();
    void tot_marks();
};

void student::getdata() {
    std::cout << "\nEnter roll no: ";
    std::cin >> roll_no;
    std::cout << "\nEntered roll no is: " << roll_no;
    for (int i = 0; i < size; i++) {
        std::cout << "Enter marks in subject " << (i + 1) << ": ";
        std::cin >> marks[i];
    }
}

void student::tot_marks() {
    int total = 0;
    for (int i = 0; i < size; i++)
        total += marks[i];

    std::cout << "\n\nTotal marks: " << total;
}

int main() {
    student stu;
    stu.getdata();
    stu.tot_marks();
    return 0;
}