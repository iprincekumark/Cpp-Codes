#include <iostream>
using namespace std;

class Graphic
{
public:
    // static member function
    static void printMsg()
    {
        cout << "Welcome to the Graphic Era University";
    }
};

// main function
int main()
{
    // invoking a static member function
    Graphic::printMsg();
}