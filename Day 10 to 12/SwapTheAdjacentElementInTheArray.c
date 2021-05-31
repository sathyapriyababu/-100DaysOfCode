#include<stdio.h>
void swap(int *a,int *b)
{

    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void SwapTheAdjacent(int *arr,int size)
{
    for(int i=0;i<size;i=i+2)
    {

        swap(&arr[i],&arr[i++]);
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
    SwapTheAdjacent(arr,n);
}
