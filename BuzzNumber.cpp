#include <cmath>
#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    if (n % 10 == 7 || n % 7 == 0)
        cout << "It is a Buzz Number";
    else
        cout << "It is not a Buzz Number";
}