/*
Write a C ++ program to create a class NumberDemo with following methods:
Data Members:
int n1
int n2
Function Methods:
void inputNumber(n1, n2) to initialize value of n1 and n2
void show() Print the value of n1 and n2
void swap() Swap value of n1 and n2
In main function create object of class NumberDemo and perform the above task
*/
#include <iostream>
using namespace std;
class NumberDemo
{
public:
    int n1, n2;

    void inputNumber()
    {
        cout << "Enter the Values of n1 and n2 :-\n";
        cin >> n1 >> n2;
    }
    void shwo()
    {
        cout << "-----------------" << endl
             << n1 << " " << n2 << endl
             << "-----------------\n";
    }
    void swap()
    {
        n1 = n1 + n2;
        n2 = n1 - n2;
        n1 = n1 - n2;
    }
};
int main()
{
    NumberDemo N;
    N.inputNumber();
    N.shwo();
    N.swap();
}