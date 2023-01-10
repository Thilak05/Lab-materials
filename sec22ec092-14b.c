#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    printf("ENTER THE FIRST STRING:");
    gets(a);
    printf("ENTER THE FIRST STRING:");
    gets(b);
    printf("CONCATENATED STRING IS %s",strcat(a,b));
    return 0;
}
