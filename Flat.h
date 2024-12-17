#pragma once
class Flat
{
private:
    double area;
    double price;
public:
    Flat();
    bool operator==(const Flat& other) const;
    Flat& operator=(const Flat& other);
    bool operator>(const Flat& other) const;

    void input();
    void display() const;
};

