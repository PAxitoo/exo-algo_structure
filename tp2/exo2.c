#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int i;
 
   srand(100); 
 
      for (i = 0; i < 100; i++)
   {
      int T = rand ()%100;
      printf ("%d ", T);
   }
   printf ("\n");
   return 0;
   
}