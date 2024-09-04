#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    int* pt;
    pt = &a;

    cout << "The address where 'a' is stored is: " << pt << endl;
    cout << "The value stored at the address by dereferencing the pointer is: " << *pt << endl;

    return 0;
}