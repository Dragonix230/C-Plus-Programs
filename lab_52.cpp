//Example of opening/creating a file using the open() function
#include <iostream>
#include <fstream>
using namespace std;
int main (){
    fstream new_file;
    new_file.open("new_file",ios::out);
    if (!new_file) {
        cout << "Unable to open file";}
    else{
        cout<<"File opened successfully";
        new_file.close();
    }
    return 0;
}