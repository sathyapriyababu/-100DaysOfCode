/*12. Algorithm to find the maximum difference of
j - i such that
a[j] > a[i], for a given an array of 'n' elements.
Input: {34, 8, 10, 3, 2, 80, 30, 33, 1}
 Output: 6 (j = 7, i = 1)
 Input: {9, 2, 3, 4, 5, 6, 7, 8, 18, 0}
 Output: 8 ( j = 8, i = 0)
 Input: {1, 2, 3, 4, 5, 6}
 Output: 5 (j = 5, i = 0)
 Input: {6, 5, 4, 3, 2, 1}
 Output: -1

 time complexity:O(nlogn)
*/

#include<bits/stdc++.h>
using namespace std;
int maxDiff(vector<int> &v,int len)
{

    unordered_map<int,vector<int>>hashmap;
    for(int i=0;i<len;i++)
        hashmap[v[i]].push_back(i);

        sort(v.begin(),v.end());

        int maxdiff=INT_MIN;
        cout<<maxdiff<<endl;
        int temp=len;
        for(int i=0;i<len;i++)
        {
if(temp > hashmap[v[i]][0])
{
temp = hashmap[v[i]][0];
cout<<"temp"<<temp<<endl;
}
maxdiff = max(maxdiff,hashmap[v[i]][hashmap[v[i]].size() - 1]- temp);
cout<<"maxdiff:"<<maxdiff<<endl;
}


return maxdiff;
}
int main()
{
    vector<int> v{102,67,23,4,56,78,90,1,23,45,67,7,8,0,9,8,7,64,1,2,3,34,56,67,6,7,8,9,10,23,3,5,6,8,9,12,34,45};
    int len=v.size();
cout<<len <<endl;
    int  max_diff=maxDiff(v,len);
    cout<<max_diff;
    return 0;
}
