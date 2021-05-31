/**
Input: 5
Output 1
*
***
*****
*******
*********

**/
#include<stdio.h>
int main()
{
    int i,j,n;
printf("Enter number of rows:");
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 for(j=0;j<2*i-1;j++)
 {
 printf("*");
 }
 printf("\n");
 }
 return 0;
 }
