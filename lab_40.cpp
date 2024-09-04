#include <iostream>
using namespace std;

// Base class for shop
class Shop {
protected:
    float itemPrice;

public:
    Shop(float price) : itemPrice(price) {}

    float getItemPrice() const {
        return itemPrice;
    }
};

// Derived class for grocery shop
class GroceryShop : public Shop {
private:
    int numItems;

public:
    GroceryShop(float price, int items) : Shop(price), numItems(items) {}

    float calculateTotalCost() {
        return getItemPrice() * numItems;
    }
};

// Derived class for vegetable vendor
class VegetableVendor : public Shop {
private:
    int numVegetables;

public:
    VegetableVendor(float price, int vegetables) : Shop(price), numVegetables(vegetables) {}

    float calculateTotalCost() {
        return getItemPrice() * numVegetables;
    }
};

int main() {
    cout<<"Ishan Joshi";
    float itemPrice = 2.5; // Price per item in grocery shop
    float vegetablePrice = 1.5; // Price per vegetable in vegetable vendor

    // Customer bought 5 items from the grocery shop
    GroceryShop grocery(itemPrice, 5);
    float groceryCost = grocery.calculateTotalCost();
    cout << "Total cost of items bought from grocery shop: $" << groceryCost << endl;

    // Customer bought 3 vegetables from the vendor
    VegetableVendor vendor(vegetablePrice, 3);
    float vegetableCost = vendor.calculateTotalCost();
    cout << "Total cost of vegetables bought from the vendor: $" << vegetableCost << endl;

    // Total cost of all items bought
    float totalCost = groceryCost + vegetableCost;
    cout << "Total cost of all items bought: $" << totalCost << endl;

    return 0;
}