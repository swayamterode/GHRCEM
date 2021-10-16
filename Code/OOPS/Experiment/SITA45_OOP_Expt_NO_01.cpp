#include <iostream>
#include <conio.h>
#define _PI_ 3.14159265

using namespace std;

// area of triangle

double area(double base, double height)
{

    return 0.5 * base * height;
}

// area of circle

double area(double radius)
{

    return _PI_ * radius * radius;
}

int main()
{

    double radius, base, height;

    // Circle

    cout << "Enter radius of the circle: ";

    cin >> radius;

    cout << "Area of Circle: " << area(radius) << endl;

    // Triangle

    cout << "Enter base of the triangle: ";

    cin >> base;

    cout << "Enter height of the triangle: ";

    cin >> height;

    cout << "Area of Triangle: " << area(base, height) << endl;
    cout << "SITA45_Swayam Terode" << endl;

    return 0;
}