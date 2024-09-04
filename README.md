# C-Programs
Some Basic C++ Programs
aAccess Specifiers
class MyClass { 
  	public:       
    
};

The public keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed. In the example above, the members are public - which means that they can be accessed and modified from outside the code.
However, what if we want members to be private and hidden from the outside world?
In C++, there are three access specifiers:
•	public - members are accessible from outside the class
•	private - members cannot be accessed (or viewed) from outside the class
•	protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.
In the following example, we demonstrate the differences between public and private members:
Example
class MyClass {
  public: int x;    
  private:    
    int y;
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}

If you try to access a private member, an error occurs:
error: y is private
Note: By default, all members of a class are private if you don't specify an access specifier:
Example
class MyClass {
  int x;   // Private attribute
  int y;   // Private attribute
};
/ C++ program to demonstrate private
// access modifier




Program – 1 :
#include<iostream>
using namespace std;
class Circle
{ 
    private:  double radius;
    // public member function    
    public: double  compute_area()
        {   
            return 3.14*radius*radius;
        }
};
int main()
{   
    Circle obj;
    obj.radius = 1.5;
    cout << "Area is:" << obj.compute_area();
    return 0;
}
Output: 
 In function 'int main()':
11:16: error: 'double Circle::radius' is private
         double radius;
                ^
31:9: error: within this context
     obj.radius = 1.5;
         ^
The output of the above program is a compile time error because we are not allowed to access the private data members of a class directly from outside the class. Yet an access to obj.radius is attempted, but radius being a private data member, we obtained the above compilation error. 
However, we can access the private data members of a class indirectly using the public member functions of the class. 

Program – 2 :
// C++ program to demonstrate private  access modifier
#include<iostream>
using namespace std;
class Circle
{   
    private:  double radius;
    public:  void compute_area(double r)
        {   
            radius = r;
            double area = 3.14*radius*radius;
            cout << "Radius is: " << radius << endl;
            cout << "Area is: " << area;
        }
};
int main()
{   
    Circle obj;     
    obj.compute_area(1.5);
}
Output: 
Radius is: 1.5
Area is: 7.065
Program 3 and 4 lab work
Program 5
A program to assign values to the data members of a class such as day, month, year and display the contents of the class on the screen.

Program 6

Program 7

Program 8
//class with data and member function 

PROGRAM 9
WAP to add 2 numbers using scope resolution operators

PROGRAM 10
WAP to add, subtract,, divide,mutiply 2 numbers using scope resolution operators

Program 11 WAP of Dereferencing Operator

Program 12:  We Can Directly assign value to a pointer using Dereference : 

Program 13
// C++ Program to changing the address pointed by pointer

Program 14
A program to demonstrate the concept of arrays as class members

Program 15
WAP in C++ and ask for the age of 5 students and find the average age of the students.(declare data member as private and use scope resolution operator.)

Program 16
A program to demonstrate the concept of arrays as class members

Program 17
// C++ program that declare array as data members

Program 18
// C++ program that declare array as object.

Program  19
A program that demonstrates the static data members in C++ is given as follows −

Program 20
// C++ program to show passing of objects to a function

Program 21 :defining the constructor within the class

Program 22: // Cpp program to illustrate the concept of Constructors

Program 23  / /CPP program to illustrate parameterized constructors

Program 24: // C++ Program  to demonstrate the copy constructor

Program 25
// C++ program to demonstrate the execution of constructor
// and destructor

Program 26
//C++ program to demonstrate the execution of constructor
and destructor when multiple objects are created
 
Program 27
A program to access the private data of a class by non-member function through friend function where the friend function is declared in the location of public category.

Program 28
A program to access the private data of a class by non-member function through friend function where the friend function is declared in the location of private category.

Program 30
A program to calculate the sum of private data of the class first with a private data of another class second through the common friend function.

Program 31  C++ program to illustrate  Base & Derived Class

Program 32
WAP to find the sum of 2 numbers using single inheritance.

Program 33
WAP to demonstrate how a class can be inherit Privetely.

Program 34
WAP to  find the average of marks of 2 students by inheriting the classclass can be inherit Privetely.This is a program of single inheritance.

Program 34
WAP to display name,is salary of an employee   by single inheritance and the class can be inherit Privetely.This is a program of single inhertance

Program 35
WAP to find the product of 3 numbers and the class can be inherit Publicly.This is a program of multilevel inhertance

Program 36
WAP to find the average of 5 numbers and the class can be inherit Publicly.This is a program of multilevel inheritance

Program 37
WAP to find the age of n students and it’s  average also ask marks of n students  find average marks and the class can be inherit Publicly.This is a program of multiple inheritance

Program 38
program to print the average marks of six subjects using the multiple Inheritance in the C++ programming language.

Program 39
// C++ program for Hierarchical Inheritance  

Program 40
Wap of Hierarchical inheritance to show a customer bought 5 items from the grocery shop and 3 vegetable from the vendor, find the total cost of items the customer bought. 

Program 41
// C++ program to illustrate the hybrid inheritance Using Multilevel Inheritance and Hierarchical Inheritance 

Program 42
WAP To show the need of Virtual Base Class in C++ 

Program 43 Program to Demonstrate Virtual Function

Program 44
// C++ program to demonstrate function overloading or

Program 45
WAP To achieve compile time polymorphism via function overloading and display your name, rollno, jluid and course.

Program 46
WAP IN C++ program to illustrate concept of Virtual Functions and achieve runtime polymorphism.

Program 47
WAP to demonstrate the  setw  & endl manipulators.

Program 48
WAP to demonstrate the  setfill manipulators.

Program 49
WAP to demonstrate the  setprecision manipulators.

Program 50
WAP  to create a design using setw and set precision manipulators.

Program 51
WAP TO read the line from keyboard and display the function as array to the screen using cin.get function.
