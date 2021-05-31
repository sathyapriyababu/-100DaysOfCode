#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=0; i<=n; i++)
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

i=1;
    while(i<=n)
    {
        int j=n;
        for(k=1; k<=i; k++)
{
printf(" ");
}
        while(j>=i)
        {
         printf("%d",j--);
        }
        printf("\n");
        i++;
    }

for(i=1;i<n*2;i+=2)
{
for(j=i;j<n*2;j+=2)
{
printf("%d",j);
}
printf("\n");
}




    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

