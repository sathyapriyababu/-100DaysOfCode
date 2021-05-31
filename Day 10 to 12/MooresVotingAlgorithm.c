//find the Majority of the element in array using MooresVoting Algorithm

#include<stdio.h>
int mooresVotingAlgo(int arr[],int n)
{
 int voter=arr[0];
int  count=1;
 for(int i=0;i<n;i++)

 {
     if(arr[i]==voter)
     {
         ++count;
     }
     else
      {
          --count;
      }
     if(count==0)
        {
            voter=arr[i];
            count=1;
        }
 }
  return voter;
}
int isMajority(int arr[],int n,int element)
{
    int count=0;
    for(int i=0;i<n;i++)
        if(element==arr[i])
        ++count;
    if(count>n/3)
        return element;
    else
        return -1;
}
void main()
{
    int n;
    int majority=0;
    int arr[]={0,2,3,4,1,1,1};//3,4,5,1,1,1,6,1,7,8,1,1};
    n=sizeof(arr)/sizeof(arr[0]);
    majority=mooresVotingAlgo(arr,n);
    majority=isMajority(arr,n,majority);
    if(majority==-1)
        printf("NO MAJORITY");
    else
        printf("MAJORITY IS %d",majority);

}
