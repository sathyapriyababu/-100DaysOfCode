/*Generate all the strings of n bits.
Assume A[0..n – 1] is an array of size n.*/
#include<stdio.h>
int arr[]={10,20,30,40,50};

int Binary(int n)
{
if(n<1)
    printf("%s","A");
else{
    arr[n-1]=0;
    Binary(n-1);
    arr[n-2]=1;
    Binary(n-1);
}

}
int main()
{int n=sizeof(arr)/sizeof(arr[0]);
    Binary(n);
    return 0;
}
