/**
Sum of Prime Index:
Given the array of N elements, find the sum
of values that are present in prime index of
the given array.INPUT FORMAT:
First line of input contains the size of array.
 Second line contains array elements.
OUTPUT FORMAT:
It contains the sum of elements present in prime
indexes of the array
Constraints:
-10000 <= array_elements <= 10000
*/
#include<stdio.h>
#include<math.h>
int isPrime(int n)
{

    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int  primeIndexSum(int arr[],int n)
{int sum=0;
    for(int i=2;i<n;i++)
if(isPrime(i))
{printf("%d ",arr[i]);
sum+=arr[i];}
return sum;
}
void main()
{
    int arr[]={10,20,30,40,50,60,70,80,90,100};

    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=primeIndexSum(arr,n);
    printf("%d",sum);
    return 0;
}
