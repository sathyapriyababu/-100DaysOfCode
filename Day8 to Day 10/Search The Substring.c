/*Write a C program to check whether a given substring is present in the given string.
Input format
String in first line
Substring in second line
Output format
Print substring is exists or not exists along with given substring as shown in sample
output
Code constraints
Length of String > Lenght of Sub string
Sample testcases
Input 1
This is a test string
test
Output 1
Substring test is exists
Input 2
This is a test string
search
Output 2
Substring search is not exists*/
#include<stdio.h>
int main()
{
char str[500], search[25];
int count1 = 0, count2 = 0, i, j, flag;
scanf("%[^\n]%*c", str);

scanf("%[^\n]%*c", search);

while (str[count1] != '\0')
count1++;

while (search[count2] != '\0')
count2++;
for (i = 0; i <= count1 - count2; i++)
{
for (j = i; j < i + count2; j++)
{
flag = 1;
if (str[j] != search[j - i])
{
flag = 0;
break;
}
}
if (flag == 1)
break;
}
if (flag == 1)
printf("Substring %s is exists",search);
else
printf("Substring %s is not exists",search);
return 0;
}

