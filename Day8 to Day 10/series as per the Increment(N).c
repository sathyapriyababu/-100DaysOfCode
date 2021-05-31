/*Ankit is new to programming class and his instructor asked him to write a simple program to check his programming knowledge.

The program should get minimum value, maximum value, increment value(N) and divisible value(M) from the user. It should display the series as per the increment(N) and sum of numbers divisible by M.

Refer to sample input and output.
Input format
Minimum Value
Maximum Value
Increment
Divisible Value
Output format
Series of element in one line separated by space
Sum of elements divisible by M in the second line
Sample testcases
Input 1
20
50
3
5
Output 1
20 23 26 29 32 35 38 41 44 47 50
Sum : 105
Input 2
10
1000
50
50
Output 2
10 60 110 160 210 260 310 360 410 460 510 560 610 660 710 760 810 860 910 960
Sum : 0
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int start,end,count,divisible;
    long int sum=0;
    scanf("%d",&start);//20//10
    scanf("%d",&end);//50//1000
    scanf("%d",&count);//3//50
    scanf("%d",&divisible);//5//50

    for(int i=start;i<=end;i=i+count)
    {
        printf("%d ",i);//20 23 26 29 32 35 38 41 44 47 50//10 60 110 160 210 260 310 360 410 460 510 560 610 660 710 760 810 860 910 960
        if(i%divisible==0)//20=>t,35=>t,50=>t//ntg=>true all cond are false
            sum=sum+i;//105//0
    }

    printf("\nSum : %ld",sum);//105//0

    return 0;
}
