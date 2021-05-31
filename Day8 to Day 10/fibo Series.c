/*Write a program that uses a recursive function for generating the Fibonacci numbers.
Input format
Number of terms 'N'
Output format
'N' Fibonacci Series
Sample testcases
Input 1
10
Output 1
1 1 2 3 5 8 13 21 34 55
*/
#include <stdio.h>
#include <stdlib.h>

int fib(int); /* function prototype */
int main()
{
	int i,j;
	scanf("%d",&i);
	for( j=1; j<=i; ++j)
    {
    if(i==fib(j))//stop upto ith no
        break;
    else
    printf(" %d",fib(j)); // function call to return jth Fibonacci term

}
	return 0;
}
int fib(int val)
{
	if(val == 1||val==2)
		return 1;
	else
		return(fib(val - 1) + fib(val - 2));
}

