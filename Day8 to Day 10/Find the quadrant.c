#include<stdio.h>
struct point {
int x,y;
}p;
int quadrant(struct point p) {
if(p.x>0 && p.y>0) {
return 1;
}
if(p.x<0 && p.y>0) {
return 2;
}
if(p.x<0 && p.y<0) {
return 3;
}
if(p.x>0 && p.y<0) {
return 4;
}
}
int main() {
scanf("%d%d",&p.x,&p.y);
int res = quadrant(p);
//if(res == 1) {
printf("%d and %d lies in quadrant %d",p.x,p.y,res);
//}
/*
if(res == 2) {
printf("%d and %d lies in quadrant %d",p.x,p.y,res);
}
if(res == 3) {
printf("%d and %d lies in quadrant %d",p.x,p.y,res);
}
if(res == 4) {
printf("%d and %d lies in quadrant %d",p.x,p.y,res);
}*/
return 0;}
