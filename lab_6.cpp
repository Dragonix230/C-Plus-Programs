#include<iostream>
using namespace std;
int main() {
    class date {
    private:
    int day, month, year;
};
class date today;
today.day = 10;
today.month = 5;
today.year = 2007;
cout<<"Today's date is:"<<today.day<<"/";cout<<today.month<<"/"<<today.year<<endl;
}