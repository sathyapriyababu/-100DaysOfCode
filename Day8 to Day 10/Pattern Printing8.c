/*
     1
    2  2
   3  3  3
  4  4  4  4
 5  5  5  5  5
*/

#include<stdio.h>
int main()
{
    int i,j,n,k,num=1;
printf("Enter number of rows:");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=n;j>i;j--)
     {
         printf(" ");
     }
     for(k=1;k<=i;k++)
     {
         printf(" %d ",num);
     }
     num++;
     printf("\n");
 }

    getch();
    return 0;
}
