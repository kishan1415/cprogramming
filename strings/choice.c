#include <stdio.h>

int main()
{
    char choice;
    int n1, n2;
    printf("Enter your choice (+, -, *, /): ");
    scanf("%c", &choice);
    printf("Enter two numbers: ");
    
    scanf("%d %d", &n1, &n2);

    switch (choice)
    {
    case '+':
        printf("Result is =%d", n1 + n2);
        break;

    case '-':
        printf("Result is %d", n1 - n2);
        break;

    case '*':
        printf("Result is %d", n1 * n2);
        break;

    case '/':
        printf("Result is %d", n1 / n2);
        break;

    // operator doesn't match any case constant +, -, *, /
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}
