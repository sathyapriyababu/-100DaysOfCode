#include<stdio.h>
int main()
{
    int a=1,b=1,d=1;
    printf("%d,%d ,%d",++a+++a +a++,a+++++b,++d+d+++a++);
    return 0;
}
/*void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;

}
int main()
{

    int arr[]={1,2,3,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++)
    {for(int j=0;j<n-i-1;j++)
        {
          if(arr[j]>arr[j+1])
          swap(&arr[j],&arr[j+1]);
        }
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
}
