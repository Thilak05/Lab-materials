#include<stdio.h>
void main()
{
int x,y;
printf("Enter the value of X:"); scanf("%d",&x);
printf("Enter the value of Y:"); scanf("%d",&y);
int temp=x; x=y; y=temp;

printf("\nAfter swapping:x=%d,y=%d",x,y);
}



