/**Library Time table
With the initiative of the Students Council of
Sherland State University, the College
Management has inaugurated a mini library in
 the hostel premises.There are N students living in
the hostel. Any student can use the library but
on a condition that only one student should avail
it at a time. Based on this condition, the Hostel
Warden came up with a timetable for library's
usage in order to avoid the conflicts:
The first student starts to use the library at the
 time O and should finish the reading not later
than at the time A1.
The second student starts to use the library at the
time A1 and should finish the reading not
later than at the time A2.
And so on.
The N-th student starts to use the library at
the time AN-1 and should finish the reading not later
than at the time AN
The holidays in Sherland are approaching,
so today each of these N students wants to read
some new edition of "Heart of Darkness".
 The i-th student needs Bi units of time to read the
book.
The students have understood that probably not all
of them will be able to read everything they
want from the book. How many students will be
able to read the book without violating the
schedule?
Input format
The first line of input contains a single
integer N denoting the number of students. Assume that
the maximum value for N as 50.
The second line contains N space-separated
integers A1, A2, ...,AN denoting the moments of
time by when the corresponding student should finish reading.
The third line contains N space-separated integers
B1, B2, ...,BN denoting the time required for
each of the students to read.
Output format
Output a single line containing the number
of students that will be able to finish reading.
Refer sample input and output for formatting specifications.
Sample testcases
Input 1
3
1 10 15
1 10 3
Output 1
2
Input 2
3
10 20 30
15 5 20
Output 2
1
*/
#include<stdio.h>
int main()
{
int n,i,j=0,k=0;
scanf("%d",&n);
int a[n],b[n];

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);/**Getting array value*///40 50 60
}

for(i=0;i<n;i++)
{
scanf("%d",&b[i]);/**Getting array value*///10 20 30
}

for(i=0;i<n;i++)
{
if((a[i]-j)>=b[i])//40-0 >=10//50-40 >=20  //1-0>=1 //10-1>=10   //15-10>=3
{
    printf("j:%d ",j);//0//0//10
        printf("b:%d ",b[i]);//10//1//3
        k++;//1//2
}
printf("j:%d ",j);//0//40//1 //1 //10
j=a[i];//40//50//1 //10 //15
printf("j:%d ",j);
}
printf("k:%d",k);//1 //2
return 0;
}
