#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("\n ODD OR EVEN NUMBER \n");
    printf("\n ENTER A NUMBER:");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is an EVEN NUMBER.",num);
    }
    else
    {
        printf("%d is an ODD NUMBER.",num);
    }
    return 0;
}
