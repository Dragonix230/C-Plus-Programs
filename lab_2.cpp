#include <iostream>
using namespace std;
// class declaration
class circle
{
    private :
    double radius;

    public:
    void compute_area(double r)
    {
        radius = r;
        double area = 3.14*r*r;
        cout << "The area of the circle is : "<< radius << endl;
        cout << "Area is:" << area;
        }
        };
        int main()
        {
            // object creation
            circle obj;
            // calling member function
            obj.compute_area(1.5);
            return 0;
            }
