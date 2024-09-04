//WAP To show the need of Virtual Base Class in C++
#include<iostream>
using namespace std;
class A  {
    public:
        void show()
        {
            cout << "Ishan\n";
            }
};
class  B : public A {
    };
class  C : public A{
};
class  D : public B, public C {
};
int main()
{
    cout<<"Ishan Joshi";
    D object;
    object.show();
};