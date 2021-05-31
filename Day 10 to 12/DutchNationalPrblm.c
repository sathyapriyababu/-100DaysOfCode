//Dutch National Problm[red,white,blue]
//given an array of 0's,1's and 2's sort them
#include<stdio.h>
/*
//Approach ---->1 using count
void DutchnationalPrblm(int arr[],int n)
{

    int countzero=0;
    int countone=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            ++countzero;
        if(arr[i]==1)
            ++countone;
    }

        for(int i=0;i<countzero;i++)
            arr[i]=0;
        for(int i=countzero+1;i<=countone;i++)
            arr[i]=1;
        for(int i=countone+1;i<n;i++)
            arr[i]=2;
    }
*/
    //Approach--->2 using Swaping

void swap(int *a,int *b)
    {
     int t;
     t=*a;
     *a=*b;
     *b=t;
    }
  void DutchnationalPrblm(int arr[],int n)
{
    int zeroindex=0,twoindex=n-1;
    int index=0;
    while(index<twoindex)
    {
        if(arr[index]==0)
            swap(&arr[index],&arr[zeroindex++]);
        if(arr[index]==1)
            ++index;
        else if(arr[index]==2)
          swap(&arr[index],&arr[twoindex--]);  //swap(&arr[index],&arr[twoindex++]);
    }
    }

void main()
{

    int arr[]={1,1,2,2,0,2,2,2,2,1,0,0,2,2,2,2,1,1,1,1,1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    DutchnationalPrblm(arr,n);
            for(int i=0;i<n;i++)
            printf("%d",arr[i]);
}

