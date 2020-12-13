/*
            1 2 3 4 5 
            2 2 3 4 5 
            3 3 3 4 5 
            4 4 4 4 5 
            5 5 5 5 5 
                                */

#include <iostream>
using namespace std;
int main()
{
    int i,j,c,q;
    for(i=1;i<6;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout << i << " ";
        }
        if(i<5)
        {
            q=i+1;
            for(j=i;j<5;j++)
            {
                cout << q << " ";
                q++;
            }
        }
        cout << "\n";
    }
    return 0;
}