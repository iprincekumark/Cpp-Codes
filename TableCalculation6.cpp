/*
Using a switch statement, write a menu driven C++ program to convert a given temperature Fahrenheit 
to Celsius and vice versa. For an incorrect choice, an appropriate error message should be displayed.

(Hints: C=5/9*(F-32) and F=1.8*C+32)
(Use switch statement)
*/
#include <iostream>
using namespace std;
int main()
{
    int ch;
    double F, C;
    cout << "Enter 1 for Converting Fahrenheit to Celsius : \n"
         << "Enter 2 for Converting Celsius to Fahrenheit : \n";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout << "Enter the Temperature in Fahrenheit : ";
        cin >> F;
        cout << "Temperature in Celsius is " << (((F - 32) * 5) / 9);
        break;
    case 2:
        cout << "Enter the Temperature in Celsius : ";
        cin >> C;
        cout << "Temperature in Fahrenheit is " << (((C / 5) * 9) + 32);
        break;
    default:
        cout << "INVALID INPUT";
        break;
    }
    return 0;
}