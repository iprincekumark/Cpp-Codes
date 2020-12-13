#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int i, j, l, c = 0;
    char str[30], ch, a[30];
    cout << "Enter the Input :- \n";
    cin.getline(str, 30);
    l = strlen(str);
    for (i = 0; i < l; i++)
    {
        ch = str[i];
        for (j = 0; j < 10; j++)
        {
            if (ch == j)
            {
                a[c] = ch;
                c++;
            }
        }
    }
    for (i = 0; i < c; i++)
        cout << a[i];
}
