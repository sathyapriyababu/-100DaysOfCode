/*

Output :

 *
 * *
 * * *
 * * * *
 * * * * *
 * * * *
 * * *
 * *
 *

*/
#include <stdio.h>
void main()
{
int i,j,k,n,samp=1;
printf("Enter number of rows:");
scanf("%d",&n);

for(i=1; i<=n; i++)
{
for(j=n; j>=i; j--)
{
printf(" ");
}
for(k=1; k<=i; k++)
{
printf("*");
}
printf("\n");
}

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
