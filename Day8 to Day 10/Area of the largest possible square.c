#include<stdio.h>
int main()
{
int a,s,n;
scanf("%d",&s);//5
scanf("%d",&n);//8

for(a=0;;a++)
{
if((a*a)>n)//9>8 --true
{
printf(" %d",a);//3
a--;//2
break;
}
}
printf(" %d",a);//2
a=a*a*s*s;//4*25-->100
printf("Area of the largest possible square is %dsqcm",a);
return 0;
}
