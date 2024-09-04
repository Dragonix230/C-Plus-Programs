#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void getData(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void display(void) {
        cout << "Today date is = " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date db;
    db.getData(29, 1, 2024); // You can replace these values with the desired date
    db.display();
    
    return 0;
}