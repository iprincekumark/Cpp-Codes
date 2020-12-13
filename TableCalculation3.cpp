/*
BigBazzar announced discount for their customers.
If Product type is ‘F’ (Food Type Item) Then
PurchaseAmount	Discount
>=5000      	50 % Of PurchaseAmount
>=2000      	20 % Of PurchaseAmount
<2000	        Zero 
     If Product type is ‘C’ (Cloth Type Item) Then
Age 	PurchaseAmount	Discount
>=40	>=5000	        50 % Of PurchaseAmount
	    >=2000	        20 % Of PurchaseAmount
	    <2000	        Zero

>=20	>=5000	        60 % Of PurchaseAmount
	    >=2000	        30 % Of PurchaseAmount
	    <2000	        Zero

<20 	>=2500	        50 % Of PurchaseAmount
	    <2500	        Zero

At the end of program display Product Type ,Purchase Amount , Discount and 
NetPayment.  
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch;
    float purchase_amt, discount, net_payment;
    int age;
    cout << "Enter:- \n'F' for Food Type Item \n'C' for Cloth Type Item\n";
    cin >> ch;
    cout << "Enter the Purchase Amount: ";
    cin >> purchase_amt;
    fflush(stdin);
    switch (ch)
    {
    case 'F':
    {
        if (purchase_amt >= 5000)
        {
            discount = purchase_amt * 0.50;
            net_payment = purchase_amt - discount;
        }
        else if (purchase_amt < 5000 && purchase_amt >= 2000)
        {
            discount = purchase_amt * 0.20;
            net_payment = purchase_amt - discount;
        }
        else if (purchase_amt < 2000)
        {
            discount = 0.0;
            net_payment = purchase_amt;
        }
        break;
    }
    case 'C':
    {
        cout << "Please Enter Your Age : ";
        cin >> age;
        if (age >= 40)
        {
            if (purchase_amt >= 5000)
            {
                discount = purchase_amt * 0.50;
                net_payment = purchase_amt - discount;
            }
            else if (purchase_amt < 5000 && purchase_amt >= 2000)
            {
                discount = purchase_amt * 0.20;
                net_payment = purchase_amt - discount;
            }
            else if (purchase_amt < 2000)
            {
                discount = 0.0;
                net_payment = purchase_amt;
            }
        }
        else if (age >= 20 && age < 40)
        {
            if (purchase_amt >= 5000)
            {
                discount = purchase_amt * 0.60;
                net_payment = purchase_amt - discount;
            }
            else if (purchase_amt < 5000 && purchase_amt >= 2000)
            {
                discount = purchase_amt * 0.30;
                net_payment = purchase_amt - discount;
            }
            else if (purchase_amt < 2000)
            {
                discount = 0.0;
                net_payment = purchase_amt;
            }
        }
        else
        {
            if (purchase_amt >= 2500)
            {
                discount = purchase_amt * 0.50;
                net_payment = purchase_amt - discount;
            }
            else
            {
                discount = 0.0;
                net_payment = purchase_amt;
            }
        }
        break;
    }
    default:
        cout << "INVALID INPUT";
        break;
    }
    if (ch == 'C')
        cout << "***Cloth Type Item***\n";
    else if (ch == 'F')
        cout << "***Food Type Item***\n";
    cout << "Purchase Amount : " << purchase_amt;
    cout << "\nDiscount : " << discount;
    cout << "\nNet Payment : " << net_payment;
    return 0;
}