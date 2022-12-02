#include <stdio.h>

void main() {
char choice;
float n1,n2;
   
    printf("Enter your choice (a, b, c, d)");
    scanf("%c", &choice);
    printf("Enter two numbers: ");
    scanf("%f %f",&n1, &n2);

    switch(choice)
    {
        case 'a':
            printf("Result is =%f", n1+n2);
            break;

        case 'b':
            printf("Result is %f", n1-n2);
            break;

        case 'c':
            printf("Result is %f", n1*n2);
            break;

        case 'd':
            printf("Result is %f", n1/n2);
            break;

        default:
            printf("Error! operator is not correct");
    }

 
}
