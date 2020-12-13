#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}

bool twinPrime(int n1, int n2)
{
    return (isPrime(n1) && isPrime(n2) && (n1 - n2) == 2);
}

int main()
{
    int n1, n2;
    cout << "Enter the First Number\n";
    cin >> n1;
    cout << "Enter the Sceond Number\n";
    cin >> n2;
    if (twinPrime(n1, n2))
        cout << "Twin Prime" << endl;
    else
        cout << endl
             << "Not Twin Prime" << endl;
    return 0;
}