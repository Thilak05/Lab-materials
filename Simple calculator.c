#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op;
    float num1,num2,result = 0.0f;
    printf("WELCOME TO THE SIMPLE CALCULATOR\n");
    printf("\n");
    printf("ENTER[NUMBER1] [+-*/] [NUMBER2]");
    printf("\n");
    printf("ENTER THE NUMBER1:");
    scanf("%f",&num1);
    printf("ENTER THE NUMBER2:");
    scanf("%f",&num2);
    printf("ENTER THE OPERATION:");
    scanf("%s",&op);

    switch(op)
    {
    case'+':
        result=num1+num2;
        break;

    case'-':
        result=num1-num2;
        break;

    case'*':
        result=num1*num2;
        break;

    case'/':
        result=num1/num2;
        break;

    default:
        printf("INVALID OPERATOR.");

    }
    printf("%2.f %c %2.f = %2.f", num1,op,num2,result);
    return 0;
}
