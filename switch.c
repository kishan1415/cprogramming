#include <stdio.h>
void main()
{
    char choice;
    float n1, n2;
    printf("your choice(+,-,*,/)");
    scanf("%c", &choice);
    printf("Enter two number:");

    scanf("%f%f", &n1, &n2);

    switch (choice)
    {
    case '+':
        printf("Result=%f", n1 + n2);
        break;

    case '-':
        printf("Result=%f", n1 - n2);
        break;

    case '*':
        printf("Result=%f", n1 * n2);
        break;

    case '/':
        printf("Result=%f", n1 / n2);
        break;

    default:
        printf("Please enter correct no");
    }
}
