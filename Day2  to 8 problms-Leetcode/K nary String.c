/*Generate all the strings of length n drawn from 0... k – 1.*/
#include<stdio.h>
int arr[]={10,20,30,40,50};
int k_nary(int n,int k)
{
    if(n<1)
    printf("%s","A");
    else{
        for(int i=0;i<k;i++)
          arr[n-1]=i;
            k_nary(n-1,k);
    }
}
int main()
{int n=sizeof(arr)/sizeof(arr[0]);
int k=5;
    k_nary(n,k);
    return 0;
}
