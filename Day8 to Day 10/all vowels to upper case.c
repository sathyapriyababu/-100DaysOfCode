/*
Fill in the missing lines of code in the program below so that it accepts a string value and
converts all vowels to upper case. (The consonants must not be modified)
Input format
A string
Output format
Converted string as per given question
Sample testcases
Input 1
samplecode
Output 1
sAmplEcOdE
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    char *ptr=str;

     while(*ptr!='\0')
     {
         if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
         {
             *ptr=*ptr-32;
         }
         ptr++;
     }
printf("%s",str);
    return 0;

}
