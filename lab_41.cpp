#include <iostream>
using namespace std;

// Base class
class Meal {
public:
    void print() {
        cout << "Different types of meals are served:" << endl;
    }
};

// Derived class 1 from Meal (Hierarchical Inheritance)
class Breakfast : public Meal {
public:
    void print() {
        cout << "\nBreakfast is a type of meal." << endl;
    }
};

// Derived class from breakfast (Multilevel Inheritance)
class Milk : public Breakfast {
public:
    void print() {
        cout << "Milk served in breakfast." << endl;
    }
};

// Derived class from Milk (Multilevel Inheritance)
class Yoghurt : public Milk {
public:
    void print() {
        cout << "Yoghurt made from milk." << endl;
    }
};

// Derived class 2 from Meal (Hierarchical Inheritance)
class Dessert : public Meal {
public:
    void print() {
        cout << "\nDessert is a type of meal." << endl;
    }
};

// Derived class from Dessert (Multilevel Inheritance)
class Sweets : public Dessert {
public:
    void print() {
        cout << "Sweets served in Dessert." << endl;
    }
};

// Derived class from Sweets (Multilevel Inheritance)
class Pastry : public Sweets {
public:
    void print() {
        cout << "Pastry is a type of sweet." << endl;
    }
};

int main() {
    cout<<"Ishan Joshi";
    Meal types;
    Breakfast servedBreakfast;
    Milk milk;
    Yoghurt yoghurt;
    Dessert servedDessert;
    Sweets s;
    Pastry pastry;

    types.print();
    servedBreakfast.print();
    milk.print();
    yoghurt.print();
    servedDessert.print();
    s.print();
    pastry.print();

    return 0;
}