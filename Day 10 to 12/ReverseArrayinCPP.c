//using namespace std;
#include<stdio.h>
//#include<iostream>

int main()
{
    int arr[]={10,20,30,40,50};
    reverse(arr,arr+5);
    for(auto i : arr )
        cout<<i<<" ";
return 0;
}
