#include <iostream>
using namespace std;

class sample {
private:
    int x;

public:
    void getdata();
    friend void display(sample);
};

void sample::getdata() {
    cout << "Enter a value for x: ";
    cin >> x;
}

void display(sample abc) {
    cout << "Entered number is: " << abc.x << endl;
}

int main() {
    cout <<"Ishan Joshi:";
    sample obj;
    obj.getdata();
    cout << "Accessing the private data by non-member function:\n";
    display(obj);

    return 0;
}