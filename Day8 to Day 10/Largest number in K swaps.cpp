// C++ program to find maximum
// integer possible by doing
// at-most K swap operations
// on its digits.
//Time Complexity: O((n^2)^k).
//Space Complexity:O(n).
#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
/*
void LargestNoinKSwaps(string str,int k,string &maxi)
{
    int size=str.length();
    int i,j;
    // Return if no swaps left
    if (k == 0)
        return;

    for(i=0;i<size;i++)
    {
       for(j=i+1;j<size;j++)
    {
       if(str[i]<str[j])
            swap(str[i],str[j]);

            if (str.compare(maxi) > 0)
                    maxi = str;

                // recurse of the other k - 1 swaps
                LargestNoinKSwaps(str,k- 1,maxi);

                // Backtrack
                swap(str[i], str[j]);

    }
    }


}
*/
void findMaximumNum(
    string str, int k,
    string& maxi, int ctr)
{
    // return if no swaps left
    if (k == 0)
        return;

    int n = str.length();
      char maxm = str[ctr];
    for (int j = ctr + 1; j < n; j++) {

        if (maxm < str[j])
            maxm = str[j];
    }

    if (maxm != str[ctr])
        --k;
        for (int j = ctr; j < n; j++) {
                if (str[j] == maxm) {

                swap(str[ctr],str[j]);

            if (str.compare(maxi) > 0)
                    maxi = str;

                // recurse of the other k - 1 swaps
                findMaximumNum(str,k- 1,maxi,ctr);

                // Backtrack
                swap(str[ctr], str[j]);

    }
    }
}

int  main()
{
    string str="1234567";
    int k=4;
    string maxi=str;
    int ctr=0;
//    LargestNoinKSwaps(str,k,maxi);
    findMaximumNum(str,k,maxi,ctr);
cout<<maxi;
    return 0;

}
