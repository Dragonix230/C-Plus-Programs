#include<iostream>
#include<string>
using namespace std;
class student {
public:
    void details(int x) {
        cout << "Roll no. : " << x << endl;
    }
    void details(int x, string y) {
        cout << "JLU id : " << x  << endl;
        cout << "Name : " << y << endl;
    }
    void details(string x) {
        cout << "Course :  " << x << endl;
    }
};
int main() {
    student obj;
    obj.details(18);
    obj.details(7900, "Ishan Joshi");
    obj.details("BCA(Hons.)");
    return 0;
}