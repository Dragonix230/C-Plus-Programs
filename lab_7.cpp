#include<iostream>
using namespace std;
class date{
    private:
    int day, month, year;
    public:
    void getdata() {
        cout << "Enter the Date(dd-mm--yyyy) : "<<endl;
        cin >> day >> month >> year;
    }
    void display() {
        cout<<"Today's date is:"<<day<<"/";cout<<month<<"/"<<year<<endl;
    }
};
int main() {
    date today;
    today.getdata();
    today.display();
}