#include<stdio.h>
int Triplet(int arr[],int sum,int n)
{

    int l,r,i;
   // sort(arr,arr+n);
   for(i=0;i<n-2;i++)
   {
       l=i+1;//for every iteration next elemnt of arr[i]
       r=n-1;//last elemnet
       while(l<r)
       {
           if(arr[i]+arr[l]+arr[r]==sum)
           {
               printf("Triplet Sum of %d %d %d is %d",arr[i],arr[l],arr[r],sum);
               return true;
           }
           else if(arr[i]+arr[l]+arr[r]>sum)
            r--;
           else
            l++;
       }

   }
   return  false;
}
int main()
{//int arr[]={10,2,-2,-20,-10};
int arr[]={1, 4, 45, 6, 10, 8 };
int n=sizeof(arr)/sizeof(arr[0]);
int sum=22;
if(Triplet(arr,sum,n)==false)
{
    printf("No Triplet Sum found!!..Try for another no");
}
return 0;}
