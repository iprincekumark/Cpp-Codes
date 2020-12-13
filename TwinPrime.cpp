#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i, c=0;
    cout << "Enter the  Two Number to Check Twin Prime \n";
    cin >> n1;
    cin >> n2;
    for (i=1;i<=(n1+n2);i++)
    {
        if((n1%i==0)||(n2%i==0))
            ++c;
    }
    if (c==3 && (((n1-n2)==2)|| ((n2-n1)==2)))
        cout << "Twin Prime\n";
    else
        cout << "Not a Twin Prime\n";
    return 0;
}