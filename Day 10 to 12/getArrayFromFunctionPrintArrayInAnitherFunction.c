void printArray(int p[],int n)//void printArray(int *p,int n)
{
    int i=0;
    while(i<n)
    {
        p[i]=2*p[i];
        printf("%d\n",p[i]);//printf("%d",*(p+i));
        i++;
    }
}
void main()
{

    int arr[]={10,20,30,40,50};
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
}
