//when a sorted array of Length n,find the element which is repeated more than n/2 times .if such no element return -1
#include<stdio.h>
int repeatedMoreThanHalf(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
      if(arr[i]==arr[n/2+i])
         return arr[i];
    }
return -1;
}
int main()
{

    int arr[]={0,1,6,6,6,6,6,6,8,9,10};
    printf("%d",repeatedMoreThanHalf(arr,sizeof(arr)/sizeof(arr[0])));

}
