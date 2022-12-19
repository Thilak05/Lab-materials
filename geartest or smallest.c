#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("\n ENTER THE NUMBERS A:");
    scanf("%d",&a);
    printf("\n ENTER THE NUMBERS B:");
    scanf("%d",&b);
    printf("\n ENTER THE NUMBERS C:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("A IS THE GREATEST");
    }
    else if(b>c && b>a)
    {
        printf("B IS THE GREATEST");
    }
    else
    {
        printf("C IS THE GREATEST");
    }

    return 0;
}
