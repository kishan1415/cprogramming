#include <stdio.h>
void main()
{
    int a, b;
    printf("Please enter first number:");
    scanf("%d", &a);
    printf("Please enter second number: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("a(%i) is greater than b(%i)", a, b);
    }
}