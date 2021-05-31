/*Write a program to get a student detail and calculate
his/her marks percentage using structure with pointer concept.
Structure creation and output statement is already handled in program.
Implement the main function using structure with pointer concept.
Input format
First line : Student's Name
Second Line : Student's Roll number
Third to Seventh Line : Student's five subject marks
Output format
Display the Name, RollNo and Percentage as shown in sample output.
Sample testcases
Input 1
Ashwin
100EC001
45
56
78
87
90
Output 1
Name:Ashwin
RollNo: 100EC001
Percentage: 71.20
*/
#include<stdio.h>
struct student{
    char name[20];
    char roll[10];
    float sub1,sub2,sub3,sub4,sub5,perc;
};
int main()
{
    struct student  std;
    struct student  *ptr;
    ptr= &std;
    scanf("%s",&ptr->name);
    scanf("%s",&ptr->roll);
    scanf("%f %f %f %f %f",&ptr->sub1,&ptr->sub2,&ptr->sub3,&ptr->sub4,&ptr->sub5);
    ptr->perc=(ptr->sub1+ptr->sub2+ptr->sub3+ptr->sub4+ptr->sub5)/5;
    printf("\nName:%s",ptr->name);
    printf("\nRollNo:%s",ptr->roll);
    printf("\nPercentage:%.2f",ptr->perc);
}
