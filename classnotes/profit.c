#include <stdio.h>
void main()
{
    float cp, sp, percentage;
    printf("enter the value of cp=");
    
    scanf("%f", &cp);
    printf("enter the value ofsp=");
    scanf("%f",&sp);
    if (sp > cp)
    {
        percentage = ((sp - cp) / cp) * 100;
        printf("profit percentage=%f", percentage);
    }
    if (cp > sp)
    {
        percentage = ((cp - sp) / cp) * 100;
        printf("loss percentage=%f", percentage);
    }
}