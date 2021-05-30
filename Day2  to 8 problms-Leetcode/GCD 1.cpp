/**Given an array of integers. Find an integer X which is the divisor of all except for exactly one element in the given array.
Note: The GCD of all the elements is not 1.


Examples:

Input : arr[] = {6, 18, 3, 12}
Output : 6
6 is the divisor of all except 3.

Input : arr[] = {40, 15, 30, 42}
Output : 3
3 is the divisor of all except 40.
*/
// C++ program to find the divisor of all
// except for exactly one element in an array.

#include <bits/stdc++.h>
using namespace std;

// Function that returns the divisor of all
// except for exactly one element in an array.
int getDivisor(int a[], int n)
{
	// There's only one element in the array
	if (n == 1)
		return (a[0] + 1);

	int P[n], S[n];

	// Creating prefix array of GCD
	P[0] = a[0];
	for (int i = 1; i < n; i++)
		P[i] = __gcd(a[i], P[i - 1]);

	// Creating suffix array of GCD
	S[n-1] = a[n-1];
	for (int i = n - 2; i >= 0; i--)
		S[i] = __gcd(S[i + 1], a[i]);

	// Iterate through the array
	for (int i = 0; i <= n; i++) {

		// Variable to store the divisor
		int cur;

		// Getting the divisor
		if (i == 0)
			cur = S[i + 1];
		else if (i == n - 1)
			cur = P[i - 1];
		else
			cur = __gcd(P[i - 1], S[i + 1]);

		// Check if it is not a divisor of a[i]
		if (a[i] % cur != 0)
			return cur;
	}

	return 0;
}

// Driver code
int main()
{
	int a[] = { 12, 6, 18, 12, 16 };

	int n = sizeof(a) / sizeof(a[0]);

	cout << getDivisor(a, n);

	return 0;
}
