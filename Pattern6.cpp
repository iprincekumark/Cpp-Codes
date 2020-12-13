/*
                1 
              1 2 1  
            1 2 3 2 1 
          1 2 3 4 3 2 1 
        1 2 3 4 5 4 3 2 1
                                */

#include <iostream>
using namespace std;
int main()
{
    int i,j,c;
    for(i=0;i<5;i++)
    {
        for(j=i;j<=4;j++)
        cout << "  ";
        for(j=0;j<=i;j++)
        {
            c=j+1;
            cout << c << " ";
        }
        for(j=1;j<=i;j++)
        {
            c=c-1;
            cout << c << " ";
        }
        cout << "\n";
    }
}