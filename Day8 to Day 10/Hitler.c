#include <stdio.h>
#include <stdlib.h>
int QUEUE[100],front=-1,rear=-1;
void insert_in_Q(int queue[],int ele, int MAX)
{
if(rear==-1)
{
front=rear=0;
queue[rear]=ele;
}
else
{
rear++;
queue[rear]=ele;
}
}
void sort_Queue(int queue[])
{
int a,j,i;
for(i=front;i<=rear;i++)
{
for(j=front+i;j<=rear;j++)
{
if (queue[i] > queue[j])
{
a = queue[i];
queue[i] = queue[j];
queue[j] = a;
}
}
}

//print the sorted array
for(i=front;i<=rear;i++)
printf("%d ",queue[i]);
printf("\n");

int b[rear],sum=queue[0];
int c=0;
for(i=1;i<=rear;i++)
{
sum=sum+queue[i];
b[i-1]=sum;
//c=c+1;
printf("%d ",sum);
}
printf("\n");

sum=0;
for(i=0;i<rear;i++)
sum=sum+b[i];
printf("%d",sum);
}
int main()
{
int ele,i,n2,j;
scanf("%d",&n2);//size
for(i=0;i<n2;i++)
{
scanf("%d",&ele);
insert_in_Q(QUEUE,ele,n2+1);
}
sort_Queue(QUEUE);
return 0;
}
