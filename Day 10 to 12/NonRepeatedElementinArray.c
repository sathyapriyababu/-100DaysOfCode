//find the Non repeated element in the array (only one element)
//exactly one element
//is not repeated
#include<stdio.h>
/*//Approach -->1
int NonRepeatedElement(int *arr,int size)
{int i;

    for(i=0;i<size-2;i+=2)
    {
        if(arr[i]!=arr[i+1])
            return arr[i];
    }
    return arr[i];//if non duplicate element in last
}*/
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;

}
void Bubblesort(int arr[],int n)
{for(int i=0;i<n-1;i++)
    {for(int j=0;j<n-i-1;j++)
        {
          if(arr[j]>arr[j+1])
          swap(&arr[j],&arr[j+1]);
        }
        }
        for(int i=0;i<n;i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
}

//Approach -->2 using XOR
int NonRepeatedElement(int *arr,int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res^=*(arr+i);
    }
    return res;
}
int main()
{
    int arr[]={1,2,3,4,3,2,1,7,7,8,9,0,0,8,6,6,9,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Bubblesort(arr,n);
   int nonrepeated=NonRepeatedElement(arr,n);
    printf("%d",nonrepeated);

    return 0;
}
