// You are using GCC
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    int i=0;
    int temp=2;
    while(i<n)
    {
        if(arr[i]==2)
       {arr[i+1]=arr[i];
       i++;
       }
i++;

    }
    for(int j=0;j<n;j++)
    printf("%d ",arr[j]);
    return 0;
}
