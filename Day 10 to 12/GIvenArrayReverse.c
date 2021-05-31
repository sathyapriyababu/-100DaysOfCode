#include<stdio.h>
void printReverse(int *arr,int size)
{
    for(int i=size-1;i>=0;i--)
    {
        printf("%d ",*(arr+i));
    }
}
void main()
{
    int arr[]={10,20,30,40,50};
    printReverse(arr,sizeof(arr)/sizeof(arr[0]));
}
