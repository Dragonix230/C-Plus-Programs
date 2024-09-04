//WAP to demonstrate the setw and endl manipulator while also using class
#include<iostream>
#include<iomanip>
using namespace std;
class Student{
    private:
        int rollNo;
        string name;
        float cgpa;
        public:
            void getData(int r,string n,float g){
                rollNo=r;
                name=n;
                cgpa=g;
            }
            void display() {
                cout<<setw(5)<<rollNo<<setw(10)<<name<<setprecision(2)<<fixed<<setw(8)<<cgpa<<endl;
            }
};
int main(){
    Student s1;
    s1.getData(1,"Ishan",8.9);
    cout<<"Details of Ishan are as follows:"<<endl;
    s1.display();
    cout<<"\n\n";
    Student s2;
    s2.getData(2,"Dragonix",10.0);
    cout<<"Details of Dragonix are as follows:"<<endl;
    s2.display();
    cout<<endl;
}