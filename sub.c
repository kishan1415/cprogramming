#include <stdio.h>
void main()
{
    int a, b, c;
    printf("enter the value of a=");
    scanf("%d", &a);
    printf("enter the value of b=");
    scanf("%d", &b);
    printf("Enter the vaue of c=");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("Greatest no=\na(%d)", a);
    }
    else if (b > a && b > c)
    {
        printf("Greatest no=b(%d)", b);
    }
    else
    {
        printf("Greatest no =c(%d)", c);
    }
}
