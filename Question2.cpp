/*
Write a C++ to check Special Number ?
                        */
#include <iostream>
using namespace std;
int main()
{
    int n, p, rev, sum= 0, multi=1;
    cout << "Enter the Number to Check Special Number \n";
    cin >> n;
    p=n;
    while (n>0)
    {
        rev=n%10;
        sum=sum+rev;
        multi=multi*rev;
        n=n/10;
    }
    if ((sum+multi)==p)
        cout << "Special Number\n";
    else
        cout << "Not a Special Number\n";
}