#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter the value ofa=");

    scanf("%d", &a);
    printf("enter the value of b=");
    scanf("%d", &b);
    printf("enter the value of c=");
    scanf("%d", &c);
    if (a > b)
    {
        printf("Greatest no.=a(%d)", a);
    }
    else if (b > c)
    {
        printf("Greatest no.=b(%d)", b);
    }
    else
    {
        printf("greatest no=c%d", c);
    }
}
