using namespace std;
#include<stdio.h>
#include<algorithm>
#include<iostream>
int main()
{

    int arr[]={35,12,1,0,23};
    sort(arr,arr+5);
    for(auto i: arr)
        cout<<i<<" ";
}
