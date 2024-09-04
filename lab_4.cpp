#include<iostream>
using namespace std;
class Circle{
    private:
    double radius;
    public:
    void setRadius() {
        cout << "Enter the radius of the circle: ";
        cin >> radius;
    }
    double area() {
        return 3.14 * radius * radius;
    }
};
int main() {
    Circle A;
    A.setRadius();
    cout << "The area of the circle is: "<<A.area() << endl;

    return 0;
}