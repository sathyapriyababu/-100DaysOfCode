/*Write a program that takes a string containing both digits and alphabet as input and
find the sum of all digits in the string.
Input format
String containing both digits and alphabet
Output format
Sum of all digits in the given string
Sample testcases
Input 1
ack56df27
Output 1
Sum : 20
*/
#include <stdio.h>
int main()
{
 char string[500];
 int count, nc = 0, sum = 0;
 scanf("%s", string);
 for (count = 0; string[count] != '\0'; count++)
 {

 if ((string[count] >= '0') && (string[count] <= '9'))
 {
     nc=nc+1;
     sum=sum+(string[count]-'0');
 }}
 printf("%d",sum);
 return 0;
}

