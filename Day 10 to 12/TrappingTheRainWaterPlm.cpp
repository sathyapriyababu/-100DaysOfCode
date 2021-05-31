using namespace std;
#include<stdio.h>
#include<iostream>
#include<vector>

int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a>b?b:a;
}
int trapWater(vector<int>&height)
{
    unsigned n = height.size(),water=0;

    if(n>0)
    {

        int leftmax[n];
        int rightmax[n];
        leftmax[0]=height[0];
        for(int i=1;i<n;i++)
            leftmax[i]=max(leftmax[i-1],height[i]);
            rightmax[n-1]=height[n-1];
        for(int i=i-2;i>=0;i--)
            rightmax[i]=max(rightmax[i+1],height[i]);
        for(int i=0;i<n;i++)
            water=water+min(leftmax[i],rightmax[i])-height[i];
    }
    return water;
}
int main()
{
vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
int water=trapWater(height);
cout<<"Maximum water that can be accumulated is :"<<water;
return 0;
}




