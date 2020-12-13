/*
Define a class PRODUCT in C++ with the following specifications:
Data members:
Pid –                   A string to store product id.
Pname -                 A string to store the name of the product.
Pcostprice –            A decimal to store the cost price of the product
Psellingprice –         A decimal to store Selling Price
Margin –                A decimal to be calculated as Psellingprice - Pcostprice
Remarks –               To store ”Profit” if Margin is positive else “Loss” if Margin is negative

Member Functions:
A method SetRemarks() that assigns Margin as
Psellingprice - Pcostprice and sets Remarks as mentioned
below:
Margin < 0 then Remarks is Loss
Margin > 0  then Remarks is  Profit

 A method Getdetails() to accept values for Pid , Pname , Pcostprice , Psellingprice and invokes SetRemarks() method.

 A method Setdetails() that displays all the data members.  
Make above program for 5 Products (Use Array of Object)
*/
#include <iostream>
#include <string>
using namespace std;
class PRODUCT
{
public:
    string Pid, Pname, Remarks;
    double Pcostprice, Psellingprice, Margin;

    void SetRemarks()
    {
        Margin = Psellingprice - Pcostprice;
        if (Margin < 0)
            Remarks = "Loss";
        else
            Remarks = "Profit";
    }
    void Getdetails()
    {
        cout << "Enter the Product ID, Name, Cost Price, Selling Price :\n";
        getline(cin, Pid);
        fflush(stdin);
        getline(cin, Pname);
        fflush(stdin);
        cin >> Pcostprice >> Psellingprice;
        SetRemarks();
    }
    void Setdetails()
    {
        cout << "\n\nProduct ID : " << Pid << endl
             << "Product Name : " << Pname << endl
             << "Cost Price : " << Pcostprice << endl
             << "Selling Price : " << Psellingprice << endl
             << "Remarks :- " << Remarks << endl;
    }
};
int main()
{
    PRODUCT P[5];
    int i = 5;
    for (i = 0; i < 5; i++)
    {
        P[i].Getdetails();
        fflush(stdin);
    }
    for (i = 0; i < 5; i++)
        P[i].Setdetails();
    return 0;
}
