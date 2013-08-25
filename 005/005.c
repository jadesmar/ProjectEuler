#include <stdio.h>
#include <stdlib.h>

int main(void){
   int primes[8] = {2, 3, 5, 7, 11, 13, 17, 19};
   int prime_cnt[8] = {4, 2, 1, 1, 1, 1, 1, 1};
   int i, j;
   long product = 1;
   for (i = 0; i < 8; i++){
      for (j = 0; j < prime_cnt[i]; j ++){
         product *= primes[i];
      }
   }
   printf("PE-005: Answer = %ld\n", product);
   return 0;
}


