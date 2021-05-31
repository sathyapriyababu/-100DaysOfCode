/**
HR committee decided to enforce the following rules when an
 employee creates/changes
his/her password.
1. The password must have a minimum length of 8.
2. The password must have a maximum length of 25.
3. The password must contain atleast one special character among # ! _ $ @
4. The password must contain atleast one upper case alphabet and one
lower case
alphabet.
5. The password must contain atleast two numbers
The program must accept a given password string P as input
 and check for these rules and
output VALID or INVALID.
Input format
First line will contain the string value of the password P
Output format
VALID or INVALID based on the check performed by the
program by applying the rules.
Code constraints
Length of P is from 2 to 50.
Sample testcases
Input 1
tiD_9b0y3r
Output 1
tiD_9b0y3r is VALID
Input 2
n@c34nindia
Output 2
n@c34nindia is INVALID
Input 3
qwerty
Output 3
qwerty is I

*/
#include<stdio.h>
#include <string.h>

int main()
{
    char input[60];
    scanf("%s",input);
   int i=0;
    int length=0,number=0,specialChar=0,upperCase=0,lowerCase=0;
    int len=strlen(input);

    if(len>8 && len<25 )
    {

        while(input[i]!='\0')
        {
            if(input[i]=='#'||input[i]=='!'||input[i]=='_'||input[i]=='$'||input[i]=='@')
            specialChar ++;
            if(input[i]>='A' && input[i]<='Z')
            upperCase++;
            if(input[i]>='a' && input[i]<='z')
            lowerCase++;
            if(input[i]>='0' && input[i]<='9')
            number++;
            i++;}
    }

if (length!=0 && specialChar!=0 && upperCase!=0 && lowerCase!=0 && number>=1)
    {
printf("%s is VALID",input);
}
else{
printf("%s is INVALID",input);
}

    return 0;
}
