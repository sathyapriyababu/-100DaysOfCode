    #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {

            if(i%2!=0)
            {
             printf("%d ",k);
            }
            else
            {
             printf("%d ",k++);
            }
        }
        printf("\n");
    }
    return 0;

    }
