#include <iostream>
using namespace std;

class second; // Forward declaration

class first {
private:
    int x;

public:
    void getdata();
    void display();
    friend int sum(first, second);
};

class second {
private:
    int y;

public:
    void getdata();
    void display();
    friend int sum(first, second);
};

void first::getdata() {
    cout << "Enter a value for x: ";
    cin >> x;
}

void second::getdata() {
    cout << "Enter a value for y: ";
    cin >> y;
}

void first::display() {
    cout << "Entered number is (x) = " << x << endl;
}

void second::display() {
    cout << "Entered number is (y) = " << y << endl;
}

int sum(first one, second two) {
    int temp;
    temp = one.x + two.y;
    return temp;
}

int main() {
    cout <<"Ishan Joshi:";
    first a;
    second b;

    a.getdata();
    b.getdata();

    a.display();
    b.display();

    int total = sum(a, b);
    cout << "Sum of the two private data variables (x + y) = " << total << endl;

    return 0;
}