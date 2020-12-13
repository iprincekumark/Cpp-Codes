/*
Write a function in C++ which accepts an integer array      
and its size as arguments and replaces elements having
odd values with thrice its value and elements having even
values with twice its value.
*/
#include <iostream>
using namespace std;
int main()
{
    int A[1000], n, i;
    cout << "Enter the Size of the Integer Array : ";
    cin >> n;
    cout << "Enter the Elements :-\n";
    for (i = 0; i < n; i++)
        cin >> A[i];
    for (i = 0; i < n; i++)
    {
        if ((i + 1) % 2 == 0)
            A[i] = 2 * A[i];
        else
            A[i] = 3 * A[i];
    }
    cout << "Solution :-\n";
    for (i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}