#include <iostream>
using namespace std;
int main()
{
    char name[50], regd[20], branch[30];
    int sem;
    cout << "Enter Name:\n";
    cin.getline(name, 50);
    cout << "Enter University Roll No.:\n";
    cin >> regd;
    fflush(stdin);
    cout << "Enter Course:\n";
    cin.getline(branch, 30);
    cout << "Enter Semester:\n";
    cin >> sem;

    cout << "\nName: " << name;
    cout << "\nUniversity Roll No.: " << regd;
    cout << "\nCourse: " << branch;
    cout << "\nSemester: " << sem;
}