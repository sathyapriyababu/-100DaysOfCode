#include<stdio.h>
int min(int  cnt_of_2s,int cnt_of_5s)
{
    return (cnt_of_2s>cnt_of_5s?cnt_of_5s:cnt_of_2s);
}
 int TraillingZeros(int n)
 {
     int cnt_of_2s=0,cnt_of_5s=0;
     for(int i=1;i<=n;i++)
     {
         int val=i;

// If we get a factor 2 then we
// have i number of 2s because
// the power of the number is
// raised to i

         while(val%2==0 && val>0)
       {
         val=val/2;
         printf("2s i=%d ",i);
         cnt_of_2s=cnt_of_2s+i;//2//6//10
         printf("2s=%d ",cnt_of_2s);
       }
printf("\n");
// If we get a factor 5 then
// we have i number of 5s
// because the power of the
// number is raised to i

         while(val%5==0 && val>0)
       {
         val=val/5;
         printf("5s i=%d ",i);
         cnt_of_5s=cnt_of_5s+i;
         printf("5s=%d ",cnt_of_5s);
       }
       printf("\n");
     }
     int min_val=min(cnt_of_2s,cnt_of_5s);

     return min_val;
 }
int main()
{
    int n;
    scanf("%d",&n);
   int min= TraillingZeros(n);
    printf("%d",min);
    return 0;
}
