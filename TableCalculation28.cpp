/*
Write a C++ program to implement Time class that has separate data members for hours, minutes and seconds. 
Overload + Operator to add two times (object).
By Using Friend Function
*/
#include <iostream>
#include <conio.h>
using namespace std;

class time
{
public:
    time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }
    int hr, min, sec;
    void read()
    {
        cout << "Hours=";
        cin >> hr;
        cout << "Minutes=";
        cin >> min;
        cout << "Seconds=";
        cin >> sec;
    }
    friend time operator+(time &t1, time &t2);
    void display()
    {
        if (hr >= 24)
        {
            hr = hr % 24;
        }
        if (hr < 10)
        {
            cout << "0" << hr;
        }
        else
            cout << hr;
        if (min < 10)
        {
            cout << ":0" << min;
        }
        else
            cout << ":" << min;
        if (sec < 10)
        {
            cout << ":0" << sec;
        }
        else
            cout << ":" << sec;
    }
};
time operator+(time &t1, time &t2)
{
    time t3;
    t3.sec = t1.sec + t2.sec;
    if (t3.sec > 59)
    {
        t2.min += 1;
        t3.sec -= 60;
    }
    t3.min = t1.min + t2.min;
    if (t3.min > 59)
    {
        t2.hr += 1;
        t3.min -= 60;
    }
    t3.hr = t1.hr + t2.hr;
    return t3;
}
int main()
{
    time c1, c2, c3;
    cout << "\nEnter the First Time\n";
    c1.read();
    cout << "\nEnter the Second Time\n";
    c2.read();
    c3 = c1 + c2;
    cout << "\n\nFirst Time  \t\t";
    c1.display();
    cout << "\nSecond Time  \t\t";
    c2.display();
    cout << "\n\nSum of Time  \t\t";
    c3.display();
    return 0;
}