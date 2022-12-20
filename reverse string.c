#include <stdio.h>
int main()
{
    printf("Enter a sentence:");
    char c[1000];
    scanf("%s",&c);
    strrev(c);
    printf("%s",c);
    return 0;
}
