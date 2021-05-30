/**
Print array elements that are divisible by at-least one other
Given an array of length N that contains
only integers, the task is to print the
special numbers of array. A number in this
array is called Special number if it is divisible
by at least one other number in the array.

Examples :

Input : 1 2 3
Output : 2 3
Explanation : both 2 and 3 are divisible by 1.

Input : 2 3 4 6 8 9
Output : 4 6 8 9
Explanation : 2 and 3 are not divisible by
any other element. Rest of the element are
divisible by at-least 1 element. 6 is divisible
by both 2 and 3, 4 divisible by 2, 8 divisible by 2
and 4 both, 9 divisible by 3.

Input : 3 5 7 11
Output :no ouput
Explanation : all elements are relatively prime so no special number.*/
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to find special numbers
void divisibilityCheck(int arr[], int n)
{

	// Storing all array elements in a hash
	// and finding maximum element in the array
	unordered_set<int> s;
	int max_ele = INT_MIN;
	for (int i = 0; i < n; i++) {
		s.insert(arr[i]);

		// Update the maximum element of the array
		max_ele = max(max_ele, arr[i]);//inbulid function
	}

	// Traversing the array elements and storing the array
	// multiples that are present in s in res
	unordered_set<int> res;
	for (int i = 0; i < n; i++) {

		// Check for non-zero values only
		if (arr[i] != 0) {
//6 18 3 12 ==>12 18 6 9 12 15 18 (24)-->fails
			// Checking the factors of current element
			for (int j = arr[i] * 2; j <= max_ele; j += arr[i]) {
               cout<<j<<" ";
				// If current factor is already part
				// of the array then store it
				if (s.find(j) != s.end())
					{res.insert(j);//12 18 6 12 18

			}}
		}
	}
cout<<endl;
	// For non-distinct elements
	// To store the frequency of elements
	unordered_map<int, int> mp;//first===>ele ,second===>freq
	for (int i = 0; i < n; i++)
		mp[arr[i]]++;

	unordered_map<int, int>::iterator it;
//for (it = mp.begin(); it != mp.end(); it++)
//{
  //  cout<<it->first<<" ";
//}
cout<<endl;
	vector<int> ans,ans1;
	for (it = mp.begin(); it != mp.end(); it++) {

		// If frequency is at least 2
		if (it->second >= 2) {
			if (res.find(it->first) == res.end()) {

				// If frequency is greater than 1 and
				// the number is not divisible by
				// any other number
				int val = it->second;
                 cout<<val<<" ";
				// Then we push the element number of
				// times it is present in the vector
				while (val--)
					ans.push_back(it->first);}}

		// If frequency is greater than 1 and the number
		// is divisible by any other number
		if (res.find(it->first) != res.end()) {
			int val = it->second;

			// Then we push the element number of
			// times it is present in the vector
			while (val--)
				ans.push_back(it->first);}
}
cout<<endl;
	// Print the elements that are divisible by
	// at least one other element from the array
	for (auto x : ans)
		cout << x << " ";
		cout<<endl;


}

int main()
{
	int arr[] = { 6,18,3,12};
	int n = sizeof(arr) / sizeof(arr[0]);

	divisibilityCheck(arr, n);

	return 0;
}
