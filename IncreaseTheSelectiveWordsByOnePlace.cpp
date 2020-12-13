#include <iostream>
using namespace std;
int main()
{
    char str[500], ch;
    int i, j, ln = 0, n, k, flag = 0, words = 1, q, sp, A[20];
    cout << "Enter the Sentence :\n";
    cin.getline(str, 500);
    for (i = 0; str[i] != '\0'; ++i)
    {
        ln = ln + 1;
        if (str[i] == ' ')
            words = words + 1;
    }
    cout << "Enter the number integer you want to input : ";
    cin >> n;
    cout << "Enter the integers : \n";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
        if (A[i] < 0 && A[i] > words)
        {
            cout << "INVALID INPUT";
            flag = 1;
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {
            if (A[j] == A[i])
            {
                for (k = j; k < n; k++)
                {
                    A[k] = A[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    if (flag == 0)
    {
        for (i = 0; i < n; ++i)
        {
            q = 0;
            sp = A[i] - 1;
            for (j = 0; j < ln; ++j)
            {
                if (str[j] == ' ')
                {
                    j++;
                    q = q + 1;
                    if (q == sp)
                    {
                        while (str[j] != ' ')
                        {
                            str[j] = ++str[j];
                            ++j;
                            if (j == ln ||
                                str[j] == '.' ||
                                str[j] == '!' ||
                                str[j] == ' ' ||
                                str[j] == ',')
                                break;
                        }
                    }
                    else if (sp == 0)
                    {
                        j = 0;
                        while (str[j] != ' ')
                        {
                            str[j] = ++str[j];
                            ++j;
                            if (j == ln ||
                                str[j] == '.' ||
                                str[j] == '!' ||
                                str[j] == ' ' ||
                                str[j] == ',')
                                break;
                        }
                        break;
                    }
                }
            }
        }
        cout << str;
    }
    else
    {
        cout << "INVALID INPUT";
        return 0;
    }
}
