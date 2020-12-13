/*
Define a class employee having the following description:             
Data Members	    Description
Pan	                To store personal account number
Name	            To store name
Taxincome	        To store annual taxable income
Tax	                To store tax that is calculated
           
Member Functions	Description
InputInfo()	        Store the pan number,name,taxableincome
TaxCalc()	        Calculate tax for an employee
DisplayInfo()	    Output details of an employee
Write a C++ program to compute the tax according to the given conditions and display
the output.
Total Annual Taxable Income	        Tax Rate
Upto  2,50,000	                    No tax
From 2,50,000 to 3,00,000	        10 % of the income exceeding 2,50,000
From 3,00,000 to 4,00,000	        Rs. 5000+20 % of the income exceeding 3,00,000
Above 4,00,000	                    Rs 25000 + 30 % of the income exceeding 4,00,000
*/
#include <iostream>
#include <string>
using namespace std;
class Employee
{
public:
    int Pan;
    char Name[100];
    double Taxincome;
    double Tax;

    void InputInfo()
    {
        cout << "Enter the Pan Number, Name and Taxable Income :-\n";
        cin >> Pan >> Name;
        fflush(stdin);
        cin >> Taxincome;
    }
    void TaxCalc()
    {
        if (Taxincome <= 250000)
            Tax = 0;
        else if (Taxincome > 250000 && Taxincome <= 300000)
            Tax = 0.10 * ((Taxincome - 250000));
        else if (Taxincome > 300000 && Taxincome <= 400000)
            Tax = (5000 + ((Taxincome - 300000) * 0.20));
        else if (Taxincome > 400000)
            Tax = 25000 + ((Taxincome - 400000) * 0.30);
    }
    void DisplayInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Pan Number : " << Pan << endl;
        cout << "Taxable Income : " << Taxincome << endl;
        cout << "Tax : " << Tax << endl;
    }
};
int main()
{
    Employee E;
    E.InputInfo();
    E.TaxCalc();
    E.DisplayInfo();
}