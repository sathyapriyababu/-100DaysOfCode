/**Partition a set into two subsets such
 that the difference of subset sums is minimum
 Given a set of integers, the task is to divide it
 into two sets S1 and S2 such that the absolute difference
 between their sums is minimum.
If there is a set S with n elements,
then if we assume Subset1 has m elements,
Subset2 must have n-m elements and the value
of abs(sum(Subset1) – sum(Subset2)) should be minimum.
Example:

Input:  arr[] = {1, 6, 11, 5}
Output: 1
Explanation:
Subset1 = {1, 5, 6}, sum of Subset1 = 12
Subset2 = {11}, sum of Subset2 = 11        */
// A Recursive C program to solve minimum sum partition
// problem. by using Dynamic programming
#include <bits/stdc++.h>
using namespace std;

// Returns the minimum value of the difference of the two sets.
int findMin(int arr[], int n)
{
	// Calculate sum of all elements
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += arr[i];

	// Create an array to store results of subproblems
	bool dp[n+1][sum+1];

	// Initialize first column as true. 0 sum is possible
	// with all elements.
	for (int i = 0; i <= n; i++)
		dp[i][0] = true;

	// Initialize top row, except dp[0][0], as false. With
	// 0 elements, no other sum except 0 is possible
	for (int i = 1; i <= sum; i++)
		dp[0][i] = false;

	// Fill the partition table in bottom up manner
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=sum; j++)
		{
			// If i'th element is excluded
			dp[i][j] = dp[i-1][j];

			// If i'th element is included
			if (arr[i-1] <= j)
				dp[i][j] |= dp[i-1][j-arr[i-1]];
		}
	}

	// Initialize difference of two sums.
	int diff = INT_MAX;

	// Find the largest j such that dp[n][j]
	// is true where j loops from sum/2 t0 0
	for (int j=sum/2; j>=0; j--)
	{
		// Find the
		if (dp[n][j] == true)
		{
			diff = sum-2*j;
			break;
		}
	}
	return diff;
}

// Driver program to test above function
int main()
{
	int arr[] = {3, 1, 4, 2, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "The minimum difference between 2 sets is "
		<< findMin(arr, n);
	return 0;
}
/** java
// A Recursive java program to solve
// minimum sum partition problem.
import java.io.*;

class GFG
{
	// Returns the minimum value of
	//the difference of the two sets.
	static int findMin(int arr[], int n)
	{
		// Calculate sum of all elements
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += arr[i];

		// Create an array to store
		// results of subproblems
		boolean dp[][] = new boolean[n + 1][sum + 1];

		// Initialize first column as true.
		// 0 sum is possible with all elements.
		for (int i = 0; i <= n; i++)
			dp[i][0] = true;

		// Initialize top row, except dp[0][0],
		// as false. With 0 elements, no other
		// sum except 0 is possible
		for (int i = 1; i <= sum; i++)
			dp[0][i] = false;

		// Fill the partition table
		// in bottom up manner
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= sum; j++)
			{
				// If i'th element is excluded
				dp[i][j] = dp[i - 1][j];

				// If i'th element is included
				if (arr[i - 1] <= j)
					dp[i][j] |= dp[i - 1][j - arr[i - 1]];
			}
		}

		// Initialize difference of two sums.
		int diff = Integer.MAX_VALUE;

		// Find the largest j such that dp[n][j]
		// is true where j loops from sum/2 t0 0
		for (int j = sum / 2; j >= 0; j--)
		{
			// Find the
			if (dp[n][j] == true)
			{
				diff = sum - 2 * j;
				break;
			}
		}
		return diff;
	}

	// Driver program
	public static void main (String[] args)
	{
		int arr[] = {3, 1, 4, 2, 2, 1};
		int n = arr.length;
		System.out.println ("The minimum difference between 2 sets is "
							+ findMin(arr, n));

	}
}
*/
/** c++
#include <iostream>
#include <string>
using namespace std;

// Partition set `S` into two subsets, `S1` and `S2`, such that the
// difference between the sum of elements in `S1` and the sum
// of elements in `S2` is minimized
int minPartition(int S[], int n, int S1, int S2)
{
    // Base case: if the list becomes empty, return the absolute
    // difference between both sets
    if (n < 0) {
        return abs(S1 - S2);
    }

    // Case 1. Include the current item in subset `S1` and recur
    // for the remaining items `n-1`
    int inc = minPartition(S, n - 1, S1 + S[n], S2);

    // Case 2. Exclude the current item from subset `S1` and recur for
    // the remaining items `n-1`
    int exc = minPartition(S, n - 1, S1, S2 + S[n]);

    return min(inc, exc);
}

int main()
{
    // Input: a set of items
    int S[] = { 10, 20, 15, 5, 25};

    // total number of items
    int n = sizeof(S) / sizeof(S[0]);

    cout << "The minimum difference is " << minPartition(S, n - 1, 0, 0);

    return 0;
}s

*/
