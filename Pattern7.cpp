/*
            A B C D E
            F G H I
            J K L
            M N 
            O
                                */

#include <iostream>
using namespace std;
int main()
{
    int i,j;
    char ch='A';
    for(i=5;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << "\n";
    }
}