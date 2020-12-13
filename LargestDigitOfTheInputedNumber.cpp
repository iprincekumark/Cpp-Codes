#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Two Digit Number :-\n";
    cin >> n;
    if ((n % 10) > ((int)n / 10))
        cout << "Largest Digit is : " << (n % 10);
    else
        cout << "Largest Digit is : " << ((int)n / 10);
}