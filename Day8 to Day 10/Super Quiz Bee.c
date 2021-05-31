/**Super Quiz Bee is a famous quiz Competition
 that tests students on a wide variety of academic
subjects. This week’s participants were kids of age
 12 to 15 and the quiz questions were based
on Gregorian calendar.
In the first round of the competition,
the Host of the event told the participants that it was
Monday on the date 01/01/2001.
Later he questioned each one of the participant what would be
the day on the 1st January, giving them a particular year.
 Write a program to help the Host
validate the answers given by the participants.
Input format
The first line contains an integer that corresponds to a year.
Output format
Output the day on the 1st January of that given year.
Refer sample input and output for formatting specifications.
Sample testcases
Input 1
1994
Output 1
Saturday
Input 2
2014
Output 2
Wednesday
*/
#include<stdio.h>
int main()
{
int year,d,c,f=0;
scanf("%d",&year);
year=year-1;
printf("year:%d ",year);
d=year%100;
printf("d:%d ",d);
c=year/100;
printf("c:%d ",c);
f=d/4;
printf("f:%d ",f);
f=f+d;
printf("f:%d ",f);
f=f+(c/4);
printf("f:%d ",f);
f=f-(2*c);
printf("f:%d ",f);
f=f+29;
printf("f:%d ",f);
f=f%7;
printf("f:%d ",f);
if(f<0)
{
f=f+7;
printf("f:%d ",f);
}
switch(f)
{
case 0:printf("Sunday");break;
case 1:printf("Monday");break;
case 2:printf("Tueday");break;
case 3:printf("Wednesday");break;
case 4:printf("Thursday");break;
case 5:printf("Friday");break;
case 6:printf("Saturday");break;
}
return 0;
}
