#include <iostream>
#include <ctime>

class TodayDate {
private:
    std::tm currentDate;

public:
    // Constructor to initialize the current date
    TodayDate() {
        time_t now = time(0);
        currentDate = *localtime(&now);
    }

    // Public member function to display today's date
    void displayDate() {
        std::cout << "Today's Date: "
                  << currentDate.tm_mday << "/"
                  << (currentDate.tm_mon + 1) << "/"
                  << (currentDate.tm_year + 1900) << std::endl;
    }
};

int main() {
    TodayDate today;
    today.displayDate();

    return 0;
}
