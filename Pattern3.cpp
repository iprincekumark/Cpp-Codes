/*
            1 3 5 7 9 
            3 5 7 9  
            5 7 9  
            7 9  
            9  
                                */

#include <iostream>
using namespace std;
int main()
{
    int i,j,c;
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
        cout << "\n";
    }
    return 0;
}