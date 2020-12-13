#include <iostream>
#include <string>
#include <cstring>
#define max 100
using namespace std;
int main()
{
    int n = 0, i, j, flag, q = 0, sp = 1, c, lw = 0;
    string st;
    cout << "Enter the String:-\n";
    getline(cin, st);
    n = st.size();
    for (i = 0; i < (n - 1); i++)
    {
        if (st.at(i) == ' ' && st.at((i + 1)) != ' ')
            sp = sp + 1;
    }
    for (i = 0; i <= sp; i++)
    {
        c = 0;
        for (j = lw; j < n; j++)
        {
            if ((j + 1) == n)
            {
                flag = 1;
                break;
            }
            if (st.at(j) != ' ')
            {
                cout << st.at(j);
                c = c + 1;
            }
            if (st.at((j + 1)) == ' ' || st.at((j + 1)) == '.')
            {
                if (c == 1)
                    cout << " -> " << c << " Character \n";
                else
                    cout << " -> " << c << " Charactes \n";
                lw = j + 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    return 0;
}
