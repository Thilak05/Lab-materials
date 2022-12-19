#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int flag = 0;
    int i = 0;
    printf("\n Enter the number to be checked:");
    scanf("%d", &num);

    for(i=2; i<num/2; i++)
    {
        if(num%i==0)
        {
            flag =1;
            break;
        }

    }
    if (flag==0)
    {
        printf("THE GIVEN NUMBER IS PRIME NUMBER.");
    }
    else if (num%2==0)
    {
        printf("THE GIVEN NUMBER IS EVEN NUMBER");
    }
    else
    {
        printf("THE GIVEN NUMBER IS ODD NUMBER");
    }
    return 0;
}
