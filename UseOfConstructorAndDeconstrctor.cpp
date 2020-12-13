#include <iostream>
#include <conio.h>
using namespace std;
class MyClass
{
public:
    int x;
    MyClass();  // constructor
    ~MyClass(); // destructor
};
// Implement MyClassconstructor.
MyClass::MyClass()
{
    x = 10;
}
// Implement MyClass destructor.
MyClass::~MyClass()
{
    cout << "Destructing ...\n";
}
int main()
{
    fflush(stdin);
    MyClass ob1;
    MyClass ob2;
    cout << ob1.x << " " << ob2.x << "\n";
    getch();
    return 0;
}