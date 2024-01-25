#include "itemList.h"


ostream& operator<<(ostream& o, GroceryItem G)
{
	o<<G.name<<"     "<<"$"<<G.price;
}
GroceryItem::GroceryItem()
{
    name = "nothing";
    price = 0.00;
}
GroceryItem::GroceryItem(string name, double price)
{
    this->name = name;
    this->price = price;
}


void GroceryItem::setName(string name)
{
    this->name = name;
}

void GroceryItem::setPrice(double price)
{
    this->price = price;
}

string GroceryItem::getName() const
{
    return name;
}

double GroceryItem::getPrice() const
{
    return price;
}


