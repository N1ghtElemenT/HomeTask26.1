#include <iostream>
#include "Flat.h"
using namespace std;

int main()
{
    Flat flat1, flat2, flat3;

    cout << "Enter details for Flat 1:" << endl;
    flat1.input();

    cout << "\nEnter details for Flat 2:" << endl;
    flat2.input();

    if (flat1 == flat2) 
    {
        cout << "\nFlats 1 and 2 have the same area." << endl;
    }
    else 
    {
        cout << "\nFlats 1 and 2 have different areas." << endl;
    }

    flat3 = flat1;
    cout << "\nFlat 3 after assignment (from Flat 1):" << endl;
    flat3.display();

    if (flat2 > flat1)
    {
        cout << "\nFlat 2 is more expensive than Flat 1." << endl;
    }
    else if (flat1 > flat2)
    {
        cout << "\nFlat 1 is more expensive than Flat 2." << endl;
    }
    else
    {
        cout << "\nFlats 1 and 2  have the same price." << endl;
    }

    return 0;
}