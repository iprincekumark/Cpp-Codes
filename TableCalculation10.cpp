/*
Write a C++ program to implement a class Student having following members:
Data Members                                Description
Name                                        Name of the student
Roll number                                 Roll number of the student 
Marks in Three subject(sub1, sub2, sub3)    Marks in three subjects
Percentage                                  Percentage

MembersFunctions                            Description
InputInfo()                                 Store Name,Roll number and 
                                            three subjects marks
CalcPercentage()                            Calculate Percentage and
                                            Grade as given below:
                                            >=90 then Grade A
                                            >=80 then Grade B
                                            >=60 then Grade C
                                            >=40 then Grade D
                                            <40 then Grade F
DisplayInfo()                               Output details of an Student
*/
#include <iostream>
using namespace std;
class Student
{
public:
    char Name[100];
    int Roll_number;
    int sub1, sub2, sub3;
    double Percentage;

    void InputInfo()
    {
        cout << "Enter Student's Name, Roll number and three subjects marks :-\n";
        cin.getline(Name, 100);
        fflush(stdin);
        cin >> Roll_number;
        cin >> sub1 >> sub2 >> sub3;
    }
    void CalcPercentage()
    {
        Percentage = (sub1 + sub2 + sub3) / 3;
        cout << "--------------------\nGrade ";
        if (Percentage >= 90)
            cout << "A";
        else if (Percentage < 90 && Percentage >= 80)
            cout << "B";
        else if (Percentage < 80 && Percentage >= 60)
            cout << "C";
        else if (Percentage < 60 && Percentage >= 40)
            cout << "D";
        else if (Percentage < 40)
            cout << "E";
    }
    void DisplayInfo()
    {
        cout << endl
             << Name << endl
             << Roll_number << endl
             << Percentage << endl
             << "--------------------";
    }
};
int main()
{
    Student S;
    S.InputInfo();
    S.CalcPercentage();
    S.DisplayInfo();
}