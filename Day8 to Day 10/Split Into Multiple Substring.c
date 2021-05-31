#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200];
    gets(s1);
    char *p;
    p=strtok(s1," ");

    while(p)
    {
    puts(p);
    p=strtok(NULL," ");
    }
    puts(p);


}
