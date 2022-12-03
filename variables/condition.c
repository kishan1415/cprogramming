#include <stdio.h>
void main()
{
    int a = 34;
    // scanf("%d", &a);

    if (a > 75)
    {
        printf("congrats you get dictation");
    }
    else if (a < 75 && a > 33)
    {
        printf("pass");
    }
    else
    {
        printf("failed better luck for the next time!");
    }
}