#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i, ln, j, f, c;
    cout << "Enter String ";
    getline(cin, str);
    ln = str.length();
    for (i = 0; i < ln; i++)
    {
        f = 0;
        for (j = i - 1; j >= 0; j--)
        {
            if (str.at(j) == str.at(i))
            {
                f = 1;
            }
        }
        if (f == 0)
        {
            c = 0;
            for (j = i; j < ln; j++)
            {
                if (str.at(j) == str.at(i))
                {
                    c++;
                }
            }
            if (str.at(i) != ' ')
                cout << str.at(i) << " = " << c << endl;
        }
    }
    return 0;
}
