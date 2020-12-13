/*
Write a C++ Program to input any string and count the
number of occurrence of each Character. 
*/
#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;
int main()
{
    char str[100], ch;
    int i, j, c, ln;
    int freq[100];
    cout << "Enter the String : ";
    cin.getline(str, 100);
    ln = strlen(str);
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        c = 0;
        for (j = 0; str[j] != '\0'; ++j)
        {
            if ((str[j] >= 'A') && (str[j] <= 'Z'))
            {
                if (ch == str[j])
                    c = c + 1;
            }
        }
        if (c > 0)
        {
            cout << ch << " " << c << endl;
        }
    }

    return 0;
}
