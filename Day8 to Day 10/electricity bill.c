/*Sanjay was shocked after seeing his electricity bill of May month.
He approached TNEB office and asked for more details.
TNEB officer explained about the tariff rate and asked to calculate and check.
He was not able to calculate and asked his friend to help.
His friend said it will be calculated based on the Max.Unit.
Help Sanjay and his friend to calculate the amount
Input format
Number of units consumed
Output format
Total amount
Sample testcases
Input 1
567
Output 1
Rs. 2172.20
*/
#include<stdio.h>
int main(){
    long int units;
    scanf("%ld",&units);
    double billpay=0;

    if(units<=100)
		billpay=0;

    else if(units<=200)
	    billpay=(units-100)*1.5;

	else if(units<=500)
		billpay=200+(units-200)*3;

	else
        billpay=350+1380+(units-500)*6.6;

    printf("Rs. %.2lf",billpay);



return 0;}
