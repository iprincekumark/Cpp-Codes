/*
Create two arrays A and B of size 5 and C of size 10. Accept numbers in two  arrays A and B. 
Fill the array C in such a way that the first five positions occupy the numbers present in 
array A and rest of five positions occupy the numbers present in array B.
*/
#include <iostream>
using namespace std;
int main()
{
    int A[5], B[5], C[10], j = 5, i;
    cout << "Enter the Integer Elements in Array A :-\n";
    for (i = 0; i < 5; i++)
        cin >> A[i];
    cout << "Enter the Integer Elements in Array B :-\n";
    for (i = 0; i < 5; i++)
        cin >> B[i];
    for (i = 0; i < 10; i++)
    {
        if (i < 5)
            C[i] = A[i];
        else
            C[i] = B[(i - j)];
    }
    cout << "Array Elements of C are : ";
    for (i = 0; i < 10; i++)
        cout << C[i] << " ";
}