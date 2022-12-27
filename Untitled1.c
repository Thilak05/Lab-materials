#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("ENTER THE ARRAY ELEMENT %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            a[0] = a[i];
        }
    }
    printf(" \n%d is the greatest number in the array.",a[0]);
    printf("\n");
    return 0;
}
