#include <stdio.h>

#include <string.h>

void main()
{
    char abc[] = "Good afternoon buddy\t";

    char def[] = "hello\t";

    char efg[] = "Nice to meet you\t";
    char xyz[] = "Good bye";

    strcat(abc, def);

    strcat(abc, efg);
    strcat(abc, xyz);

    printf("%s", abc);
}