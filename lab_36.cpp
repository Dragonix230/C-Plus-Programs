#include <iostream>

using namespace std;

class Number {
protected:
    int num;
public:
    void setNum(int n) {
        num = n;
    }
};

class FiveNumbers : public Number {
protected:
    int nums[5];
public:
    void setNumbers(int n1, int n2, int n3, int n4, int n5) {
        nums[0] = n1;
        nums[1] = n2;
        nums[2] = n3;
        nums[3] = n4;
        nums[4] = n5;
    }
};

class Average : public FiveNumbers {
public:
    double calculateAverage() {
        int sum = 0;
        for (int i = 0; i < 5; ++i) {
            sum += nums[i];
        }
        return static_cast<double>(sum) / 5;
    }
};

int main() {
    cout<<"Ishan Joshi";
    Average avg;
    avg.setNumbers(1, 2, 3, 4, 5);
    cout << "Average of the 5 numbers: " << avg.calculateAverage() << endl;
    return 0;
}