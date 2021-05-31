/*Move all the Zeros to end and Relative order will be preserved
order of the element should n't be modified*/
#include<stdio.h>
#include<stdlib.h>
void MoveAlltheZerosToEnd(int *arr1,int n1)
{
    int count=0;
    for (int i = 0; i <=n1; i++)
    {
        if(arr1[i]!=0)
           {
            arr1[count++]=arr1[i]; }
    }
    while(count<n1)
        arr1[count++]=0;
for(int i=0;i<=n1;i++)
 printf("%d ",arr1[i]);
}
int main()
{
    int *arr1= NULL;
    int n1=0;
    char ch;
    arr1=(int*)malloc(sizeof(int));
    if(arr1== NULL)
    {
        printf("Memory Allocation Failed");
        return 0;
    }
    printf("Enter the Array Elements:");
    while(scanf("%d%c",&arr1[n1],&ch)>0&& ch!='\n')
    {

        n1++;
        arr1=(int*)realloc(arr1,n1+1);
    }
//int arr1[]={2,7,0,3,5,0,8,0,10,9};  2 7 0 3 5 0 8 0 10 9
MoveAlltheZerosToEnd(arr1,n1);
if(arr1)
{
    free(arr1);
    arr1=NULL;
}
return 0;
}
