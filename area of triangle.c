#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
 int a,b,c;
 float s,area;

 printf("\n ENTER THE VALUES OF a:");
 scanf("%d",&a);

 printf("\n ENTER THE VALUES OF b:");
 scanf("%d",&b);

 printf("\n ENTER THE VALUES OF c:");
 scanf("%d",&c);

 s=(a+b+c)/2.0;
 area=sqrt(s*(s-a)*(s-b)*(s-c));
 printf(" \n AREA OF TRIANGLE: %f", area);

 getchar();
}
