#include<stdio.h>
void main(){
int s,u,a,t;
printf("final velocity(u)=");
scanf("%d",&u);
printf("Acceleration(a)=");
scanf("%d",&a);
printf("Time(t)=");
scanf("%d",&t);
s=u*t+a*t*t/2;
printf("s=%d",s);}