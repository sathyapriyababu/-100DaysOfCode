/**20.Given an array of integers, sort the array into a wave like array and
return it. (arrange the element into a sequence such that
a1>=a2<=a3>=a4<=a5----etc.*/
// A C++ program to sort an array in wave form using
// a sorting function
#include<iostream>
#include<algorithm>
using namespace std;
// A utility method to swap two numbers.
void swap(int *x, int *y)
{
int temp = *x;
*x = *y;
*y = temp;
}
// This function sorts arr[0..n-1] in wave form, i.e.,
// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5]..
/*void sortInWave(int arr[], int n)
{
// Sort the input array
sort(arr, arr+n);
// Swap adjacent elements
for (int i=0; i<n-1; i += 2)
swap(&arr[i], &arr[i+1]);
}*/
void sortInWave(int arr[],int n)
{
    for (int i=0; i<n-1; i += 2)
   {if(i>0&&arr[i-1]>arr[i])
        swap(&arr[i],&arr[i-1]);
    if(i<n-1&&arr[i]<arr[i+1])
        swap(&arr[i],&arr[i+1]);

   }
}
// Driver program to test above function
int main()
{
int arr[] = {10, 90, 49, 2, 1, 5, 23};
int n = sizeof(arr)/sizeof(arr[0]);
sortInWave(arr, n);
for (int i=0; i<n; i++)
cout << arr[i] << " ";
return 0;
}

