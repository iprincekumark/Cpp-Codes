#include <iostream> 
using namespace std;
#include <math.h> 

int main(void)
{
    int i, check, num, binNum[32], c=0, a, count;
    cout << "Enter the Positive whole Number between 2 to 100\n";
    cin >> num;
    if (num<3 || num>99)
    {
        cout << "NUMBER OUT OF RANGE\n";
        return 0;
    }
    else
    {
        while(num!=0)
        {
            a = num % 2;
            binNum[c] = a;
            if(a == 1)
             count++;
            num = num / 2;
            c++;
        }
        if (count%2==0)
            cout << "EVIL NUMBER\n";
        else
            cout << "NOT AN EVIL NUMBER\n";
        return 0;
    }
}