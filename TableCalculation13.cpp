/*
Define a class Ele_Bill in C++ with the following descriptions:
Private members:
Cname                           of type string
Pnumber                         of type long
No_of_units                     of type integer
Amount                          of type float
Calc_Amount()                   This member function should calculate
                                the amount as No_of_units*Cost.

Amount can be calculated according to the following conditions:
No of units Cost
First 50 units                  Free
Next 100 units                  0.80@ unit
Next 200 units                  1.00@ unit
Remaining units                 1.20@ unit

Public Members:
.A function Accept() which allows user to enter Cname,
Pnumber, No_of_units and invoke function Calc_Amount().
.A function Display() to display the values of all the data members
on the screen.
Make above program for five customer(Use of Array of Objects)
*/
#include <iostream>
#include <string>
using namespace std;
class Ele_Bill
{
private:
    string Cname;
    long Pnumber;
    int No_of_units;
    float Amount;

    float Calc_Amount()
    {
        if (No_of_units <= 50)
            Amount = 0.0;
        else if (No_of_units > 50 && No_of_units <= 100)
            Amount = 0.80 * No_of_units;
        else if (No_of_units > 100 && No_of_units <= 200)
            Amount = 1.00 * No_of_units;
        else if (No_of_units > 200)
            Amount = 1.20 * No_of_units;
        return Amount;
    }

public:
    void Accept()
    {
        cout << "Enter the Name, Pan number and Number of Units :-\n";
        getline(cin, Cname);
        cin >> Pnumber;
        cin >> No_of_units;
        Amount = Calc_Amount();
    }
    void Display()
    {
        cout << "Name : " << Cname << endl;
        cout << "Pan Number : " << Pnumber << endl;
        cout << "Number of Units : " << No_of_units << endl;
        cout << "Amount : " << Amount << endl;
    }
};
int main()
{
    Ele_Bill E[5];
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        E[i].Accept();
        fflush(stdin);
    }
    cout << "Display Records :- \n";
    for (i = 0; i < 5; i++)
        E[i].Display();
    return 0;
}