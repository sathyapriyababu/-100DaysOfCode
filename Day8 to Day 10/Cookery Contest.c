/*Cookery Contest
Suzanne is participating in the Cookery Contest to be held at her Company.
Suzanne is just a beginner in cooking but is more creative.
She wanted to give a good show though she is going to cook for the first time.
So she decided to cook only a small portion of her recipe,
which has the same ratios of ingredients, but makes less food.
Suzanne however, does not like fractions.
The original recipe contains only whole numbers of ingredients,
and Suzanne wants the reduced recipe to only contain whole numbers of
ingredients as well.
Help her determine how much of each ingredient to use in order to make as
little food as possible.
Input format
The first line of the input consists of a positive integer N,
which corresponds to the number of ingredients.
Next line contains N space-separated integers,
each indicating the quantity of a particular ingredient that is used.
Output format
Output exactly N space-separated integers on a line that gives the
quantity of each ingredient that Suzanne should use in order to make as
little food as possible.
Refer sample input and output for formatting specifications.
Sample testcases
Input 1
2
4 4
Output 1
1 1
Input 2
5
2 3 5 7 11
Output 2
2 3 5 7 11
*/
#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);//n array size//2
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//getting the array values...//4  4
    }
    j=a[0];//intialize j with first array value and find the min element
    for(i=0;i<n;i++)//walk through the array  /
    {
        if(j>a[i])//4>4 --->false//4>4 -->f
        {
                j=a[i];
        }
    }
    printf("j=%d\n",j);
    i=2;
    for(k=0;i<=j;k++)
    {
        printf("f k=%d\n",k);
               if((a[k]%i)!=0)
               {
                i++;
                k=-1;
                printf("1");
               }
        else if(k==n-1)
        {
            for(k=0;k<n;k++)
            {
                printf("%d",a[k]);
                a[k]=a[k]/i;
                printf("2");
                printf("%d ",a[k]);
            }
            i=2;
            k=-1;
        }

        printf("\nL k=%d\n",k);//-1
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

