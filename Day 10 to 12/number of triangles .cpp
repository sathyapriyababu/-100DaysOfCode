/*Algorithm to find the number of triangles that can be formed with
three different array elements as three sides of triangles,
for a given unsorted array of n elements.*/
// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;

void CountTriangles(vector<int> A)
{

	int n = A.size();

	sort(A.begin(), A.end());//sort the given array
	auto itr=A.begin();
while(itr!=A.end())
   {
    cout<<*itr<<" ";
    ++itr;
   }


	int count = 0;

	for (int i = n - 1; i >= 1; i--) {
		int l = 0, r = i - 1;
		while (l < r) {
			if (A[l] + A[r] > A[i]) {

				// If it is possible with a[l], a[r]
				// and a[i] then it is also possible
				// with a[l+1]..a[r-1], a[r] and a[i]
				count += r - l;

				// checking for more possible solutions
				r--;
			}
			else

				// if not possible check for
				// higher values of arr[l]
				l++;
		}
	}
	cout << "No of possible solutions: " << count;
}
int main()
{

	vector<int> A = { 4, 3, 5, 7, 6 };

	CountTriangles(A);
}

