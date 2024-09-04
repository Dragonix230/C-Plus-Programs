//write a program in c++ to find the are of circle by declaring private data member & public member  without passing argument and having no return type.
#include<iostream>
using namespace std;

class Circle {
private:
    double radius;

public:
    void setRadius() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }

    void calculateArea() {
        double area = 3.14*radius*radius;
        cout << "The area of the circle is: " << area << endl;
    }
};

int main() {
    
    Circle circle;          //object declaration
    circle.setRadius();     // member function calling
    circle.calculateArea();

    return 0;
}

