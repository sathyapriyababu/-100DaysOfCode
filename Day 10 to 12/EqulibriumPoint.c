//find the equlibirium point where left of eqpoint is equal to right eqpint
#include<stdio.h>
/*
//Approach --->1 from i-1 to greater than equal to 0 ,from i+1 to n
int Equlibriumpoint(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        int leftsum=0,rightsum=0;
        int li,ri;
        for(li=i-1;li>=0;li--)
            leftsum+=arr[li];
        for(ri=i+1;ri<n;ri++)
            rightsum+=arr[ri];
        if(leftsum==rightsum)
            return i;
    }
    return -1;
}
*/
//Approach--->2 using leftsum and rightsum
int Equlibriumpoint(int arr[],int n)
{  int rightsum=0,leftsum=0;

    for(int i=0;i<n;i++)
    { rightsum+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        rightsum-=arr[i];

    if(rightsum==leftsum)
        return i;
    leftsum+=arr[i];
}
return -1;
}
int main()
{
    int arr[]={0,1,2,3,4,3,2,1,0};
   //int arr[]={};
    //int arr[]={1};
int n=sizeof(arr)/sizeof(arr[0]);
int eqpt=Equlibriumpoint(arr,n);
   if(eqpt==-1)
    printf("NO EQUILIBRIUM POINT");
    else
        printf("EQULIBIRIUM POINT IS %d",eqpt);
return 0;
}
