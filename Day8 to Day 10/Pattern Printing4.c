/*Output :

     *
    **
   ***
  ****
 *****
Program :
/* Program to print pyramid pattern in C : Pattern 3
*/
#include <stdio.h>
void main()
{
int i,j,k,n;
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
getch();
}

