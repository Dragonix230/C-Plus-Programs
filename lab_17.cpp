#include <iostream>

const int arraySize = 5;

class ArrayExample {
private:
    int dataArray[arraySize];  // Array declared as a data member

public:
    void inputArray();
    void displayArray();
    int calculateSum();
};

void ArrayExample::inputArray() {
    std::cout << "Enter " << arraySize << " elements for the array:\n";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> dataArray[i];
    }
}

void ArrayExample::displayArray() {
    std::cout << "Array elements are: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << dataArray[i] << " ";
    }
    std::cout << std::endl;
}

int ArrayExample::calculateSum() {
    int sum = 0;
    for (int i = 0; i < arraySize; ++i) {
        sum += dataArray[i];
    }
    return sum;
}

int main() {
    ArrayExample arrObj;

    arrObj.inputArray();
    arrObj.displayArray();

    int sum = arrObj.calculateSum();
    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}