#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("ENTER THE VALUE OF X:");
    scanf("%d",&x);
    printf("ENTER OF VALUE OF Y:");
    scanf("%d",&y);

    if (x>y)
    {
        printf("X IS GREATER.");
    }
    else
    {
        printf("Y IS GREATER.");
    }
    return 0;
}
