#include <iostream>

using namespace std;

int main() {
    int *p;
    int value = 80;
    p = &value;  // Assigning the address of 'value' to the pointer p

    cout << "The value stored at the address by dereferencing the pointer is: " << *p << endl;

    return 0;
}