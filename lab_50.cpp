#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout<<"Ishan Joshi"<<endl;
    // Creating a design using setw and setprecision
    cout << setw(10) << setprecision(3) << 3.14159 << endl;
    cout << setw(15) << setprecision(4) << 123.4567 << endl;
    cout << setw(20) << setprecision(5) << 9876.54321 << endl;

    return 0;
}
