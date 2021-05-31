/**Given a string str and an integer k, the task is to reverse alternate k characters of the
given string. If characters present are less than k, leave them as it is.
Input format
String in first line
K value in second line
Output format
Reversed string as per question*/
///Sample testcases
///Input 1
///abcde
///2
///Output 1
///bacde
///Input 2
///placementseason
///3
///Output 2
///alpcemtneseanos
#include <bits/stdc++.h>
using namespace std;
string revAlternateK(string s,int k,int len)
{int i;
    for(i=0;i<len;i++)
    {
        if(i+k>len)
            break;
        ///reverse k characters
        reverse(s.begin()+i,s.begin()+i+k);

        i=i+2*k;

    }
    return s;
}
int main()
{

string s = "geeksforgeeks";
int len = s.length();
int k = 3;
cout << revAlternateK(s, k, len);
}
