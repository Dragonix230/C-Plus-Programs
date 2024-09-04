#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream outfile;
    outfile.open("text.txt");
    outfile<<"this is test\n";
    outfile<<"program\n";
    outfile.close();
}
