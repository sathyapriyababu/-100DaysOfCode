/*Fortune Telling
Marina loves Sasha. But she keeps wondering whether Sasha loves her. Of course,
the best way to know it is fortune telling. There are many ways of
telling fortune,but Marina has picked the easiest one.
She takes in her hand one or several camomiles and
tears off the petals one by one. After each petal
she pronounces alternatively "Loves"
and "Doesn't love", at that Marina always starts with "Loves".
There are n chamomiles growing in the field, possessing
the numbers of petals equal to a1, a2, ... an. Marina
wants to pick a bouquet with the maximal possible total
number of petals so that the result would still be "Loves".
Write a program to find the maximal number of petals
possible in the bouquet.
Input format
The first input contains an integer n (1 ≤ n ≤ 20),
which corresponds to the number of
flowers growing in the field.
The next 'n' lines contains n integers ai (1 ≤ ai ≤ 20)
which represent the number of
petals on a given i-th camomile.
Output format
The output displays a single number which is the maximal number
of petals in the bouquet, the fortune telling on
which would result in "Loves".If there are no such bouquet,
print "0"(without quotes) instead. The bouquet may
consist of a single flower.
Sample testcases
Input 1
1
1
Output 1
Maximum number of petals in the bouquet = 1
Input 2
3
5 6 7
Output 2
Maximum number of petals in the bouquet = 13
*/
#include<stdio.h>
int main()
{//o(n)--->Time complexity
    int n,sum=0,j=0,k=2147483647;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
for(int i=0;i<n;i++)
{
if((arr[i]%2==1) &&(k>arr[i]))
   {
       k=arr[i];//3
       printf("%d",k);
       }
if(arr[i]%2==1)
            {
                j++;
            }
            sum=sum+arr[i];
            printf("%d",sum);
}
if(j==0)
    sum=0;
else if(j%2==0)
  sum=sum-k;
printf("Maximum number of petals in the bouquet = %d",sum);

}
