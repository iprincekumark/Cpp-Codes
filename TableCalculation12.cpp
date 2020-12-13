/*
Write a C++ program to create a class called StaticDemo and with following static member functions.
static void numCal(int,char)            If passing character is ‘p’ then print square of passing 
                                        number otherwise cube of a number 

static void showValue(int,int,char)     If passing character is ‘a’ then print addition of numbers 
                                        otherwise print Ascii value of  a passing character

static void equals(string,string)       Check whether passing strings are  equal or not.

In main function invoke all static member functions and perform the above task.
*/
#include <iostream>
#include <string>
using namespace std;
class StaticDemo
{
public:
    static void numCal(int p, char q)
    {
        if (q == 'p')
            cout << (p * p) << endl;
        else
            cout << (p * p * p) << endl;
    }
    static void showValue(int p, int q, char r)
    {
        if (r == 'a')
            cout << (p + q) << endl;
        else
            cout << (int)q << endl;
    }
    static void equals(string p, string q)
    {
        if ((p.compare(q)) == 0)
            cout << "Equal String";
        else
            cout << "Not Equal";
    }
};
int main()
{
    StaticDemo S;
    S.numCal(3, 'w');
    S.showValue(3, 3, 'a');
    S.equals("PRINCE", "PRINCE");
}