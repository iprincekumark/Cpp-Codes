#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    char ch;
    cout << "Enter the sentence \n";
    getline(cin, str);
    cout << "Enter the character to check the frequency\n";
    cin >> ch;
    int count = 0;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ch)
        {
            ++count;
        }
    }

    cout << "Number of " << ch << " = " << count;

    return 0;
}