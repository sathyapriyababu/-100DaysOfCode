/**
Get the integer array input from the user and,
 print all the pairs having a positive value and
negative value of a number that exists in the array.
We need to print pairs in order of their
occurrences. A pair whose any element appears first should be printed first.
Input format
The input consists of the number of elements in an array in first line
Array elements in second line separated by space
Output format
Display the pairs, as a positive number followed by a negative number.
Code constraints
N >0.
Sample testcases
Input 1
8
4 8 9 -4 1 -1 -8 -9
Output 1
4 -4 8 -8 9 -9 1 -1
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
scanf("%d",&n);
int i,j,k=0;
int arr[n],result[n/2];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(abs(arr[i])==abs(arr[j]))
{
result[k++]=abs(arr[i]);
}
}
}
for(i=0;i<k;i++)
{
printf("%d -%d ",result[i],result[i]);
}
}
