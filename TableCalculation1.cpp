#include <iostream>
using namespace std;
int main()
{
    double annual_tax_income, tax;
    char name[50], regd[20];
    cout << "Enter Name:\n";
    cin.getline(name, 50);
    cout << "Enter Account No.:\n";
    cin >> regd;
    fflush(stdin);
    cout << "Enter Annual Taxable Income:\n";
    cin >> annual_tax_income;
    if (annual_tax_income <= 250000)
        cout << "NO TAX";
    else if (annual_tax_income > 250000 && annual_tax_income <= 300000)
    {
        tax = (annual_tax_income - 250000) * 0.10;
        cout << "TAX : " << tax;
    }
    else if (annual_tax_income > 300000 && annual_tax_income <= 400000)
    {
        tax = 5000 + ((annual_tax_income - 300000) * 0.20);
        cout << "TAX : " << tax;
    }
    else
    {
        tax = 25000 + ((annual_tax_income - 400000) * 0.30);
        cout << "TAX : " << tax;
    }
}