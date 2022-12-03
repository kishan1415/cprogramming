#include <stdio.h>
int main()
{
    int a = 10;
    if (a < 0)
    {
        printf("%i is a negative integer!", a);
    }
    else if (a == 0)
    {
        printf("%i is Zero !", a);
    }
    else
    {
        printf("%i is a positive integer", a);
    }

    return 0;
}