#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    printf("ENTER THE STRING:");
    gets(a);
    printf("THE LENGTH OF GIVEN STRING IS %d",strlen(a));
    return 0;
}
