/*
Enter number of rows:5
     1
    1  2
   1  2  3
  1  2  3  4
 1  2  3  4  5
*/
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
     for(k=1;k<=i;k++)
     {
         printf(" %d ",num);
         num++;
     }

     printf("\n");
 }

    getch();
    return 0;
}
