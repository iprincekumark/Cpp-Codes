#include <iostream>
#include <string>
#include <cstring>
#define max 100
using namespace std;
int main()
{
    int n = 0, i, j, flag, q = 0, sp = 1, c, lw = 0, half;
    string st, str;
    char temp, ch1, ch2, ch;
    cout << "Enter the String:-\n";
    getline(cin, st);
    n = st.size();
    half = n / 2;
    for (i = 0, j = (n - 1); i < half && j > half; ++i, --j)
    {
        temp = st.at(i);
        st.at(i) = st.at(j);
        st.at(j) = temp;
    }
    if (st.at(0) == ' ' || st.at(0) == '.' || st.at(0) == '!' || st.at(0) == '?')
        cout << st.substr(1, (n - 1));
    else
        cout << st;
    str = st;
    cout << "\nDuplicate Characters :- \n";
    for (ch1 = 'A', ch2 = 'a'; ch1 < 'Z' && ch2 < 'z'; ch1++, ch2++)
    {
        c = 0;
        for (i = 0; i < (n - 1); i++)
        {
            if (ch1 == st.at(i) || ch2 == st.at(i))
            {
                c = c + 1;
                ch = st.at(i);
            }
        }
        if (c > 1)
        {
            cout << ch << " repeat " << c << " times \n";
        }
    }
    return 0;
}
