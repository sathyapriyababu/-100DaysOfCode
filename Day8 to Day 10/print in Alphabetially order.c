/*The teacher wants to get the total number of students
in a class and stores their name in her
ledger. To maintain this record she needs to arrange
 their names in alphabetical order.
Write a program to obtain number of students and
store their names in alphabetical order.
Input format
First line of the input consist of total number of students
The next lines of the input consists of the students name one by one
Output format
The output prints the students name one by one in alphabetical order .
Sample testcases
Input 1
3
ram
sam
manoj
Output 1
manoj
ram
sam
*/
#include <stdio.h>
#include <string.h>
int main()
{
char name[10][10],tname[10][10], temp[10];

int i, j, n;

scanf("%d", &n);//size

//Getting NAMEs
for (i = 0;i < n;i++)
{
gets(name[i]);
}

//Comparing and swaping
for (i = 0;i < n - 1 ;i++)
{
for (j =i + 1; j < n; j++)
{
if (strcmp(name[i], name[j]) > 0)
{
strcpy(temp, name[i]);
strcpy(name[i], name[j]);
strcpy(name[j], temp);
}
}
}

//printing the array of string
for (i = 0;i < n;i++)
{
printf("%s\n", name[i]);
}
return 0;
}
