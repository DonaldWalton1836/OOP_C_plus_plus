#include<iostream>
#include<string>

using namespace std;


class GroceryItem
{
    
    friend ostream& operator<<(ostream& o, GroceryItem G);

    private:
        string name;
        double price;
    public:
    GroceryItem();
    GroceryItem(string name, double price);

    void setName(string name);
    void setPrice(double name);
    
    string getName() const;
    double getPrice() const;

};