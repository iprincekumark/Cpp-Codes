/*
Using the switch statement, write a menu driven program
(i) To check and display whether a number input by the user is a composite number or not
(A number is said to be a composite, if it has one or more than one factors excluding 1 and the number itself).
Example: 4, 6, 8, 9…

(ii) To find the smallest digit of an integer that is input:

Sample input: 6524
Sample output: Smallest digit is 2

For an incorrect choice, an appropriate error message should be displayed.
*/
#include <iostream>
using namespace std;
void composite(void);
void smallest_digit(void);
int main()
{
    int n;

    cout << "Menu \n";
    cout << "1. Composite or not\n2. Smallest Digit\n";
    cin >> n;

    switch (n)
    {
    case 1:
        composite();
        break;
    case 2:
        smallest_digit();
        break;
    default:
        cout << "INVALID INPUT\n";
    }
}
void composite(void)
{
    int n, i, comp = 0;
    cout << "Enter number\n";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            comp++;
        }
    }
    if (comp == 2)
    {
        cout << "Not a Composite Number\n";
    }
    else
    {
        cout << "Composite Number\n";
    }
}
void smallest_digit(void)
{
    int n, rem, small = 9, p;
    cout << "Enter number to find the smallest digit\n";
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        if (rem < small)
            small = rem;
        n = n / 10;
    }
    cout << small;
}