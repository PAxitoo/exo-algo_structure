#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main()
{
  int A,S=0,I;
  printf("ENtrez un nombre");
  scanf("%d",&A);
 
  while (A > 0)
  {
      S = S + A%10;
      A = A / 10;
  }
 
  printf("%d",S);
 
    return 0;
}