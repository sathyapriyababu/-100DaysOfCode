#include<stdio.h>
int getOddOccurrence(int arr[], int n)
{

    for(int i=0;i<n;i++)
    {
        int count =0;
        for(int j=0;j<n;j++)
         {
           if(arr[i]==arr[j])
            count++;
         }
        if(count%2!=0)
            return arr[i];

    }
    return -1;
}
int main()
    {
        int arr[] = { 2, 3, 5, 4, 5, 2,
                      4, 3, 5, 2, 4, 4, 2 };
        int n = sizeof(arr) / sizeof(arr[0]);

        // Function calling
        printf("%d",getOddOccurrence(arr, n));

        return 0;
    }
