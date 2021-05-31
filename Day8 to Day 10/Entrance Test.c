#include<stdio.h>
#include<math.h>
int count(int x,int n,int num)
{
int i;
static int cot;
i=x-pow(num,n);

if(i==0)
{
    printf("\nequal to zero");
return 1;
}
if(i<0)
{
    printf("\nLesser than zero");
return 0;
}
else
   // printf("\n%d ",x);
    //printf("\n%d ",i);
   // printf("%d ",num);
    //printf("%d ",++cot);
    return count(i,n,num+1)+count(x,n,num+1);
}
int countWays(int x,int n)
{
return count(x,n,1);
}
int main()
{
int x,n;
scanf("%d%d",&x,&n);//100 //2
printf("%d",countWays(x,n));
return 0;
}
