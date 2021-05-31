#include<stdio.h>
#include<string.h>
int main()
{
    int occ[256]={0};
    char s1[1000]="abhjkoelwpjjjjjj.........";
    for(int i=0;s1[i]!='\0';i++)
    {
        ++occ[s1[i]];
    }
   //  for(int i=0;i<256;i++)//ascending order
   for(int =255;i>0;i--)//descending order
    {
        if(occ[i]!=0)
            printf("\n%c occured %d times",i,occ[i]);
    }

}
