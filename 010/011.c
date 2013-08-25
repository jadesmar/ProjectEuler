#include <stdio.h>
#include <math.h>
#define MAX 2000000

int main(void){
   int i;
   long sum = 0;
   for(i = 2; i < 2000000; i++){
      if(is_prime(i)) sum += i;
   }
   printf("PE-010: Answer = %ld\n", sum);
   return 0;
}

int is_prime(int n){
   int i;
   int ret_val = 1;
   if((n != 2) && (n % 2 == 0)) ret_val = 0;
   else{
      for (i = 3; i <= sqrt((double)n); i+=2){
         if(n % i == 0){
            ret_val = 0;
            break;
         }
      }
   }
   return ret_val;
}

