/*
Write a C++ program to input any string and arrange all 
characters in following order.
Digit + Uppercase + Lowercase + Special Characters
      
Sample Example:
Input:     GrAphic567E#@RA
Output:    567GAERArphic#@
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char line[150];
    string line1, vowels, consonants, digits, spaces, upper, lower, special;
    vowels = consonants = digits = upper = lower = special = "";
    cout << "Enter a line of string: \n";
    cin.getline(line, 150);
    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] >= '0' && line[i] <= '9')
            digits = digits + line[i];
        if (line[i] >= 'A' && line[i] <= 'Z')
            upper = upper + line[i];
        if (line[i] >= 'a' && line[i] <= 'z')
            lower = lower + line[i];
        if (!(line[i] >= '0' && line[i] <= '9') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] >= 'a' && line[i] <= 'z') && !(line[i] == ' '))
            special = special + line[i];
    }
    line1 = digits + upper + lower + special;
    cout << line1;
    return 0;
}
