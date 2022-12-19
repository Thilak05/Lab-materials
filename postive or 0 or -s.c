#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("ENTER A NUMBER:");
    scanf("%d",&num);
    if (num>0)
    {
        printf("Number is POSITIVE.");
    }

    if (num<0)
    {
        printf("Number is NEGATIVE.");
    }

    if (num==0)
    {
        printf("Number is ZERO.");
    }

    return 0;
}
