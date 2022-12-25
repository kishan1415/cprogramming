#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;

    printf("number=");
    scanf("%d", &a);
    int b = a % 2;
    printf("%snumber", b == 0 ? "even" : "odd");
    return 0;
}
