/*
Write a C++ program to create a class called StaticDemo and overload funcDemo() static member function.
static void funcDemo(string,int)-> truncate a string to a certain number of words.  
Example
"The quick brown fox jumps over the lazy dog"   ,    4
Output : 
The quick brown fox
static void funcDemo(string)-> count and print number of palindrome in a passing string.
static void funcDemo(int,string)-> chop a string into chunks of a given length. 
Example:
2, "INFORMATION"
 Output : 
IN   FO    RM    AT    IO   N
Example:
3, "INFORMATION"
 Output : 
INF      ORM    ATI     ON

In main function invoke functions and perform the above task.
*/
#include <iostream>
#include <string>
using namespace std;
class StaticDemo
{
public:
    static void funcDemo(string str, int n)
    {
        int ln, i, j, word = 1, c = 0, w = 1;
        string s;
        str = str + '!';
        ln = str.length();
        for (i = 0; i < ln; i++)
        {
            if (str.at(i) == ' ' && str.at((1 + i)) != ' ')
                word++;
        }
        if (n > word)
            cout << "***INVALID INPUT***";
        else
        {
            for (i = 0; i < ln; i++)
            {
                if ((str.at(i) == ' ' || str.at(i) == '!' || str.at(i) == '?') && w <= n)
                {
                    w++;
                    for (j = c; j < i; j++)
                    {
                        cout << str.at(j);
                    }
                    cout << " ";
                    c = i + 1;
                }
            }
        }
    }
    static void funcDemo(string str)
    {
        int ln, l, i, j, word = 0, k, c = 0, w = 1;
        string s;
        ln = str.length();
        for (i = 0; i < ln; i++)
        {
            if (str.at(i) == ' ' || str.at(i) == '.' || str.at(i) == '!' || str.at(i) == '?')
            {
                s = "";
                for (j = c; j < i; j++)
                {
                    s = s + str.at(j);
                }
                l = s.length() - 1;
                w = 0;
                for (j = 0, k = l; j < k && k > j; j++, k--)
                {
                    if (s.at(j) == s.at(k))
                        w++;
                }
                if (w == ((1 + l) / 2) && l > 0)
                    word++;
                c = i + 1;
            }
        }
        cout << "\nThere are " << word << " Palindrome word in the String.";
    }

    static void funcDemo(int n, string str)
    {
        int ln, i, j, k = n;
        ln = str.length();
        for (i = 0; i < ln; i++)
        {
            for (j = i; j < n && j < ln; j++)
                cout << str.at(j);
            i = j - 1;
            n = n + k;
            cout << " ";
        }
    }
};
int main()
{
    StaticDemo S;
    string str;
    int n;
    cout << "Enter the String and the number :\n";
    getline(cin, str);
    fflush(stdin);
    cin >> n;
    S.funcDemo(str, n);
    S.funcDemo(str);
    cout << "\nEnter the number and the string to chop :\n";
    cin >> n;
    fflush(stdin);
    getline(cin, str);
    S.funcDemo(n, str);
}