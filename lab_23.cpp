#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int x1, int y1) {
        x = x1;
        y = y1;
    }

    // Accessor functions to get x and y coordinates
    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
};

int main() {
    cout <<"Ishan Joshi:";
    // Constructor called with arguments 10 and 15
    Point p1(10, 15);
    
    // Access values assigned by constructor using accessor functions
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    return 0;
}