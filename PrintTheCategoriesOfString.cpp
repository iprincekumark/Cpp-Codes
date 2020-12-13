/*
Write a C++ program to input any string and count
number of uppercase, lowercase, vowel and digit 
characters in a given string.
*/
#include <iostream>
using namespace std;

int main()
{
    char line[150];
    int vowels, consonants, digits, spaces, upper, lower, special;
    vowels = consonants = digits = spaces = upper = lower = special = 0;
    cout << "Enter a line of string: \n";
    cin.getline(line, 150);
    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] >= '0' && line[i] <= '9')
            ++digits;
        if (line[i] >= 'A' && line[i] <= 'Z')
            ++upper;
        if (line[i] >= 'a' && line[i] <= 'z')
            ++lower;
        if (line[i] == ' ')
            ++spaces;
        if (!(line[i] >= '0' && line[i] <= '9') && !(line[i] >= 'A' && line[i] <= 'Z') && !(line[i] >= 'a' && line[i] <= 'z') && !(line[i] == ' '))
            ++special;
    }
    for (int i = 0; line[i] != '\0'; ++i)
    {
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u' || line[i] == 'A' ||
            line[i] == 'E' || line[i] == 'I' || line[i] == 'O' ||
            line[i] == 'U')
            ++vowels;
        else
        {
            ++consonants;
        }
    }
    cout << "Upper case: " << upper << endl;
    cout << "Lower case: " << lower << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Digits: " << digits << endl;
    cout << "Consonants: " << (consonants - (digits + spaces)) << endl;
    cout << "White spaces: " << spaces << endl;
    cout << "Special Characters: " << special;

    return 0;
}
