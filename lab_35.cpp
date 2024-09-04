#include<iostream>
using namespace std;
class second; //forward declaration

class first{
    private : int x;
    public : inline void getdata();
    inline void display();
    friend int sum(first, second);
};
class second{
    private : int y;
    public : inline void getdata();
    inline void display();
    friend int sum (first, second);
};
inline void first :: getdata(){
    cout<<"Enter a value for x\n";
    cin>>x;
}
inline void second :: getdata(){
    cout<<"Enter a value for y\n";
    cin>>y;
}
inline void first :: display()
{
    cout<<"Entered number is (x) = ";
    cout<<x<<endl;
}
inline void second :: display(){
    cout<<"Entered number is (y) = ";
    cout<<y<<endl;
}
int sum(first one, second two){
    int temp;
    temp = one.x + two.y;
    return(temp);
}
int main()
{
    cout<<"Ishan Joshi";
    first a;
    second b;
    a.getdata();
    b.getdata();
    a.display();
    b.display();
    int te = sum(a,b);
    cout<<"sum of the two private data variables (x+y)";
    cout<<"sum of the two private data variables (x + y)";
    cout<<" = "<<te<<endl;
    return 0;
}