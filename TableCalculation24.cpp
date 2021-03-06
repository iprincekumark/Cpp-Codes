/*
Write a program to demonstrate post decrement (--) and pre increment (++) operation with the help of operator overloading.
With Friend Function
*/
#include <iostream>
using namespace std;

class Integer
{
private:
    int i;
    int j;

public:
    Integer(int i = 0)
    {
        this->i = i;
    }

    friend Integer operator--(Integer &);
    friend Integer operator++(Integer &);
    void display1()
    {
        cout << "i = " << i << endl;
    }
    void display2()
    {
        cout << "j = " << i << endl;
    }
};
Integer operator--(Integer &ob)
{
    return (ob.i)--;
}
Integer operator++(Integer &ob)
{
    return (ob.i)++;
}
int main()
{
    Integer i1(3);
    Integer j1(3);

    cout << "Before post decrement and pre increment : \n";
    j1.display1();
    i1.display2();
    Integer j2 = --j1;
    Integer i2 = ++i1;

    cout << "\nAfter post decrement: \n";
    j2.display1();
    cout << "After post increment: \n";
    i2.display2();
}