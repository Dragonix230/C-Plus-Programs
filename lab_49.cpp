#include <iostream>
#include <iomanip> // Required for setprecision

using namespace std;

int main() {
    cout<<"Ishan Joshi"<<endl;
    double num1 = 123.456789;
    double num2 = 987.654321;

    // Printing numbers with default precision
    cout << "Default precision:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;

    // Printing numbers with precision set to 4
    cout << "\nPrecision set to 4:" << endl;
    cout << "Number 1: " << setprecision(4) << num1 << endl;
    cout << "Number 2: " << setprecision(4) << num2 << endl;

    // Printing numbers with precision set to 2
    cout << "\nPrecision set to 2:" << endl;
    cout << "Number 1: " << setprecision(2) << num1 << endl;
    cout << "Number 2: " << setprecision(2) << num2 << endl;

    return 0;
}
