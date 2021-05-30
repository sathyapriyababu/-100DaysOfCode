/**Number of sub-arrays that have at least one duplicate

Given an array arr of n elements,
the task is to find the number of the sub-arrays
of the given array that contain at least one duplicate element.


Time Complexity: O(N)

Auxiliary Space: O(N)



Examples:

Input: arr[] = {1, 2, 3}
Output: 0
There is no sub-array with duplicate elements.
Input: arr[] = {4, 3, 4, 3}
Output: 3
Possible sub-arrays are {4, 3, 4}, {4, 3, 4, 3} and {3, 4, 3}
 */

// C++ implementation of the approach
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

// Function to return the count of the
// sub-arrays that have at least one duplicate
ll count(ll arr[], ll n)
{
	ll unique = 0;

	// two pointers
	ll i = -1, j = 0;

	// to store frequencies of the numbers
	unordered_map<ll, ll> freq;
	for (j = 0; j < n; j++) {
		freq[arr[j]]++;

		// number is not distinct
		if (freq[arr[j]] >= 2) {
			i++;
			while (arr[i] != arr[j]) {
				freq[arr[i]]--;
				i++;
			}
			freq[arr[i]]--;
			unique = unique + (j - i);
		}
		else
			unique = unique + (j - i);
	}

	ll total = n * (n + 1) / 2;

	return total - unique;
}

// Driver code
int main()
{
	ll arr[] = { 4, 3, 4, 3 };
	ll n = sizeof(arr) / sizeof(arr[0]);
	cout << count(arr, n) << endl;
	return 0;
}
/** java
// Java implementation of the approach
import java.util.*;

class GFG
{

// Function to return the count of the
// sub-arrays that have at least one duplicate
static Integer count(Integer arr[], Integer n)
{
	Integer unique = 0;

	// two pointers
	Integer i = -1, j = 0;

	// to store frequencies of the numbers
	Map<Integer, Integer> freq = new HashMap<>();
	for (j = 0; j < n; j++)
	{
		if(freq.containsKey(arr[j]))
		{
			freq.put(arr[j], freq.get(arr[j]) + 1);
		}
		else
		{
			freq.put(arr[j], 1);
		}

		// number is not distinct
		if (freq.get(arr[j]) >= 2)
		{
			i++;
			while (arr[i] != arr[j])
			{
				freq.put(arr[i], freq.get(arr[i]) - 1);
				i++;
			}
			freq.put(arr[i], freq.get(arr[i]) - 1);
			unique = unique + (j - i);
		}
		else
			unique = unique + (j - i);
	}

	Integer total = n * (n + 1) / 2;

	return total - unique;
}

// Driver code
public static void main(String[] args)
{
	Integer arr[] = { 4, 3, 4, 3 };
	Integer n = arr.length;
	System.out.println(count(arr, n));
}
}

*/
