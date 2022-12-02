#include <stdio.h>

void main()
{

    char choice;
    float a1, a2;
    printf("Please enter your choice (+,-,*,/)");

    scanf("%c", &choice);

    printf("enter two no=");

    scanf("%f"
          "%f",
          &a1, &a2);
    switch (choice)
    {
    case '+':
        printf("Result=%f", a1 + a2);
        break;
    case '-':
        printf("Result=%f", a1 - a2);
        break;
    case '*':
        printf("Result=%f", a1 * a2);
        break;
    case '/':
        printf("Result=%f", a1 / a2);
        break;
    // operator doestn't match any case constant +,-,*,/
    default:
        printf("please enter correct choice!");}

    }