
/**
In Sunrise Basket company,
 the criteria for salary increase are as follows:

1. The standard yearly increase is 25%.

2. For administrative staff, if they have
 worked for more than 5 years, they get 5% extra.

3. For technical staff, if they have a master’s degree
they get 3% extra, if they have a Ph.D.
(doctoral) you get 10% extra.

4. For all employees, if they speak a foreign language,
they get another 2% extra.

Write a complete program to get the present
 salary of an employee, and their new salary.

Input format
6 Inputs as shown in sample input.

Present Salary in the first line

Speak a foreign language - (Yes/No) in the second line

Department (ADM/TEC) in the third line

No of years worked in the fourth line

Have master degree -(Yes/No) in the fifth line

Have Ph.D. -(Yes/No) - in the sixth line

Output format

New salary
Code constraints

Speak a foreign language - (Yes/No)
Department - (ADM/TEC)
Have master degree -(Yes/No)
Have Ph.D. -(Yes/No)

Sample test cases

Input 1
10000
Yes
ADM
10
No
No

Output 1
13200.000000
Input 2
10000
Yes
TEC
10
Yes
Yes

Output 2
14000.000000
Input 3
10000
No
TEC
3
No
No

Output 3
12500.000000
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
double salary,newsalary;

char f_lang[10]={0};

char staff[10]={0};

int yearsworked;

char master[10]={0};

char phd[10]={0};

scanf("%lf",&salary);
scanf("%s",f_lang);
scanf("%s",staff);
scanf("%d",&yearsworked);
scanf("%s",master);
scanf("%s",phd);

/**if employee knows foreign languages then enters into this if
*/
if(((!strcmp(f_lang,"yes")) || (!strcmp(f_lang,"YES")) || (!strcmp(f_lang,"Yes"))))
{
/** employee must be ADmin
*/
if(((!strcmp(staff,"ADM")) || (!strcmp(staff,"Adm")) || (!strcmp(staff,"adm"))))
 /** employee must be ADmin and worked more than >5 yrs
*/
if(yearsworked>5)
{
newsalary = salary + salary * (32.0/100.0);
printf("%lf",newsalary);
}

/** employee must be ADmin and worked  not more than >5 yrs
*/
else
{
newsalary = salary + salary * (27.0/100.0);
printf("%lf",newsalary);
}
/** employee must be Technical
*/
if(((!strcmp(staff,"TEC")) || (!strcmp(staff,"Tec")) || (!strcmp(staff,"tec"))))
/** employee must be Technical  and completed masters and PhD
*/

if((((!strcmp(master,"YES")) || (!strcmp(master,"Yes")) || (!strcmp(master,"yes"))) && ((!
strcmp(phd,"YES")) || (!strcmp(phd,"Yes")) || (!strcmp(phd,"yes")))))
{
newsalary = salary + salary * (40.0/100.0);
printf("%lf",newsalary);
}
/** employee must be Technical   and completed masters and not PhD
*/
else if (((!strcmp(master,"YES")) || (!strcmp(master,"Yes")) || (!strcmp(master,"yes"))))
{
newsalary = salary + salary * (30.0/100.0);
printf("%lf",newsalary);
}

/** employee must be Technical   and  not completed masters and not PhD
*/
else
{
newsalary = salary + salary * (27.0/100.0);
printf("%lf",newsalary);
}
}

/** if employee not know any foreign language
*/
/** employee must be Admin
*/

else
{
if(((!strcmp(staff,"ADM")) || (!strcmp(staff,"Adm")) || (!strcmp(staff,"adm"))))

/** employee must be ADmin and worked   more than >5 yrs
*/
if(yearsworked>5)
{
newsalary = salary + salary * (30.0/100.0);
printf("%lf",newsalary);
}

/** employee must be ADmin and worked  not more than >5 yrs
*/
else
{
newsalary = salary + salary * (25.0/100.0);
printf("%lf",newsalary);
}
/** employee must be Technical
*/
if(((!strcmp(staff,"TEC")) || (!strcmp(staff,"Tec")) || (!strcmp(staff,"tec"))))

/** employee must be Technical   and completed masters and PhD
*/
if((((!strcmp(master,"YES")) || (!strcmp(master,"Yes")) || (!strcmp(master,"yes"))) && ((!
strcmp(phd,"YES")) || (!strcmp(phd,"Yes")) || (!strcmp(phd,"yes")))))
{
newsalary = salary + salary * (38.0/100.0);
printf("%lf",newsalary);
}
/** employee must be Technical   and completed masters and not PhD
*/
else if (((!strcmp(master,"YES")) || (!strcmp(master,"Yes")) || (!strcmp(master,"yes"))))
{
newsalary = salary + salary * (28.0/100.0);
printf("%lf",newsalary);
}
/** employee must be Technical   and  not completed masters and not PhD
*/
else
{
newsalary = salary + salary * (25.0/100.0);
printf("%lf",newsalary);
}
}

return 0;
}
