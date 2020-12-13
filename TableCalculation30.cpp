/*
WAP to illustrate the calling and execution flow of Constructors in inheritance. 
Write separate programs if required.
*/
#include <iostream>
using namespace std;
class Principal
{
public:
    Principal()
    {
        cout << "Constructor Of Principal" << endl;
    }
};
class Student : public Principal
{
public:
    Student()
    {
        cout << "Constructor Of Student" << endl;
    }
};
class Teacher : public Principal
{
public:
    Teacher()
    {
        cout << "Constructor Of Teacher" << endl;
    }
};
int main()
{
    Student S;
    Teacher T;
    return 0;
}