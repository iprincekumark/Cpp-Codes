/*
Accept numbers in array A[10] & create another array B[5]. 
The array B first location fills with sum of first & 
second location of array A. The array B second location 
fills with sum of third & forth location of array A. 
Similarly fill all the position of array B & display it.
*/
#include <iostream>
using namespace std;
int main()
{
    int A[10], B[5], i, j = -1;
    cout << "Enter the Elements of Array A :-\n";
    for (i = 0; i < 10; i++)
        cin >> A[i];
    for (i = 0; i < 5; i++)
    {
        B[i] = ++j + j++;
    }
    cout << "Array Elements of Array B are : ";
    for (i = 0; i < 5; i++)
        if (i == 4)
            cout << B[i] << " ";
        else
            cout << B[i] << ",";
}