/**17.Algorithm to find the smallest integer value that can't be represented as
a sum of any subset of a given array.
// C++ program to find the smallest positive value that cannot be
// represented as sum of subsets of a given sorted array
time complexity is O(n)*/
#include <stdio.h>
// Returns the smallest number that cannot be represented as sum
// of subset of elements from set represented by sorted array
//arr[0..n-1]
int findSmallest(int arr[], int n)
{
int res = 1; // Initialize result
// Traverse the array and increment 'res' if arr[i] is
// smaller than or equal to 'res'.
for (int i = 0; i < n && arr[i] <= res; i++)
{res = res + arr[i];
printf("%d ",res);}
printf("\n");
return res;
}
// Driver program to test above function
int main()
{
int arr1[] = {1, 3, 4, 5};
int n1 = sizeof(arr1)/sizeof(arr1[0]);
printf("res1: %d ",findSmallest(arr1, n1));
printf("\n-------------------------------------------\n");
int arr2[] = {1, 2, 6, 10, 11, 15};
int n2 = sizeof(arr2)/sizeof(arr2[0]);
printf("res2: %d ",findSmallest(arr2, n2));
printf("\n-------------------------------------------\n");
int arr3[] = {1, 1, 1, 1};
int n3 = sizeof(arr3)/sizeof(arr3[0]);
printf("res3:%d ",findSmallest(arr3, n3));
printf("\n-------------------------------------------\n");
int arr4[] = {1, 1, 3, 4};
int n4 = sizeof(arr4)/sizeof(arr4[0]);
printf("res4: %d ",findSmallest(arr4, n4));
return 0;
}
