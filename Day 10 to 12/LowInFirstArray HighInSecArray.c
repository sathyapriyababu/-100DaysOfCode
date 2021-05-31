/*Given a 2 Sorted Arrays Arrange them in such a
way that Lower values in first array and Higher Values
in second array
Sample i/p:
arr[]={3,8,15,17,20}
arr1[]={2,4,27}

sample o/p:
{2,3,4,8,15}
{17,20,27}
*/
/*ALgo:
1.merge the sorted array-->{2,3,4,8,15,17,20,27}
2.store in the arr and arr1-->{2,3,4,8,15}
                               {17,20,27}*/
#include<stdio.h>
void MergeAndRearrangeSortedArray(int arr1[],int arr2[],int n1,int n2,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
{
    if(arr1[i]<arr2[j])
        arr3[k++]=arr1[i++];
    else
        arr3[k++]=arr2[j++];
}
while(i<n1)
    arr3[k++]=arr1[i++];
while(j<n2)
        arr3[k++]=arr2[j++];

i=0,j=0,k=0;
while(i<n1)
    arr1[i++]=arr3[k++];
while(j<n2)
    arr2[j++]=arr3[k++];
printf("LOWER DIGITS ARRAY:\n");
for(int i=0;i<n1;i++)
 printf("%d ",arr1[i]);
printf("\n");
printf("----------------------------------\n");
printf("HIGHER DIGITS ARRAY:\n");
for(int i=0;i<n2;i++)
 printf("%d ",arr2[i]);


}
int main()
{
int arr1[]={3,8,15,17,20};
int n1 = sizeof(arr1) / sizeof(arr1[0]);
int arr2[]={2,4,27};
int n2 = sizeof(arr2) / sizeof(arr2[0]);
int n3=n1+n2;
int arr3[n3];
MergeAndRearrangeSortedArray(arr1,arr2,n1,n2,arr3);
return 0;
}


