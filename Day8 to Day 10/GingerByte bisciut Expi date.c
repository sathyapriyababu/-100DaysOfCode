/*
The GingerByte biscuit brand is one of the fast selling products
in the market because of it
quality and accuracy in the expiration date. As a new practice,
the manufacturers print the
number of days from the date of manufacture in the packet.
 But the customers find it difficult to
interpret thereby reducing the sales. So the sellers decide
 to print a label with the exact
expiration date on the packets by using robots.
Write a code to program the robot for getting the exact date
of expiration using the
manufacturing date and the number of days on the packet.
Input format
First line has a valid date in the format dd mm yyyy.
 Second line has the number of days to
expire.
Output format
Output displays the expiration date in the dd-mm-yyyy
format as shown in sample test case.
Sample testcases
Input 1
12 6 1992
8
Output 1
20-6-1992
*/
#include<stdio.h>
#include<stdbool.h>
// Return if year is leap year or not.
bool isLeap(int y)
{
if (y%100 != 0 && y%4 == 0 || y %400 == 0)
return true;
return false;
}
// Given a date, returns number of days elapsed
// from the beginning of the current year (1st
// jan).
int offsetDays(int d, int m, int y)
{
int offset = d;
switch (m - 1)
{
case 11:
offset += 30;
case 10:
offset += 31;
case 9:
offset += 30;
case 8:
offset += 31;
case 7:
offset += 31;
case 6:
offset += 30;
case 5:
offset += 31;
case 4:
offset += 30;
case 3:
offset += 31;
case 2:
offset += 28;
case 1:
offset += 31;
}~ 36 ~
if (isLeap(y) && m > 2)
offset += 1;
return offset;
}
// Given a year and days elapsed in it, finds
// date by storing results in d and m.
void revoffsetDays(int offset, int y, int *d, int *m)
{
int month[13] = { 0, 31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31 };
if (isLeap(y))
month[2] = 29;
int i;
for (i = 1; i <= 12; i++)
{
if (offset <= month[i])
break;
offset = offset - month[i];
}
*d = offset;
*m = i;
}~ 37 ~
// Add x days to the given date.
void addDays(int d1, int m1, int y1, int x)
{
int offset1 = offsetDays(d1, m1, y1);
int remDays = isLeap(y1)?(366-offset1):(365-offset1);
// y2 is going to store result year and
// offset2 is going to store offset days
// in result year.
int y2, offset2;
if (x <= remDays)
{
y2 = y1;
offset2 = offset1 + x;
}
else
{
// x may store thousands of days.
// We find correct year and offset
// in the year.
x -= remDays;
y2 = y1 + 1;
int y2days = isLeap(y2)?366:365;
while (x >= y2days)
{
x -= y2days;
y2++;
y2days = isLeap(y2)?366:365;
}
offset2 = x;
}
// Find values of day and month from
// offset of result year.
int m2, d2;
revoffsetDays(offset2, y2, &d2, &m2);
printf("%d-%d-%d",d2,m2,y2);
}
// Driven Program
int main()
{
int d,m,y,x;
scanf("%d %d %d\n%d",&d, &m,&y,&x);
addDays(d, m, y, x);
return 0;
}
