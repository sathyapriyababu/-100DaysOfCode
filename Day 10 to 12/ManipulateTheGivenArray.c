#include<stdio.h>
void swap(int *a,int *b)
{
    int t;

    t=*a;
    *a=*b;
    *b=t;
}
void ReversingTheArray(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end)
    {
        swap(&arr[start],&arr[end]);
        ++start;
        --end;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    ReversingTheArray(arr,n);
}
