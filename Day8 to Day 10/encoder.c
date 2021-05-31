#include<stdio.h>
int main()
{
    char str[500];
    int len=0,count=0,i,j;
    scanf("%s",str);

    //for finding the length
    for(int i=0;str[i];i++)
        len++;
printf("%d\n",len);


        for(i=0;i<len;i++)
 {
 count=1;
 if(str[i])
 {
 for(j=i+1;j<len;j++)
 {
//comparing the first and second
//and increment the count
//untill null\0 comes
 if(str[i]==str[j])
 {
 count++;
 str[j]='\0';
 }
 }
 printf("%c%d",str[i],count);
 }
}

 return 0;
}

