/*
            1
            3 1
            5 3 1
            7 5 3 1
            9 7 5 3 1
                                */
#include <iostream>
using namespace std;
int main()
{
    int i, j, c;
    for (i=0;i<5;i++)
    {
        for (j=(i*2)+1;j>0;j=j-2)
        {
            cout << j <<" ";
        }
        cout <<"\n";
    }
    return 0;
}
