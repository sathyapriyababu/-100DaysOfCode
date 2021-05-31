/*Write the program to convert and
Input format
The distance between two places (in km.) is given as an
input.
Output format
Equivalent distance in miles and feet are displayed as
output.
Round off the output to four decimal places.
Sample testcases
Input 1
1
Output 1
Miles = 0.6214
Foot = 3280.8401
Input 2
16
Output 2
Miles = 9.9419
Foot = 52493.4414
*/
#include<stdio.h>
#include<math.h>
int main()
{
float km=0,miles=0,foot=0;
scanf("%f",&km);
km=fabsf(km);//if km is -ve convert it into +ve

miles=km*0.621371;
foot=3280.84*km;
printf("Miles = %.4f\nFoot = %.4f",miles,foot);
}
