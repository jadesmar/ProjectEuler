#include <stdio.h>
#include <math.h>

int main(void){
   long a, b, c;
   long product;

   for (a = 1; a < 1000 ; a ++){
      for (b = 1; b < a; b ++){
         c = 1000 - (a + b);
         if((c > 0) && (a * a + b * b == c * c)){
            product = a*b*c;
         }
      }
   }
   printf("PE-009: Answer = %ld\n", product);
   return 0;
}

