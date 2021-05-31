/*Decorative Tiles

Carlton Inn is planning to organize a Food Festival
bringing together at one place, a wide variety
of cuisines from across the world on account of Christmas.
The Hotel Management has rented
out a hall of an indoor Auditorium for this extravaganza.
The Event hall was of area N*M and the coordinators planned
to decorate the hall’s flooring with
carpet tiles embellishing the opulence of the event.
 They have infinite number of tiles of size 2i
X 2i, where i = 0, 1, 2,… so on.
Their task is to find minimum number of tiles required to fill the
given area with tiles.
Help them accomplish their task by writing a
recursive function that finds the minimum number
of tiles required to fill the given area with tiles.
Function Specifications:
Use the function return type and the argument type as:
int minimumTiles(int,int)
This recursive function should return the minimum count of tiles required.
Input format
First line of the input is an integer ‘N’.
Second line of the input is an integer ‘M’.
Output format
Output an integer in a single line that gives the
minimum count of tiles required.
Refer sample input and output for formatting specifications.
Sample testcases
Input 1
5
6
Output 1
9
Input 2
4
4
Output 2
1*/
#include<stdio.h>
int minimumTiles(int n,int m)
{
static int count,s,m1;
int i=1,j=1;
if(s==0){m1=m;s++;}
while(i<=n)
{
i=i*2;
}
i=i/2;
while(j<=m)
{
j=j*2;
}
j=j/2;
if(n==0)
{
return count;
}
else if(m==0)
{
minimumTiles(n-i,m1);
}
else
{
(i>j)?(count=count+(i/j)):(count=count+(j/i));
minimumTiles(n,m-j);
}
return count;
}
int main()
{
int n,m;
scanf("%d%d",&n,&m);
printf("%d",minimumTiles(n,m));
return 0;
}
