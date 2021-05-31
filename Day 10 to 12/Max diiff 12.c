/*12. Algorithm to find the maximum difference of
j - i such that
a[j] > a[i], for a given an array of 'n' elements.
Input: {34, 8, 10, 3, 2, 80, 30, 33, 1}
 Output: 6 (j = 7, i = 1)
 Input: {9, 2, 3, 4, 5, 6, 7, 8, 18, 0}
 Output: 8 ( j = 8, i = 0)
 Input: {1, 2, 3, 4, 5, 6}
 Output: 5 (j = 5, i = 0)
 Input: {6, 5, 4, 3, 2, 1}
 Output: -1

 time complexity :O(n)
*/
#include<stdio.h>
#include<stdlib.h>
int max(int x,int y)
{

    return x>y?x:y;
}
int min(int x,int y)
{

    return x<y?x:y;
}
int maxDiff(int arr[],int len)
{
int i,j,maxdiff;
    int *minLeft=(int*)malloc(sizeof(int)*len);
    int *maxRight=(int*)malloc(sizeof(int)*len);

    minLeft[0] =arr[0];
    for(i=1;i<len;i++)
    {
        minLeft[i]=min(arr[i],minLeft[i-1]);
    }
    maxRight[len-1]=arr[len-1];
    for(j=len-2;j>=0;j--)
        maxRight[j]=max(arr[j],maxRight[j+1]);

 i=0,j=0,maxdiff=-1;
while(i<=len&&j<=len)
{
    if(minLeft[i]<maxRight[j])
    {
     maxdiff=max(maxdiff,j-i) ;
     j++;
    }
    else
        i++;
}

return maxdiff;
}
int main()
{
    int arr[]={102,67,23,4,56,78,90,1,23,45,67,7,8,0,9,8,7,64,1,2,3,34,56,67,6,7,8,9,10,23,3,5,6,8,9,12,34,45};
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("%d \n",len);
   int  max_diff=maxDiff(arr,len);
    printf("%d",max_diff);


    return 0;
}
