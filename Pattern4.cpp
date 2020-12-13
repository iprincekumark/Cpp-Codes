/*
            1 3 5 7 9 
            3 5 7 9 1 
            5 7 9 1 3 
            7 9 1 3 5 
            9 1 3 5 7 
                                */

#include <iostream>
using namespace std;
int main()
{
    int i,j,c,q;
    for(i=0;i<5;i++)
    {
        for(j=5;j>i;j--)
        {
            if(j==5)
            {
                c=(i*2)+1;
                cout << c <<" ";
            }
            else
            {
                c=c+2;
                cout << c << " ";
            }
            
        }
        if(i>0)
        {
            q=1;
            for(j=1;j<=i;j++)
            {
                cout << q << " ";
                q=q+2;
            }
        }
        cout << "\n";
    }
    return 0;
}