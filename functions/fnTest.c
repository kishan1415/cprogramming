#include <stdio.h>
#include <string.h>
void main()
{
    char xyz[] = "Good Afternoon Guys\t";
    char abc[] = "what's up bro";
    strcat(xyz, abc);
    printf("%s", xyz);
}
