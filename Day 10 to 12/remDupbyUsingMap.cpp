#include <bits/stdc++.h>
using namespace std;
void remDup(int arr[],int n)
{
    unordered_map<int, bool> mp;

	for (int i = 0; i < n; ++i) {

		if (mp.find(arr[i])== mp.end()) {
			cout << arr[i] << " ";
		}
		mp[arr[i]] = true;

	}

}
int main()
{
	int arr[] = {7,10,2,8,8,2,2,2,5,5,5,5,6,6,2,4,4,4,-6,0,10,16};
	int n = sizeof(arr) / sizeof(arr[0]);
	int sum = 6;
	remDup(arr,n);
	//printPairs(arr, n, sum);
	return 0;
}
