/*
Define a class named UserOne with following description:
--------------------------------------------------------
Data Members	                    Description
string uname,pid	                Person name and person id number

Member Functions	                Description
void setdata(string,string)	        This function will set value in uname and pid

Friend  Function	                Description
void userchecker(UserOne,UserTwo)	Compare data

Define another class named UserTwo with following description:
--------------------------------------------------------------
Data Members	                    Description
string uname,pid	                Person name and person id number

Member Functions	                Description
void setdata(string,string)	        This function will set value in uname and pid

Friend  Function	                Description
void userchecker(UserOne,UserTwo)	Compare data

 Write a C++ program to compare Name  and Id of both classes using friend function. If  name and id of both classes are equal then print the message “ Same Data” 
otherwise print the message “Different Data”.
*/
#include <iostream>
#include <string>
using namespace std;
class UserTwo;
class UserOne
{
public:
    string uname, pid;

    void setdata(string s1, string s2)
    {
        uname = s1;
        pid = s2;
    }
    friend void userchecker(UserOne O, UserTwo W);
};
class UserTwo
{
public:
    string uname, pid;

    void setdata(string s1, string s2)
    {
        uname = s1;
        pid = s2;
    }
    friend void userchecker(UserOne O, UserTwo W);
};
void userchecker(UserOne, UserTwo);
void userchecker(UserOne O, UserTwo W)
{
    if (((O.uname).compare(W.uname) == 0) && ((O.pid).compare(W.pid) == 0))
        cout << "Same Data\n";
    else
        cout << "Different Data\n";
}
int main()
{
    UserOne O;
    UserTwo W;
    string str1, str2, id1, id2;
    cout << "Enter the Name and Id of first person :\n";
    getline(cin, str1);
    fflush(stdin);
    getline(cin, id1);
    cout << "Enter the Name and Id of second person :\n";
    getline(cin, str2);
    fflush(stdin);
    getline(cin, id2);
    O.setdata(str1, id1);
    W.setdata(str2, id2);
    userchecker(O, W);
}