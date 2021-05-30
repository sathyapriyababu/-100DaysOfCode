#include<bits/stdc++.h>
using namespace std;
int printDup(int arr[],int n)
{
 unordered_set<int> s;
 int sum=0;
 for(int i=0;i<n;i++)
 {
     if(s.find(arr[i])==s.end())
     {
         s.insert(arr[i]);
         sum=sum+arr[i];
     }
     else
       // cout<<arr[i]<<" ";  //-->>duplicate elements
       sum=sum-arr[i];
 }
return sum;
}
int main ()
{
    //int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int arr[]={1, 6, 3, 1, 7, 9, 4, 4};

    int n=8;
    int sum=printDup(arr,n);
 cout<<sum;
    return 0;
}
