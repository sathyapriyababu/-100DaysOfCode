///Write a program to totate a string N places to \
the left or right ‘N’ positions depending \
on the instruction.\
Examples 1:\
HelloWorld\
L \
3 \
Must generate,\
loWorldHel  \
Example 2: \
HelloWorld \
R               \
3                   \
Must generate,      \
rldHelloWo          \
Input format        \
String  \
Direction (L or R)    \
Number of positions             \
Output format               \
Modified string                 \
Sample testcases                \
Input 1                 \
HelloWorld          \
L                    \
3                   \
Output 1            \
loWorldHel          \
Input 2             \
HelloWorld          \
R                   \
3                   \
Output 2                \
rldHelloWo


#include<stdio.h>
#include<string.h>
void rotate(char name[],int side,int size)
{int i,j,k;
    if(side=='L'||side=='l')
    {
        j=size-1;
    for(i=j+1;i<strlen(name);i++)
    printf("%c",name[i]);
    for(k=0;k<=j;k++)
        printf("%c",name[k]);}

        if(side=='R'||side=='r')
        {
            for(j=strlen(name)-size;j<strlen(name);j++)
                printf("%c",name[j]);
            for(k=0;k<strlen(name)-size;k++)
                printf("%c",name[k]);
        }

}
int main(){
 char name[20];
 char side;
 int size;

 scanf("%s",name);///getting str
 scanf(" %c",&side);///getting side L or R
 scanf("%d",&size); ///getting pos to rotate
 rotate(name,side,size);///fun caller
 return 0;
}
