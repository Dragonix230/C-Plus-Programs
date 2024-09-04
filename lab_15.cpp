#include <iostream>
const int size = 5;

class Student {
private:
    int age[size];

public:
    void getAge();
    float calculateAverage();
};

void Student::getAge() {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter age of student " << (i + 1) << ": ";
        std::cin >> age[i];
    }
}

float Student::calculateAverage() {
    int total = 0;
    
    for (int i = 0; i < size; i++) {
        total += age[i];
    }

    return static_cast<float>(total) / size;
}

int main() {
    Student stu;
    stu.getAge();

    float averageAge = stu.calculateAverage();

    std::cout << "\nAverage age of the students: " << averageAge << std::endl;

    return 0;
}