/*
Output :
Enter number of rows: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
#include<stdio.h>
int main()
{
    int n,i,j,num=1;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
      for(j=0;j<=i;j++)
    {
      printf("%d ",num);
      num++;
    }

    printf("\n");
     }
    getch();
    return 0;
}
