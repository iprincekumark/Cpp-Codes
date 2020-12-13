/*
            9 7 5 3 1
            7 5 3 1
            5 3 1
            3 1
            1
                                */

#include <iostream>
using namespace std;
int main()
{
    int i, j, c;
    for (i=4;i>=0;i--)
    {
        for (j=0;j<=i;j++)
        {
            if (j==0)
            {
                c=(i*2)+1;
                cout << c <<" ";
            }
            else
            {
                c=c-2;
                cout << c << " ";
            }

        }
        cout << "\n";
    }
    return 0;
}