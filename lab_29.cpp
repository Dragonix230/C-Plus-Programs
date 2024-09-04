//Demonstration of Working of Inheritance with class of Bikes
#include<iostream>
using namespace std;
class Bike{ 
    public:  
        int speed;  
};   
class MountainBike : public Bike {  
    public:   
        void showType() {   cout << "Mountain bike"<<endl;}    
};         
class RoadBike : public Bike {       
    public:                
        void showType() {cout << "Road bike"<<endl;}                    
};                  
int main(){               
    cout<<"Ishan Joshi";
    MountainBike mb;                  
    RoadBike rb;                            
    mb.speed = 25;                                       
    rb.speed=30;                                                           
    cout << "Speed of mountainbike is ";mb.showType();cout<<mb.speed<<endl;                           
    cout << "Speed of roadbike is ";rb.showType();cout<<rb.speed<<endl;                            
    return 0;
}