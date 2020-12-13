/*
Define a class named Test with following description:

Data Members	
private int n1,n2,n3

Constructor	            Description
Test(int,int,int)	    Constructor will store value in n1, n2 and n3.

Friend  Function	    Description
void biggest(Test ob)	This friend function will find the biggest of three numbers (n1,n2 and n3)

Write a C++ program to find the biggest of three numbers using friend function.
*/
#include <iostream>
using namespace std;
class Test
{
private:
    int n1, n2, n3;

public:
    Test()
    {
        n1 = n2 = n3 = 0;
    }
    Test(int N1, int N2, int N3)
    {
        n1 = N1;
        n2 = N2;
        n3 = N3;
    }
    friend void biggest(Test ob);
};
void biggest(Test);
void biggest(Test ob)
{
    if ((ob.n1 >= ob.n2) && (ob.n1 >= ob.n3))
        cout << "Largest number: " << ob.n1;
    else if ((ob.n2 >= ob.n1) && (ob.n2 >= ob.n3))
        cout << "Largest number: " << ob.n2;
    else
        cout << "Largest number: " << ob.n3;
}
int main()
{
    int n1, n2, n3;
    cout << "Enter the three numbers to find the biggest one among them :\n";
    cin >> n1 >> n2 >> n3;
    const Test ob(n1, n2, n3);
    Test T;
    biggest(ob);
}