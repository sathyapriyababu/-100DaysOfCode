/*

KG theatre in the city is newly renovated.
So, they decided to give a 20% discount if one person
buys more than 15 tickets. Also, they give an
extra 5% discount, if he/she is a student. There
won't be any discount if anyone purchases
less than 15 tickets. The ticket rate may vary based
on the movie.
Karthik has planned to book the tickets
for his juniors and friends. Help Karthick to calculate the
amount and display whether the discount is applied or not.
Input format
Ticket rate in first line
Number of tickets in second line
Category in third line
Output format
Discount details in first line
Total amount in second line
(Refer sample outputs for exact text and format)
Code constraints
Category =1 (for Students)
Category !=1 (for others)
Sample testcases
Input 1
100
20
1
Output 1
Discounts Applied - Maximum Tickets and Student
Total Amount - 1500.00
Input 2
100
20
2
Output 2
Discount Applied - Maximum Tickets
Total Amount - 1600.00
Input 3
100
10
1
Output 3
No Discount Applied
Total Amount - 1000.00
Input 4
100
10
2
Output 4
No Discount Applied
Total Amount - 1000.00
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
float ticket_cost,total_amount;
int no_of_tickets,category;
scanf("%f",&ticket_cost);
scanf("%d",&no_of_tickets);
scanf("%d",&category);
if((no_of_tickets>15) && (category==1))
{
total_amount=(ticket_cost*no_of_tickets)*0.75;
printf("Discounts Applied - Maximum Tickets and Student");
}
else if((no_of_tickets>15) && (category!=1))
{
total_amount=(ticket_cost*no_of_tickets)*0.80;
printf("Discount Applied - Maximum Tickets");
}
else
{
total_amount= ticket_cost*no_of_tickets;
printf("No Discount Applied");
}
printf("\nTotal Amount - %0.2f",total_amount);
return 0;
}
