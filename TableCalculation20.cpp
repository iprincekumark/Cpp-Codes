/*
Create a class called Time that has separate int member data for hours, minutes and seconds. 
One constructor should initialize this data to 0, and another should initialize it to fixed values. 
A member function should display it in 11:59:59 format. A member function named addTime() should add 
two objects of type Time passed as arguments. A main ( ) function should create two initialized 
values together, leaving the result in the third Time variable. Finally it should display the value of 
this third variable.
*/
#include <iostream>
#include <conio.h>

using namespace std;

class Time
{
private:
    int hours, minutes, seconds;

public:
    Time()
    {
        hours = minutes = seconds = 0;
    }
    Time(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void showTime() const
    {
        cout << hours << ':' << minutes << ':' << seconds;
    }
    void addTime(Time x, Time y)
    {
        seconds = x.seconds + y.seconds;
        if (seconds > 59)
        {
            seconds -= 60;
            minutes++;
        }
        minutes += x.minutes + y.minutes;
        if (minutes > 59)
        {
            minutes -= 60;
            hours++;
        }
        hours += x.hours + y.hours;
    }
};

int main()
{
    int h1, h2, m1, m2, s1, s2;
    cout << "Enter the Hour, Minutes and Seconds :\n";
    cin >> h1 >> m1 >> s1;
    cout << "Enter the Hour, Minutes and Seconds :\n";
    cin >> h2 >> m2 >> s2;
    const Time a(h1, m1, s1), b(h2, m2, s2);
    Time c;
    c.addTime(a, b);
    c.showTime();
}