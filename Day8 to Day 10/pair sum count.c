///John started to train his robot to parcel the quantity of a product
///purchased by the customer.
///But, the problem here is, every customer asks their quantity of product purchased\
should be in two parcels.For each product John has a set of fixed quantity parcels.\
Now John has to know how many number of set of parcels make the required\
quantity.\
Write a program to help John solve this problem.\
Input format\
Input consists of an Positive integer describing the number of elements in an array,\
followed by elements of the integer array,\
followed by the sum to be arrived.\
Output format\
Output is a String indicating if more than one pair of required sum is present in the\
array or not.\
Sample testcases\
Input 1\
6\
9\
7\
45\
6\
10\
-8\
16\
Output 1\
2 pairs\
Input 2 \
6 \
1 \
4  \
45  \
6  \
10 \
-8 \
16  \
Output 2  \
One pair


#include<stdio.h>
int main()
{
    int n,std,i,j,k=0,sum;
    scanf("%d",&n);//size
int a[n];//array dec
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&sum);

///sorting an array
for (i = 0; i < n-1; i++)
{
for (j = i+1; j < n; j++)
{
if (a[i] > a[j])
{
std=a[i];
a[i]=a[j];
a[j]=std;
}
}
}

///find the sum pair and count it out
for (i = 0; i < n-1; i++)
{
 for (j = i+1; j < n-1; j++)
{
 if(a[i]+a[j]==sum)
        k++;
}

}

if(k>1){printf("%d pairs",k);}
if(k==1){printf("One pair");}
return 0;
}
