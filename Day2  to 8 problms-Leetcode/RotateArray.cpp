#include<bits/stdc++.h>
using namespace std;
class RotateArray{

    public :
void rotate(int arr[],int k,int n)
    {
       k%=n;
       reverse(arr,0,n-1);
       reverse(arr,0,k-1);
       reverse(arr,k,n-1);

    }
 void reverse(int arr[],int start,int end)
    {while(start<end)
    {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
         end--;
    }

    }
    void printArray(int arr[],int n)
    {

        for(int i=0;i<n;i++)
cout<<(arr[i])<<" ";
cout<<endl;
    }
    //System.out.println
};
    int main() {
        int arr[]={1, 2, 3, 4, 5, 6, 7};
        RotateArray s ;
 s.rotate(arr, 2,7);
 s.printArray(arr, 7);
 return 0;
    }
