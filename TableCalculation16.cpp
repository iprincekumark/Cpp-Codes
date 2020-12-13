/*
Write a C++ Program to create class SwapDemo with following data members and function members
Data members (private)
int num
string str
function members (public)
void setData(int,string)        to store value into num and str
void show()                     to display value of num and str
void swapdata(SwapDemo)         This member function will interchange the value of the data members of two 
                                different object of the class SwapDemo. 
Example:
ob1                             ob2
num=10                          num=25
str= hello                      str=world
After calling swapdata function
ob1                             ob2
num=25                          num=10
str= world                      str=hello
*/
#include <iostream>
#include <string>
using namespace std;
class SwapDemo
{
private:
    int num;
    string str;

public:
    void setData(int a, string s)
    {
        num = a;
        str = s;
    }
    void show()
    {
        cout << "\n\nnum = " << num;
        cout << "\nstr = " << str;
    }
    void swapdata(SwapDemo &k, SwapDemo &l)
    {
        int t;
        string s;
        t = l.num;
        l.num = k.num;
        k.num = t;
        s = l.str;
        l.str = k.str;
        k.str = s;
    }
};
int main()
{
    SwapDemo ob1, ob2;
    int n;
    string a;
    cout << "Number : ";
    cin >> n;
    cin.ignore();
    cout << "String : ";
    getline(cin, a);
    ob1.setData(n, a);
    cout << "\nNumber : ";
    cin >> n;
    cin.ignore();
    cout << "String : ";
    getline(cin, a);
    ob2.setData(n, a);
    ob1.show();
    ob2.show();
    cout << "\nAfter calling swapdata function";
    ob1.swapdata(ob1, ob2);
    ob1.show();
    ob2.show();
    return 0;
}