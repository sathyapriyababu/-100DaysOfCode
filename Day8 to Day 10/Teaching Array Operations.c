/*Teaching Array Operations
Operations that can be performed on arrays are
Finding the sum of elements in an array
Finding the mean of elements in an array
Finding the median of elements in an array
Write a program to perform the array operations mentioned above using pointer functions.
Problem Requirements:
int sum(int n, int * a)
int median(int n, int * a)
float mean(int n, int * a)
Input format
Input consists of n+1 integers. The first integer corresponds to 'n' the size of the array. The next 'n' integers correspond to the elements of an array. Assume that the maximum value of n is 20 and 'n' is always odd.
Output format
Output consists of 3 lines.
The first line consists of an integer which corresponds to the sum of the elements in an array.
The second line consists of a floating point number which corresponds to the mean of the array. Mean is displayed correct to two decimal places.
The third line consists of an integer which corresponds to the median of the array.
Sample testcases
Input 1
5
1
2
4
5
3
Output 1
15
3.00
3*/
#include<stdio.h>
int sum(int n,int *a)
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int median(int n,int *a)
{
    int i,j,temp=a[0];
    for(i=0;i<n;i++)//for sorting
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j]){
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;}
        }
    }//for sorting
    temp=n/2;
    return a[temp];
}
float mean(int n,int *a)
{
    float i;
    i=sum(n,a);
    return i/n;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d\n%.2f\n%d",sum(n,a),mean(n,a),median(n,a));
    return 0;
}

