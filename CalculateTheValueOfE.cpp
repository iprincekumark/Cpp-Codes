#include <iostream>

using namespace std;
int main()
{
    float c = 299792458, m, E;
    cout << "Enter the mass in Kilogram:-\n";
    cin >> m;
    E = m * c * c;
    cout << E << " joules of energy";
}