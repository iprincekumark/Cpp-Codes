/*Q4. Write a C++ that accepts employee name , employee code , employee designation and basic salary. According to the following conditions computes the HRA, DA and Gross Salary of an employee.

If designation is Manager
HRA=15% of basic salary
DA= 80% of basic salary
If designation is Clerk
HRA=8% of basic salary
DA= 50% of basic salary

If designation is Peon
HRA=5% of basic salary
DA= 30% of basic salary

GrossSalar=hra+da+basicsalary

Display Report at the end of program in following Format
Name of Employee:
Designation of Employee:
Basic Salary:
Gross Salary:*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string emp_name, emp_designation;
    int emp_code, basic_salary;
    double hra = 0;
    double da = 0;
    cout << "Enter name: \n";
    cin >> emp_name;
    fflush(stdin);
    cout << "Enter employee code: \n";
    cin >> emp_code;
    fflush(stdin);
    cout << "Enter employee designation: \n";
    cin >> emp_designation;
    cout << "Enter employee basic salary: \n";
    cin >> basic_salary;
    if (emp_designation.compare("Manager") == 0)
    {
        hra = (basic_salary)*0.15;
        da = (basic_salary)*0.8;
    }
    else if (emp_designation.compare("Clerk") == 0)
    {
        hra = (basic_salary)*0.08;
        da = (basic_salary)*0.5;
    }
    else if (emp_designation.compare("Peon") == 0)
    {
        hra = (basic_salary)*0.05;
        da = (basic_salary)*0.3;
    }
    double gross_salary = da + hra + basic_salary;
    cout << "\nName of employee: " << emp_name << endl;
    cout << "Designation of employee: " << emp_designation << endl;
    cout << "Basic salary: " << basic_salary << endl;
    cout << "Gross salary: " << gross_salary;
    return 0;
}
