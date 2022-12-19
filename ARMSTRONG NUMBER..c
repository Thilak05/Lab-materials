#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,originalNum,remainder,result=0;
    printf("ENTER A 3 DIGIT NUMBER:");
    scanf("%d",&num);
    originalNum=num;
    while(originalNum!=0)
    {
        remainder=originalNum%10;
        result+=remainder*remainder*remainder;
        originalNum/=10;
    }
    if(result==num)
    {
        printf("%d is an ARMSTRONG number",num);
    }
    else
    {
        printf("%d is not an ARMSTRONG number",num);
    }
    return 0;
}
