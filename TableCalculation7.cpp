/*
An electronics shop has announced the following seasonal discounts on
the purchase of certain items:

PURCHASE AMOUNT IN RS.	DISCOUNT ON LAPTOP	DISCOUNT ON DESKTOP PC
0 – 25000	            0.0%	            5.0%
25001 – 57000	        5.0%	            7.6%
57001 – 100000	        7.5%	            10%

More than 100000	10.0%	15.0%
Write a program based on the above criteria to input name, address, amount of purchase and the 
type of purchase (L for Laptop and D for Desktop) by a customer. Compute and print the net amount 
to be paid by a customer along with his name and address.
(Hint: Discount = (discount rate / 100) * amount of purchase, Net amount = amount of purchase – discount)
(Use switch statement)
*/
#include <iostream>
using namespace std;
int main()
{
    int flag = 0;
    char name[50], add[100], ch;
    double amt, net_amt, discount;
    cout << "Enter Your Name : ";
    cin.getline(name, 50);
    cout << "Enter your Address : ";
    cin.getline(add, 100);
    cout << "Enter the Amount of Purchase : ";
    cin >> amt;
    cout << "Enter the Type of Purchase by entering \n'L' for Laptop\n'D' for Desktop\n ";
    cin >> ch;
    switch (ch)
    {
    case 'L':
        if (amt <= 25000)
            discount = 0.0;
        else if (amt > 25000 && amt <= 57000)
            discount = 0.05 * amt;
        else if (amt > 57000 && amt <= 100000)
            discount = 0.075 * amt;
        else if (amt > 100000)
            discount = 0.10 * amt;
        break;
    case 'D':
        if (amt <= 25000)
            discount = 0.05;
        else if (amt > 25000 && amt <= 57000)
            discount = 0.076 * amt;
        else if (amt > 57000 && amt <= 100000)
            discount = 0.10 * amt;
        else if (amt > 100000)
            discount = 0.15 * amt;
        break;
    default:
        cout << "INVALID INPUT\n";
        flag++;
        break;
    }
    if (flag == 0)
    {
        cout << name << "\n"
             << add << "\n"
             << "Net Amount is " << (amt - discount);
    }
    return 0;
}