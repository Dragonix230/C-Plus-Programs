#include <iostream>
using namespace std;

class sample {
private:
    int x;
    friend void display(sample);

public:
    void getdata();
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