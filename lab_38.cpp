#include <iostream>
using namespace std;
// create base class1
class student_detail
{
private:
    int rno, sum = 0, i, marks[5];
public:
    void detail()
    {
        cout << "Enter the Roll No: " << endl;
        cin >> rno;
        cout << "Enter the marks of five subjects: " << endl;
        for (i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
        for (i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }
    }
 int getRollNo() const
    {
        return rno;
    }

    int getSum() const
    {
        return sum;
    }
};

// create base class2
class sports_mark
{
private:
    int s_mark;
public:
    void get_mark()
    {
        cout << "\nEnter the sports mark: ";
        cin >> s_mark;
    }

    int getSportsMark() const
    {
        return s_mark;
    }
};

class result : public student_detail, public sports_mark
{
    int tot, avg;

public:
    // create member function of child class
    void disp()
    {
        tot = getSum() + getSportsMark();
        avg = tot / 6; // total marks of six subject / 6
        cout << "\n\n\tRoll No: " << getRollNo() << "\n\tTotal: " << tot << endl;
        cout << "\n\tAverage Marks: " << avg;
    }
};

int main()
{
    cout<<"Ishan Joshi";
    result obj; // create an object of the derived class

    // call the member function of the base class
    obj.detail();
    obj.get_mark();
    obj.disp();

    return 0;
}