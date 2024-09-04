#include<iostream>
using namespace std;

class date {
    public:
    int day, month, year;
};

int main() {
    date today;
    today.day = 10;
    today.month = 5;
    today.year = 2007;

    cout << "Today's date is: " << today.day << "/" << today.month << "/" << today.year << endl;

    return 0;
}
