/*develop and test a function that will return the score
for a word in the well-known
game of Scrabble, assuming that none of the letters
are placed on a square that
doubles or trebles any points.
The tiles in Scrabble earn basic points as follows -
 Q and Z score 10,
J and X score 8;
K scores 5;
F, H, V, W and Y score 4;
B, C, M and P score 3;
D and G score 2;
other letters score 1;
blank scores 0.
Input format
Input consists of a word (character array).
Output format
Output consists of a numerical value which is
the score for the word assigned as per
the chart.
Sample testcases
Input 1
SWAt ?
Output 1
8*/
#include<stdio.h>
int main()
{
char a[25];
int i=0,len,score=0;
for(i=0;i<25;i++)
{
scanf("%c",&a[i]);
if(a[i]=='\0'){break;
}
}
len=i;
for(i=0;i<len;i++)
{
if((a[i]=='q')||(a[i]=='z')||(a[i]=='Q')||(a[i]=='Z'))
{
score=score+10;
}
else if((a[i]=='j')||(a[i]=='x')||(a[i]=='J')||(a[i]=='X'))
{
score=score+8;
}
else if((a[i]=='d')||(a[i]=='g')||(a[i]=='D')||(a[i]=='G'))
{
score=score+2;
}
else if((a[i]=='f')||(a[i]=='h')||(a[i]=='v')||(a[i]=='w')||(a[i]=='y')||
(a[i]=='F')||(a[i]=='H')||(a[i]=='V')||(a[i]=='W')||(a[i]=='Y'))
{
score=score+4;
}
else if((a[i]=='b')||(a[i]=='c')||(a[i]=='m')||(a[i]=='p')||(a[i]=='B')||
(a[i]=='C')||(a[i]=='M')||(a[i]=='P'))
{
score=score+3;
}
else if((a[i]=='k')||(a[i]=='K'))
{
score=score+5;
}
else if(a[i]==' ')//black scores
{
}
else
{
score++;//other characters
}
}
printf("%d",score);
return 0;
}
