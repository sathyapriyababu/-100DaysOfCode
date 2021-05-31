///Geetha writes a word on the board and reads from the last .\
The word pronounces the \
same while reading from both the directions.\
Write a program to get a string to find whether\
the string is palindrome or not.\
Input format\
The input consist of a string\
Output format\
The output prints whether the string is palindrome or not.\
Sample testcases\
Input 1\
malayalam\
Output 1\
malayalam is a palindrome
#include <stdio.h>
void palindromeAreNot(char *s1)
{///find palindrome are not by using middle
 int begin, middle, end, length = 0;
while (s1[length] != '\0')
length++;///string length

end = length - 1;///end

middle = length/2;///middle

for (begin = 0; begin < middle; begin++)
{

    ///checking first char of text \
    and last char of text\
    not equal print it is not palidrome
if (s1[begin] != s1[end])
    {
printf("%s is not a palindrome",s1);///
break;
}
///else dec end compare
end--;
}

///if
printf("%d\n",begin);
if (begin == middle)
printf("%s is a palindrome",s1);
}
int main()
{
char text[100];
scanf("%s",text);///getting data

palindromeAreNot(text);

///ispalindrome(text);
return 0;
}

