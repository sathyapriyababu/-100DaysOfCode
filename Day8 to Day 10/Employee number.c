/*Employee number is assigned as follows in a company.
If Input is
Name: Johny
DoB: 25 07 2001
Gender: Female
Output should be
Employee ID: J2557
Rule is :
Digit 1: First character of name
Digit 2-3: Date of birth
Digit 4-5: Month of birth
(4th character incremented by 5 if driver is female i.e. 51–62
instead of 01–12)
Note use : Use sprintf() instead of itoa()
Input format
First line of the input consist of a string
Second line of the input consist of the date,month
 and the year separated by colon
Third line of the input consist of the gender of the employee.
Output format
The output prints the Employee ID.
Code constraints
Gender = Male or Female (Case senstive)
1<=Date<=31
1<=Month<=12
Sample testcases*/
///Input 1
///John
///25:07:2001
///Male
///Output 1
///J2507
///Input 2
///Johny
///25:07:2001
///Female
///Output 2
///J2557
#include<stdio.h>
#include<string.h>
int main()
{
     char name[25], newid1[10],newid2[10],newid[1];
     int dd,mm,yy;
     char gender[8];
     printf("Enter name:");
     gets(name);
     printf("Enter date:");
     scanf("%d:%d:%d",&dd,&mm,&yy);
     printf("Enter ur gender:");
     scanf("%s",gender);
     newid[0]=name[0];
 sprintf(newid1, "%d", dd );
 if(!strcmp(gender,"Female"))
 {
 mm=mm+50;
 }
 if(mm<10)
 sprintf(newid2,"%c%d",'0',mm);
 else
 sprintf(newid2,"%d", mm );
 printf("%c%s%s",newid[0],newid1,newid2);
 return 0;
}
