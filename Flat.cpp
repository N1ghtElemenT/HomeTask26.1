#include <iostream>
#include "Flat.h"
using namespace std;

Flat::Flat() : area(0.0), price(0.0)
{

}

bool Flat::operator==(const Flat& other) const
{
    return area == other.area;
}

Flat& Flat::operator=(const Flat& other) 
{
    if (this == &other) 
    {
        return *this;
    }
    area = other.area;
    price = other.price;
    return *this;
}

bool Flat::operator>(const Flat& other) const 
{
    return price > other.price;
}

void Flat::input() 
{
    cout << "Enter area (m2): ";
    cin >> area;
    cout << "Enter price (USD): ";
    cin >> price;
}

void Flat::display() const 
{
    cout << "Area: " << area << " m2, Price: " << price << " USD" << endl;
}



