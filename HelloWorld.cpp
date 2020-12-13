#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T, A, B, i, evenofA, oddofA, evenofB, oddofB;
	cin >> T;
	for(i=0;i<T;i++)
	{
	    cin >> A;
	    cin >> B;
	    evenofA = A/2;
	    oddofA = (A+1)/2;
	    evenofB = B/2;
	    oddofB = (B+1)/2;
	    cout << ((evenofA*evenofB)+(oddofA*oddofB));
	}
	return 0;
}
