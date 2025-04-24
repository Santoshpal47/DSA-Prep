#include <bits/stdc++.h>
using namespace std;

class car
{
public:
    string name;
    int price;
    int year;
    string color;

    car() // Default constructor
    {
    }

    // member initializer list
    car(string name, int price, int year, string color) :                                                    // Parameterized constructor
                                                          name(name), price(price), year(year), color(color) // Member initializer list
    {
    };

    void printDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Year: " << year << endl;
        cout << "Color: " << color << endl;
    }
};
// outside constructor definition
// Constructor with parameters
// car::car(string name, int price, int year, string color)
// {
//     this->name = name;
//     this->price = price;
//     this->year = year;
//     this->color = color;
// }
int main()
{

    car c1 = car("BMW", 5000000, 2023, "Black");
    c1.printDetails();
    cout << endl;

    car c2("Audi", 6000000, 2022, "White");
    c2.printDetails();

    return 0;
}