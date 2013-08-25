#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(void){
   int i, j;
   long sum_of_squares = 0;
   long square_of_sums = 0;
   int sum = (MAX) * (MAX + 1) / 2;

   square_of_sums = sum * sum;
   for(i = 0; i < MAX; i++){
      sum_of_squares += (i + 1) * (i + 1);
   }
   
   printf("PE-006: Answer = %ld\n", square_of_sums - sum_of_squares);
   return 0;
}


