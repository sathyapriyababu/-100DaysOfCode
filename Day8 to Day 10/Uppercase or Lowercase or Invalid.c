#include <stdio.h>
#include <stdlib.h>
char check(char c)
{
if(((int)c>=65) && ((int)c<=90))
return 'U';
else if(((int)c>=97) && ((int)c<=122))
return 'L';
}
int main()
{
char c;
scanf("%c",&c);
int result= check(c);
if(result== 'U')
printf("Upper Case");
else if(result=='L')
printf("Lower Case");
else
printf("Invalid");
return 0;
}
