/*Read two strings, check whether two given strings are anagram
of each other or not. An anagram of a string is another
string that contains same characters, only the order
of characters can be different.
For example, "act" and "cat" are anagram of each other.
Input format
String 1 in first line
String 2 in second line
Output format
Anagram or Not
Refer sample output for exact statement
Sample testcases
Input 1
includehelp
cnldeehpiul
Output 1
Strings are anagrams of each other
Input 2
includehelp
helpindludr
Output 2
Strings are not anagrams of each other
*/
#include<stdio.h>
#include<string.h>
/*int main()
{//TC ---> O(n2)//method -->1
 char str1[200], str2[200];
 int len, len1, len2, i, j, found=0, not_found=0;

 scanf("%s",str1);

 scanf("%s",str2);
 len1 = strlen(str1);
 len2 = strlen(str2);
 if(len1 == len2)
 {
 len = len1;
 for(i=0; i<len; i++)
 {
 found = 0;
 for(j=0; j<len; j++)
 {
 if(str1[i] == str2[j])
 {
 found = 1;
 break;
 }
 }
 if(found == 0)
 {
 not_found = 1;
 break;
 }
 }
 if(not_found == 1)
 printf("Strings are not anagrams of each other");
 else
 printf("Strings are anagrams of each other");
 }
 else
 printf("Strings are not anagrams of each other");
 return 0;
}*/
int isAnagram(char *first_string,char *second_string)
{//0(nlogn)<----- TIME COMPLEXITY
int first_occurance_table[256]={0};
int second_occurance_table[256]={0};
if(strlen(first_string)!=strlen(second_string))
    return 0;

int i=0;
while(first_string[i])
{
    first_occurance_table[first_string[i]]++;
    second_occurance_table[second_string[i]]++;
i++;
}
for(i=0;i<256;i++)
{
    if(first_occurance_table[i]!=second_occurance_table[i])
        return 0;
    return 1;
}
}
int main()
{
    char s1[200];
    char s2[200];
    gets(s1);
    gets(s2);
    if(isAnagram(s1,s2)==1)
        printf("Strings are  anagrams of each other");
    else
      printf("Strings are not anagrams of each other");

    return 0;
}
