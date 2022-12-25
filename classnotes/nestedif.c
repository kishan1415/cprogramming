#include <stdio.h>
void main()
{
    int year;
    printf("enter year=");
    scanf("%i", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            printf("this year is a leap year");
        }
       /*
        else
        {
            printf("this is a normal year");
        }
       */

    }
    else
    {
        if (year % 4 == 0)
        {
            printf("this is a leap year ");
        }
        else
        {
            printf("not a leap year");
        }
    }
}