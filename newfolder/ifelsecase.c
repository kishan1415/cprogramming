#include <stdio.h>
void main()
{
    int a;
    printf("enter a=");
    scanf("%i", &a);
    if (a < 15)
    {
        printf("good morning");
    }
    else if (a == 15)
    {
        printf("nice to meet you!");
    }
    else
    {
        printf("good day");
    }
}
