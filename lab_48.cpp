#include <iostream>
#include <iomanip>

class NumberFormatter {
private:
    int num;
public:
    NumberFormatter(int number) : num(number) {}

    void displayWithZeroPadding(int width) {
        std::cout << "Padded with zeros: " << std::setw(width) << std::setfill('0') << num << std::endl;
    }

    void displayWithAsteriskPadding(int width) {
        std::cout << "Padded with asterisks: " << std::setw(width) << std::setfill('*') << num << std::endl;
    }
};

int main() {
    int num = 2305;

    std::cout << "Original number: " << num << std::endl;

    NumberFormatter formatter(num);
    formatter.displayWithZeroPadding(5);
    formatter.displayWithAsteriskPadding(5);

    return 0;
}