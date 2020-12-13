/*
Write a C++ program to create a class called ArrayDemo and overload arrayFunc() function.
 void arrayFunc(int [], int, int)->to find a pair of elements (indices of the two numbers) from an given array whose sum equals a specific target number. 
Example
 Array numbers= [10,20,10,40,50,60,70], size=7, target=50
Output: 3, 4
void arrayFunc(int ar1[], int size ,int arr2[], int size2)-> to merge two arrays and removes all duplicates elements.

Example
ar1= [1, 2, 3]  , size=3 , ar2= [2, 30, 1]  , size=3
Output:
[3, 2, 30, 1]
*/
#include <iostream>
using namespace std;
class ArrayDemo
{
public:
    void arrayFunc(int A[], int size, int target)
    {
        int i;
        cout << "Output:-\n";
        for (i = 0; i < (size - 1); i++)
        {
            if ((A[i] + A[i + 1]) == target)
                cout << i + 1 << ", " << i + 2 << endl;
        }
    }
    void arrayFunc(int A[], int size1, int B[], int size2)
    {
        int C[1000], i, j, flag = 0, c = 0;
        for (i = 0; i < size1; i++)
        {
            flag = 1;
            for (j = 0; j < size2; j++)
            {
                if (A[i] == B[j])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                C[c] = A[i];
                c++;
            }
        }
        for (i = 0; i < size2; i++)
        {
            C[c] = B[i];
            c++;
        }
        for (j = 0; j < c; j++)
            cout << C[j] << " ";
    }
};
int main()
{
    int A[1000], B[1000], C[1000], size, size1, size2, target, i;
    ArrayDemo D;
    cout << "Enter the Size of the Array :\n";
    cin >> size;
    cout << "Enter the Integers in the Array :\n";
    for (i = 0; i < size; i++)
        cin >> A[i];
    cout << "Enter the target : \n";
    cin >> target;
    fflush(stdin);
    cout << "Enter the Size of the Array 1 :\n";
    cin >> size1;
    cout << "Enter the Integers in the Array 1 :\n";
    for (i = 0; i < size1; i++)
        cin >> B[i];
    cout << "Enter the Size of the Array 2 :\n";
    cin >> size2;
    cout << "Enter the Integers in the Array 2 :\n";
    for (i = 0; i < size2; i++)
        cin >> C[i];
    D.arrayFunc(A, size, target);
    D.arrayFunc(B, size1, C, size2);
}