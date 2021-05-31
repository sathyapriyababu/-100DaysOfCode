#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void Rotate(vector<int>& nums, int k) {
        k%=nums.size();
        int n = nums.size();
        Reverse(nums,0,n-1);
        Reverse(nums,0,k-1);
        Reverse(nums,k,n-1);


    }
    void Reverse(vector<int>& nums,int start,int end)
    {
        while(start<end)
        {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
 void printArray(vector<int>& nums)
{
int i;
for(i = 0; i < nums.size(); i++)
	cout<< arr[i];
cout<<"\n ";
}

int main()
{
vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

Rotate(nums, 2);
printArray(nums);
getchar();
return 0;
}
};
