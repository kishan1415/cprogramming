#include <stdio.h>
void main()
{
    int a = 5, b = 7;
    a = a + b;
    b = a - b;
    a = a - b;

    printf(" a%d \n b%d", a, b);
}