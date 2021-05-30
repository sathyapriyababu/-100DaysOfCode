/**Count of subarrays which start and end with the same element

Given an array A of size N where the array
elements contain values from 1 to N with duplicates,
the task is to find the total number of subarrays that
start and end with the same element.
Examples:

Input: A[] = {1, 2, 1, 5, 2}
Output: 7
Explanation:
Total 7 sub-array of the given array are
{1}, {2}, {1}, {5}, {2}, {1, 2, 1} and
 {2, 1, 5, 2} are start and end with same element.
Input: A[] = {1, 5, 6, 1, 9, 5, 8, 10, 8, 9}
Output: 14
Explanation:
Total 14 sub-array
{1}, {5}, {6}, {1}, {9}, {5}, {8}, {10}, {8}, {9},
{1, 5, 6, 1}, {5, 6, 1, 9, 5}, {9, 5, 8, 10, 8, 9}
and {8, 10, 8} start and end with same element.
*/



// C++ program to Count total sub-array
// which start and end with same element

#include <bits/stdc++.h>
using namespace std;

// function to find total sub-array
// which start and end with same element
void cntArray(int A[], int N)
{
	// initialize result with 0
	int result = 0;

	// array to count frequency of 1 to N
	int frequency[N + 1] = { 0 };

	for (int i = 0; i < N; i++) {
		// update frequency of A[i]
		frequency[A[i]]++;
	}

	for (int i = 1; i <= N; i++) {
		int frequency_of_i = frequency[i];

		// update result with sub-array
		// contributed by number i
		result += +((frequency_of_i)
					* (frequency_of_i + 1))
				/ 2;
	}

	// print the result
	cout << result << endl;
}

// Driver code
int main()
{
	int A[] = { 1, 5, 6, 1, 9, 5,
				8, 10, 8, 9 };
	int N = sizeof(A) / sizeof(int);

	cntArray(A, N);

	return 0;
}
