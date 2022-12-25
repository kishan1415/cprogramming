#include <stdio.h>
void main()
{
    int num;
    printf("enter  a number= ");
    scanf("%i", &num);
if (num  == 7)
{
    printf("Today is Sunday");
}


   else if (num == 1)
    {
        printf("today is Monday");
    }
    else if (num == 2)
    {
        printf("today is tuesday");
    }
    else if (num == 3)
    {
        printf("Today is wednesday");
    }
    else if (num == 4)
    {
        printf("Today is thursday");
    }
    else if (num == 5)
    {
        printf("Today is friday");
    }
    else if (num == 6)
    {
        printf("Today is saturday");
    }
    else
    {
        printf("please enter the correct number!!");
    }
}