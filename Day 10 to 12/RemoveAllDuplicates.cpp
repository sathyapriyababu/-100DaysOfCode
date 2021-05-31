#include <bits/stdc++.h>
using namespace std;
char* removeDuplicates(char *s,int n){
unordered_map<char,int> exists;
int index = 0;
for(int i=0;i<n;i++){
if(exists[s[i]]==0)
{
s[index++] = s[i];
exists[s[i]]++;
}
}
return s;
}

//driver code
int main(){
char s[] = "ahaaaaaaa4a6a7a3a4ab67";
//char s[] = "geeksforgeeks";
int n = sizeof(s)/sizeof(s[0]);
cout<<removeDuplicates(s,n)<<endl;
return 0;
}
