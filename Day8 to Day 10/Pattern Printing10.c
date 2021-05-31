
#include<stdio.h>
int main()
{
    int i,j,n,k,num;
printf("Enter number of rows:");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     num=1;
     for(j=n;j>i;j--)
     {
         printf(" ");
     }
     for(k=1;k<=((2*i)-1);k++)
     {
         printf(" %d ",num);
         num++;
     }

     printf("\n");
 }

    getch();
    return 0;
}
