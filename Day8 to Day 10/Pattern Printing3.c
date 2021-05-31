/*
    *
   * *
  * * *
 * * * *     -->pyramid pattern

*/
#include <stdio.h>
int  main()
{
int i,j,n,k;
printf("Enter number of rows:");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=n; j>i; j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
  {
printf("* ");
}
printf("\n");
}
getch();
}
