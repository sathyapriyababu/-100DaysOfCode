#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
        int n,q;
    cin>>n>>q;
    int  arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int a1,a2,count=0;
    while(q>0)
    {
      cin>>a1>>a2;
    for(int i=a1-1;i<a2;i++)
    {
        for(int j=a1;j<a2;j++)
        {
            if(arr[i]>arr[j])
                ++count;
        }
    }
    cout<<count;
        cout<<endl;
        q--;
    }



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
