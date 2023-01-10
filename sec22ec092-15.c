#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    printf("ENTER THE STRING:");
    gets(a);
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    printf("SIZE OF THE GIVEN STRING IS %d",i);
}
