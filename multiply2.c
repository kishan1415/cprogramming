#include<stdio.h>
void main(){
   int a,b;
   printf("enter the no a=");
   scanf("%i",&a);
   printf("enter the second no=");
   scanf("%i",&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("the number after swap a=%d\n b=%d",a,b);

}