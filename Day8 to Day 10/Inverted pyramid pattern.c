/*

 * * * * *
 * * * *
 * * *
 * *
 *

/* Program to print pyramid pattern in C : Pattern 4

#include <stdio.h>
int  main()
{
int i,j,n,k;
scanf("%d",&n);
for(i=0; i<n; i++)
{
for(j=n; j>i; j--)
{
printf("* ");
}
for(k=1;k<=i;k++)
  {
printf(" ");
}
printf("\n");
}
getch();
}*/
#include <stdio.h>
void main()
{
int i,j,n;
printf("Enter number of rows:");
scanf("%d",&n);
for(i=n; i>=1; i--)
{
for(j=1; j<=i; j++)
{
printf(" * ");
}
printf("\n");
}
getch();
}
