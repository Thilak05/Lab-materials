#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("ENTER THE YEAR TO BE CHECKED:");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("THE GIVEN YEAR IS LEAP YEAR");
    }
    else
    {
        printf("THE GIVEN YEAR IS NOT A LEAP YEAR");
    }
    return 0;
}
