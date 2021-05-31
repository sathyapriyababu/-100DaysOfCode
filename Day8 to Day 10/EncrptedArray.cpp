/**
Find original array from a given encrypted array
of size n. Encrypted array is obtained by replacing
each element of the original array by the sum
of the remaining array elements.
Examples :

Input :  arr[] = {10, 14, 12, 13, 11}
Output : {5, 1, 3, 2, 4}
Original array {5, 1, 3, 2, 4}
Encrypted array is obtained as:
= {1+3+2+4, 5+3+2+4, 5+1+2+4, 5+1+3+4, 5+1+3+2}
= {10, 14, 12, 13, 11}
Each element of original array is replaced by the
sum of the remaining array elements.

Input : arr[] = {95, 107, 103, 88, 110, 87}
Output : {23, 11, 15, 30, 8, 31}

*/

// C++ implementation to find original array
// from the encrypted array
#include <bits/stdc++.h>
using namespace std;

// Finds and prints the elements of the original
// array
void findAndPrintOriginalArray(int arr[], int n)
{
	// total sum of elements
	// of encrypted array
	int arr_sum = 0;
	for (int i=0; i<n; i++)
		arr_sum += arr[i];

	// total sum of elements
	// of original array
	arr_sum = arr_sum/(n-1);

	// calculating and displaying
	// elements of original array
	for (int i=0; i<n; i++)
		cout << (arr_sum - arr[i]) << " ";
}

// Driver program to test above
int main()
{
	int arr[] = {95, 107, 103, 88, 110, 87};

	int n = sizeof(arr) / sizeof(arr[0]);
	findAndPrintOriginalArray(arr, n);
	return 0;
}
