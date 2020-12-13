/*
Write a C++ function to update all the elements of a given 2D array except the secondary 
diagonal elements (the diagonal from bottom-left to top-right). Height and width of the 
matrix are also provided as arguments.
*/
#include <iostream>
using namespace std;
int main()
{
    int A[100][100], i, j, n;
    cout << "Enter the order of the matrix :- \n";
    cin >> n;
    cout << "Enter the Elements :- \n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            cin >> A[i][j];
    cout << "Enter the Elements to update the Matrix :-\n";
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if ((i + j) > (n - 1))
                cin >> A[i][j];
        }
    cout << "Updated Matix :-\n";
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    return 0;
}