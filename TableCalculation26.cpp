/*
4. Write a C++ program to implement inheritance with following details:
 Create  a Base Class        Temperature
Data members:
Float temp;
Function members
void setTempData(float)

Sub Class Fahrenheit      (subclass of Temperature)
Data members:
Float ctemp;
Function members
function changetempFtoC() to convert Fahrenheit temperature into degree Celsius by using formula 
C=5/9*(F-32) and display converted temperature.

Sub Class Celsius                  (subclass of Temperature)
Data members:
Float  ftemp;
Function members
function changetempCtoF() to convert degree Celsius into Fahrenheit temperature by using formula 
F=9/5*c+32 and display converted temperature

*/
#include <iostream>
using namespace std;
class Temperature
{
public:
    float temp;
    void setTempData(float var)
    {
        temp = var;
    }
};
class Fahrenheit : public Temperature
{
    float cel;

public:
    void changetempFtoC()
    {
        cel = (temp - 32) * 5 / 9;
        cout << "C = " << cel << endl;
    }

    //cout<<"CEL"<<cel;
};
class Celsius : public Temperature
{
    float fah;

public:
    void changetempCtoF()
    {
        fah = (temp * (9.0 / 5.0)) + 32.0;
        cout << "F = " << fah << endl;
    }
};
int main()
{
    float n;
    cout << "TEMPERATURE IN FAHRENHEIT : ";
    cin >> n;
    Fahrenheit f;
    f.setTempData(n);
    f.changetempFtoC();
    cout << "TEMPERATURE IN CELSIUS : ";
    cin >> n;
    Celsius c;
    c.setTempData(n);
    c.changetempCtoF();
}