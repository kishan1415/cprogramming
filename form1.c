#include<stdio.h>

int main(){
    int a;
    char b,c;
    printf("Enter your name and your college name:");

    scanf("%c\n%c",&b,&c);

    printf("Enter your mobile number:");

    scanf("%d",&a);

    printf("your name :%c\n",b);

    printf("your college name is:%c\n",c);

    printf("your mobile number is :%d",a);
    
    return 0;
}