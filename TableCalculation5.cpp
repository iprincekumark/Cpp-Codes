/*
Write a C++ program to calculate area of a circle, a rectangle or a triangle depending upon user’s choice.
(Use switch statement)
*/
#include <iostream>
using namespace std;
int main()
{
    int ch;
    double r, l, b, h, pi = 3.1415;
    cout << "Enter 1 for Calculating Area of Circle :\n"
         << "Enter 2 for Calculating Area of Rectangle : \n"
         << "Enter 3 for Calculating Area of Triangle : \n";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter the radius : ";
        cin >> r;
        cout << "Area of Circle is " << (r * r * pi);
        break;
    case 2:
        cout << "Enter the Length : ";
        cin >> l;
        cout << "Enter the Width : ";
        cin >> b;
        cout << "Area of Rectangle is " << (l * b);
        break;
    case 3:
        cout << "Enter the value of Height : ";
        cin >> h;
        cout << "Enter the value of Base : ";
        cin >> b;
        cout << "Area of Triangle is " << (h * b * 0.5);
        break;
    default:
        cout << "INVALID INPUT";
        break;
    }
}