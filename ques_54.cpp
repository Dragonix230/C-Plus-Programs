#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outfile;
    char fname[50]; 
    cout << "Enter the file name to be opened: ";
    cin >> fname;
    
    outfile.open(fname); 
    if (!outfile.is_open()) {
        cout << "Error opening file." << endl;
        return 1;
    }
    
    outfile << "This is the test program"; 
    outfile.close();
    
    cout << "File written successfully." << endl;
    
    return 0;
}