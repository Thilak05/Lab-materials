#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char b;
    float c;

    printf("ENTER A NUMBER:");
    scanf("%d",&a);

    printf("ENTER A FLOAT VALUE:");
    scanf("%f",&c);

    printf("ENTER A CHARACTER:");
    scanf("%s",&b);

    printf("\n NUMBER:%d",a);
    printf("\n CHARACTER:%c",b);
    printf("\n FLOAT POINT:%f",c);

    return 0;
}

