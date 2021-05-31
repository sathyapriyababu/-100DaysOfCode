/*
Output :

  *****
   ****
    ***
     **
      *
*/
#include <stdio.h>
void main()
{
int i,j,k,samp=1,n;
printf("Enter number of rows:");
scanf("%d",&n);
for(i=n; i>=1; i--)
{
for(k=samp; k>0; k--)
{
printf(" "); // only 1 space
}
for(j=i; j>=1; j--)
{
printf("*");
}
samp = samp + 1;
printf("\n");
}
getch();
}

