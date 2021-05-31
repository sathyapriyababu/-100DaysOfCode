//Given the array of 0's and 1's ,sort them in Linear time(o(n))
#include<stdio.h>
/*
//Approach---->1 countzero to that range put zero bal upto n
void  SortZerosandOnes(int arr[],int n)
  {
      int countZero=0;
      for(int i=0;i<n;i++)
        if(arr[i]==0)
        ++countZero;
      for(int i=0;i<countZero;i++)
        arr[i]=0;
      for(int i=countZero;i<n;i++)
        arr[i]=1;
  }
*/
//Approach----->2  using Swap function
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
void  SortZerosandOnes(int arr[],int n)
  {
      int Zeroindex=0;
      for(int i=0;i<n;i++)
       {
         if(arr[i]==0)
          {
        swap(&arr[i],&arr[i+1]);
        ++Zeroindex;
          }
       }
       for(int i=0;i<n;i++)
        printf("%d",arr[i]);
  }
/*
  int main() {
    int arr[] = {1,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,1};
    int N = sizeof arr / sizeof *arr; // 18
    int sum = 0;
    int ndx;
    for (ndx=0; ndx<N; ndx++) sum += arr[ndx];
    for (ndx=0; ndx<N-sum; ndx++) arr[ndx] = 0;
    for (ndx=N-sum; ndx<N; ndx++) arr[ndx] = 1;
    for(int i=0;i<N;i++)
    printf("%d",arr[i]);
}
*/
int main()
{
    int arr[]={0,1,1,1,0,0,1,0,1,0};
    int n= sizeof(arr)/sizeof(arr[0]);
    SortZerosandOnes(arr,n);

    return 0;
}
