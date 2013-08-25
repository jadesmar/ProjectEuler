#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(void){
   int count, i;
   count = 0;
   for (i = 2; i < 105000; i++){
      if(is_prime(i)){
         count ++;
      }
      if(count == 10001) break;
   }
   printf("PE-007: Answer = %d\n", i);
   return 0;   
}

int is_prime(int n){
   int ret_val = 1;
   int i;
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
