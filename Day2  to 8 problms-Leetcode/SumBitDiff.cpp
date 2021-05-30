/**22.Algorithm to find the sum of bit differences in all pairs that can be
formed from an array of n elements.
Efficient Solution –
An Efficient Solution can solve this problem in O(n) time using the
fact that all numbers are represented using 32 bits (or some fixed
number of bits). The idea is to count differences at individual bit
positions. We traverse from 0 to 31 and count numbers with i’th bit
set. Let this count be ‘count’. There would be “n-count” numbers with
i’th bit not set. So count of differences at i’th bit would be
“count * (ncount) * 2”, the reason for this
 formula is as every pair having one
element which has set bit at i’th position and second element having
unset bit at i’th position contributes exactly 1 to sum, therefore total
permutation count will be count*(n-count) and multiply by 2 is due to
one more repetition of all this type of pair as per given condition for
making pair 1<=i, j<=N.**/
// C++ program to compute sum of pairwise bit differences
#include <bits/stdc++.h>
using namespace std;
int sumBitDifferences(int arr[], int n)
{
int ans = 0; // Initialize result
// traverse over all bits
for (int i = 0; i <32; i++) {
// count number of elements with i'th bit set
int count = 0,c=0;
for (int j = 0; j < n; j++)//for traversing the array
{if ((arr[j] & (1 << i)))
{cout<<"((arr[j] & (1 << i))) :"<<((arr[j] & (1 << i)))<<endl;
count++;
cout<<"<<--INSIDE IF-->>"<<endl;
}
cout<<"((arr[j] & (1 << i))) :"<<((arr[j] & (1 << i)))<<endl;
cout<<">>--OUTSIDE IF--<<"<<endl;
cout<<"arr[j]:"<<arr[j]<<" "<<"count:"<<count<<endl;
cout<<endl;
}
// Add "count * (n - count) * 2" to the answer
ans += (count * (n - count) * 2);//0+(3*(3-3)*2)   ==>0//0+(1*(3-1)*2) ==>4
//4+(1*(3-1)*2)==>4+4 ==>8
cout<<"ans :"<<ans<<endl;
}
return ans;
}
// Driver prorgram
int main()
{
int arr[] = { 1, 3, 5 };
int n = sizeof arr / sizeof arr[0];
cout << sumBitDifferences(arr, n) << endl;
return 0;
}
