/**Each array element has been substituted with
a value that is the sum of its original value and
its succeeding elements value.
 i.e.arr[i]=arr[i]+arr[i+1]
 value in arr[0]=original value of arr[0]+original
value of arr[1]
 also note that value of last element i.e.arr[last
index]remains unchanged.INPUT FORMAT:
• First line contains the size of the array.
• Second line contains the elements of encoded
array.
OUTPUT FORMAT:
• First line contains the first element in original array
• Second line contains the sum of all the elements in
original array.TEST CASES
SAMPLE INPUT :
6
7 6 8 16 12 3
SAMPLE OUTPUT:
2
27*/
#include<stdio.h>
#include<stdlib.h>
int main()
{   int size,sum=0;
    scanf("%d",&size);
    int *arr=(int*)malloc(sizeof(int)*size);
    int *arr1=(int*)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=size-2;
    arr1[size-1]=arr[size-1];
    sum+=arr1[size-1];
    for(int i=size-2;i>=0;i--)
      {
  arr1[i]=arr[i]-arr1[i+1];
   sum+=arr1[i];
      }

printf("%d %d",arr1[0],sum);
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr1[i]);
    }
    return 0;
}
