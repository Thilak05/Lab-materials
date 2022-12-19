#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("ENTER A NUMBER:");
    scanf("%d",&a);

    if(a%5==0 && a%8==0)
    {
        printf("DIVISIBLE BY BOTH 5 AND 8");
    }
    else if (a%5==0)
    {
        printf("DIVISIBLE BY 5");
    }
    else if (a%8==0)
    {
        printf("DIVISIBLE BY 8");
    }
    return 0;
}
