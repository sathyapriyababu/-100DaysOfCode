/*Geetha, the English teacher was teaching about the articles in English grammar. She decided to play a game with the students in which a phrase or a sentence will be provided to the students, and they should rewrite the given sentence after removing all the articles wherever they may be present.

Write a program to find the correct answer for each sentence she provides.

Articles are ' a ' , ' an ', and ' the ' .
Input format
Input is in the format of a string (character array).
Output format
Output is the input string in which all the articles are removed.
Sample testcases
Input 1
The Dhillon Theatre is an Fun Republic or a mall.
Output 1
Dhillon tre is  Fun Republic or  mll
*/
#include<stdio.h>
int main()
{
    char a[100];//sentence
    int i=0,len,j=0;
    for(i=0;i<50;i++)
    {
        scanf("%c",&a[i]);
        if(a[i]=='\0'){break;}
    }
    len=i-1;//intialise len
    for(i=0;i<len;i++)
    {
        if((a[i]=='t')||(a[i]=='T'))//for removing the pattern
        {
        if((a[i+1]=='h')||(a[i+1]=='H'))
        {
        if((a[i+2]=='e')||(a[i+2]=='E'))
        {
          for(j=i;j<len;j++)
          {
              a[j]=a[j+3];
          }
          len=len-3;//decrementing the length
        }
        }
        }
        if((a[i]=='A')||(a[i]=='a'))//for removing an pattern
        {
        if((a[i+1]=='N')||(a[i+1]=='n'))
        {
          for(j=i;j<len;j++)
          {
              a[j]=a[j+2];
          }
          len=len-2;//decrementing the length
        }
        }
    }
    for(i=0;i<len;i++)
    {
        if((a[i]=='A')||(a[i]=='a'))//for  removing a pattern
        {
          for(j=i;j<len;j++)
          {
              a[j]=a[j+1];
          }
          a[len]='\0';
          len=len-1;//decrementing the length
        }
                  if((a[len]=='a') ||(a[len]=='A'))//when a  present at the end
          {
          a[len]='\0';
          len=len-1;//decrementing the length
          }
    }
    printf("%s",a);
    return 0;
}
