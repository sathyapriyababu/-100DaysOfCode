/*Consider a square grid with N rows and N columns.
 Each cell contains one integer.
Let ri denote the minimum value in the i-th row,
 and let Ci denote the maximum value
in the i-th column. A grid is called nice if
and only if the following condition holds
true:
max(r1, r2, ..., rN) = min(C1, C2, ..., CN)
Write user defined functions “max” and “min”
to find the maximum and minimum
elements of the given array respectively.
Example:
10 20 30
20 10 30
10 5 35
In the given example, r 1 = 10, r 2 = 10 and r 3 = 5.
For columns, we have C 1 = 20, C
2 = 20 and C 3 = 35. max(r 1 , r 2 , r 3 ) = 10 and
min(C 1 , C 2 , C 3 ) = 20, and so
the given grid is not nice.
Input format
The first line of the input consists of the value of n.
Next input is the square matrix.
Output format
The output prints whether the matrix is nice or not.
Refer sample output.*/
///Sample test cases
///Input 1
///3
///10 20 30
///20 10 30
///10 5 35
///Output 1
///The 3 square grid is not nice
///Input 2
///3
///3 6 9
///12 15 18
///21 24 27
///Output 2
///The 3 square grid is nice
#include<stdio.h>
int maxRow(int r[],int n)
{int max_row,i;
max_row=r[0];
    for(i=1;i<n;i++){
       {
        if(max_row<r[i])
         max_row=r[i];
       }
}
return max_row;
}
int minCol(int c[],int n)
{
    int min_col,i;
    min_col=c[0];
    for(i=1;i<n;i++){
       {
        if(min_col>c[i])
         min_col=c[i];
       }
}
return min_col;
}
int main()
{int n,max_col,min_row,i,j,max_row,min_col;
    scanf("%d",&n);
   int  a[n][n],r[n],c[n];
      for(i=0;i<n;i++){
 for(j=0;j<n;j++)
 {
 scanf("%d",&a[i][j]);
 }
 }
for(i=0;i<n;i++){
    min_row=a[i][0];
for(j=1;j<n;j++){
       {
        if(min_row>a[i][j])
         min_row=a[i][j];
       }
     r[i]=min_row;

}}
for(i=0;i<n;i++){
    max_col=a[0][i];
for(j=1;j<n;j++){
       {
        if(max_col<a[j][i])
         max_col=a[j][i];
       }
     c[i]=max_col;

}}
/* for(i=0;i<n;i++)
 {
 printf("%d ",r[i]);
 }
 printf("\n");
 for(i=0;i<n;i++)
 {
 printf("%d ",c[i]);
 }
 printf("\n");//*/
 max_row=maxRow(r,n);
 min_col=minCol(c,n);
 if(max_row==min_col)
 {
 printf("The %d square grid is nice",n);
 }
 else
 {
 printf("The %d square grid is not nice",n);
 }

 return 0;
}
