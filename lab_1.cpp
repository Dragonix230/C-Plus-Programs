#include<iostream>
using namespace std;
class Circle
{
    private:
        double r;
    // public member function
    public:
        double compute_area()
        {
            return 3.14*r*r;
        }
};
int main()
{
    Circle obj;
    obj.r;
    cout << "Area is:" << obj.compute_area();
    return 0;
}