#include <stdio.h>
void main()
{
    float t, f;
    printf("Enter value of fahrenheit parameter f=");

    scanf("%f", &f);

    t = (f - 32) / 9 * 5;
    printf("value of celsius parameter t= %f", t);
}