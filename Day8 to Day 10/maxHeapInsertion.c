#include<stdio.h>
#include<stdlib.h>
void swap(int *,int *);
void insertHeap(int arr[],int,int);
int main()
{

    int arr[]={70,50,40,45,35,39,16,10,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    //int value=30;
    insertHeap(arr,n,30);

    return 0;
}
void swap(int *a,int *b)
{
int t;
t=*a;
*a=*b;
*b=t;
}
void insertHeap(int arr[],int n,int value)
{
n=n+1;
arr[n]=value;
int i=n;
while(i>1)
{
int parent=i/2;
if(arr[parent]<arr[i])
{
swap(&arr[parent],&arr[i]);
i=parent;
}
else
{
return;}}
for(int i=0;i<n-1;i++)
        printf("%d ",arr[i]);
}
