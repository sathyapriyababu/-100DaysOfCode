/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
Program :
/* Program to print pyramid pattern in C : Pattern 1
*/
#include <stdio.h>
int  main()
{
int i,j,n;
printf("Enter number of rows:");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
for(j=0; j<n; j++)
{
printf(" * ");
}
printf("\n");
}
getch();
}

