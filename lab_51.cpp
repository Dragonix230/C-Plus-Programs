#include <iostream>

using namespace std;

int main() {
    cout<<"Ishan Joshi"<<endl;
    const int MAX_LENGTH = 100; // Maximum length of the input line
    char input[MAX_LENGTH];     // Array to store the input line

    // Prompt the user to enter a line of text
    cout << "Enter a line of text: ";

    // Read a line of text from the keyboard
    cin.get(input, MAX_LENGTH);

    // Display each character of the input line as an array
    cout << "Input line as array: ";
    for (int i = 0; input[i] != '\0'; ++i) {
        cout << "[" << input[i] << "] ";
    }
    cout << endl;

    return 0;
}
