/*9.	Algorithm to find two repeating numbers in a given array*/
#include<stdio.h>
void printRepeatingElem(int arr[],int n)
{
    int i,j;
    j=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
            arr[j++]=arr[i+1];
    }

    for(i=0;i<j;i++)
       printf("%d ",arr[i]);
}
int main()
{

int arr[]={2,2,3,3,4,5,6,6,7,8,9};//only for sorted array
int n=sizeof(arr)/sizeof(arr[0]);
printRepeatingElem(arr,n);
return 0;
}
