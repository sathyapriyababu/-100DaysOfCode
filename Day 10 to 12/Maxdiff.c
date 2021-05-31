#include<stdio.h>
int maxDiff(int arr[],int n)
{
    int maxDiff=arr[1]-arr[0];
    int min_ele=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]-min_ele>maxDiff)
            maxDiff=arr[i]-min_ele;
        if(arr[i]>min_ele)
            min_ele=arr[i];
       printf("%d ",maxDiff);
    }
    printf("\n");
    return maxDiff;
}
int main()
{
    int arr[]={1,2,5,6,9,10,24,56,78};
    int n=sizeof(arr)/sizeof(*arr);
    int maxDif=maxDiff(arr,n);
    printf("%d\n",maxDif);

    return 0;
}
