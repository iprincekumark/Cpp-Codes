/*
Using the switch statement, write a menu-driven
     program to calculate the maturity amount of a bank
     deposit.
The user is given the following options:
(i) Term Deposit
(ii) Recurring Deposit

For option (i) accept Principal (p), rate of interest (r) and time period in years (n). 
Calculate and output the maturity amount (a) receivable using the formula a = p[1 + r / 100]n.

For option (ii) accept monthly installment (p), rate of interest (r) and time period in months (n). 
Calculate and output the maturity amount (a) receivable using the formula 
a = p * n + p * n(n + 1) / 2 * r / 100 * 1 / 12.

For an incorrect option, an appropriate error message should be displayed.
*/
#include <iostream>
using namespace std;
int main()
{
    cout << "Select an option:" << endl;
    cout << "1. Term Deposit" << endl;
    cout << "2. Recurring Deposit" << endl;
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
    {
        float p, r, t;
        cout << "Enter principle amt,rate,time in years" << endl;
        cin >> p >> r >> t;
        cout << "Receivable amount = " << p * (1 + r / 100) * t << endl;
        break;
    }
    case 2:
    {
        float p, r, t;
        cout << "Enter installment,rate,time in months" << endl;
        cin >> p >> r >> t;
        cout << "Receivable amount = " << p * t + p * t * (t + 1) / 2 * (r / 100) * (1 / 12);
        break;
    }
    default:
    {
        cout << "Wrong option selected";
    }
    }
    return 0;
}
