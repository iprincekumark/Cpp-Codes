#include <iostream>
using namespace std;

int main()
{
    int n,first,last;
    cout << " Input any number: ";
    cin >> n;
    first = n;
	last=n % 10;
	for(first=n;first>=10;first=first/10);
    cout<<" The first digit of is: "<<first<<endl;
    cout<<" The last digit of is: "<<last<<endl;
}