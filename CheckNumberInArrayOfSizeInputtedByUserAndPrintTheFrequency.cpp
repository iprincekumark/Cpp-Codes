#include <iostream>
using namespace std;
int main()
{
    int n, s, A[1000], c = 0, flag = 0, R[1000], i, j;
    cout << "Enter the Size of the Interger Array : ";
    cin >> n;
    cout << "Enter the Integers :-\n";
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "Type any number to search in the array : ";
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s == A[i])
        {
            R[c] = i;
            c = c + 1;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        cout << "\nNumber " << s << " is found on position ";
        for (i = 0; i < c; i++)
            if ((i + 1) == c)
                cout << ++R[i] << ".";
            else
                cout << ++R[i] << ",";
    }
    return 0;
}