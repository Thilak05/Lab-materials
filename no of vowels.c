#include <stdio.h>
#include <stdlib.h>

int main()
{
  char stringvalue[100];
  printf("ENTER A WORD FOR TESTING:");
  scanf("%s", stringvalue);

  int index = 0;
  int counter = 0;
  while(index < strlen(stringvalue))
  {
      if(stringvalue[index] == 'A' || stringvalue[index] == 'E' || stringvalue[index] == 'I' || stringvalue[index] == 'O' || stringvalue[index] == 'U' || stringvalue[index] == 'a' || stringvalue[index] == 'e' || stringvalue[index] == 'i' || stringvalue[index] == 'o'|| stringvalue[index] == 'u')
      {
          counter++;
      }
      index++;
  }
  printf("%d",counter);
  return 0;
}
