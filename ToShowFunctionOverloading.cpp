#include <iostream>
using namespace std;

// function with float type parameter
float absolute(float var)
{
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter
int absolute(int var)
{
    if (var < 0)
        var = -var;
    return var;
}

// function with 2 parameters
void display(int var1, double var2)
{
    cout << "Integer number: " << var1;
    cout << " and double number: " << var2 << endl;
}

// function with double type single parameter
void display(double var)
{
    cout << "Double number: " << var << endl;
}

// function with int type single parameter
void display(int var)
{
    cout << "Integer number: " << var << endl;
}

int main()
{
    int a = 5;
    double b = 5.5;

    // call function with int type parameter
    cout << "Absolute value of -5 = " << absolute(-5) << endl;

    // call function with float type parameter
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;

    // call function with int type parameter
    display(a);

    // call function with double type parameter
    display(b);

    // call function with 2 parameters
    display(a, b);
    return 0;
}