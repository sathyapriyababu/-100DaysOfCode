/*Junior Coders
Junior Coders Academy is a unique learning Center
 that offers a creative and inspiring
collaborative environment for building coding skills
to students of Grades 1 to 12.
Williams, the proprietor of the Academy and the mentor
for the students started his first session
of the day with the interesting programming concept
 of using Functions. Post an interactive
session of learning through design, Williams gave
 the students a small self-activity to write a
program using functions to verify from two integer
numbers A and B, if B corresponds to the last
digit/digits of A. Williams wanted you to write
the program for evaluating the students’ codes.
Function Specifications:
Use the function name, return type and the argument type as:
int findValue(String,String)
The function must return 1 if the second number B
is the last digits of A, else return 0.
Note:
The main function is already provided and well defined.
 The function mentioned above is to be
defined by you to solve this problem
Input format
First line of the input contains a string A.
Second line of the input contains a string B.
Output format
Print "Yes" if the second number B is the last digits of A.
 Print "No" otherwise.
Refer sample input and output for formatting specifications.
Sample testcases
Input 1
1234
1234
Output 1
Yes
Input 2
5432
54
Output 2
No
*/
#include<stdio.h>
#include<string.h>
int findValue(char a[],char b[]);
int findValue(char a[],char b[])
{
int s,t,u,v;
s=strlen(a);
t=strlen(b);
u=s-t;
for(v=0;v<t;v++)
{
if(a[u]!=b[v])
{
s=-5;
break;
}
u++;
}
if((s==-5)||(t>s)){return 0;}
else
return 1;
}
int main()
{
char a[50],b[20];
scanf("%s%s",a,b);
if(findValue(a,b)==1)
{
printf("Yes");
}
else printf("No");
return 0;
}
