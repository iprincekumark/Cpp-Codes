#include <iostream>

using namespace std;

class Sample
{
public:
    //declaration of static data member
    static int x;
};

//defining static data member of class
int Sample::x = 0;

int main()
{

    //accessing static data member
    cout << "Value of x: " << Sample::x << endl;

    //modify the value of x
    Sample::x = 100;
    cout << "Modified value of x: " << Sample::x << endl;

    return 0;
}