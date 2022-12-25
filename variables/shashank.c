#include <stdio.h>
void main()
{
    int a = 10;
    int b = 8;
    int c;
    c = a;
    a = b;
    b = c;
    printf("%d ", a);
    printf("%d", b);
}