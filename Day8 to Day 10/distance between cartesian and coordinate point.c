/*Create a structure named Point that has coordinate points
as members. Read the data of Cartesian
coordinate points and display the distance between them
Use 'typedef' to assign a new name to structure named points.
Input format
First line of the input consists of x1 and y1
Second line of the input consists of x2 and y2
Output format
Output prints the distance between the cartesian
coordinate points (Print the result in float)
Sample testcases
Input 1
1 1
2 2
Output 1
Distance : 1.414214
Whitelist
Set 1:
typedef struct Point
*/
#include<stdio.h>
#include<math.h>
typedef struct Point{
int x1,x2,y1,y2;
}Line;
int main(){
Line l;
float dist;
scanf("%d %d %d %d",&l.x1,&l.y1,&l.x2,&l.y2);
dist = sqrt(((l.x2-l.x1) *(l.x2-l.x1)) + ((l.y2 -l.y1) * (l.y2-l.y1)));
printf("Distance : %f",dist);
return 0;
}
