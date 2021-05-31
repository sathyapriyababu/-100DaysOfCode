/*Move all the Zeros to start and Relative order will be preserved
order of the element should n't be modified*/
#include<stdio.h>
#include<stdlib.h>
void printArray(int arr1[],int n1,int j)
{
for(int i=0;i<=j;i++)
arr1[i]=0;
for(int i=0;i<n1;i++)
    printf("%d ",arr1[i]);}
void MoveAlltheZerosToStart(int arr1[],int n1)
{
    int j=n1-1,i;
    for (i = n1-1; i >=0; i--)
    {
        if(arr1[i]!=0)
           {
            arr1[j]=arr1[i];
            j--;
            }
    }

printArray(arr1,n1,j);
}
int main()
{
   /* int *arr1= NULL;
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
    }*/
int arr1[]={2,7,0,3,5,0,0,0,8,0,10,90};  //2 7 0 3 5 0 8 0 10 9
int n1=sizeof(arr1) / sizeof(arr1[0]);
MoveAlltheZerosToStart(arr1,n1);
//printArray(arr1,n1);
return 0;
}
