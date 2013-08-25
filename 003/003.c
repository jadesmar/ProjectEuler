#include <stdio.h>
#include <math.h>
#define MAX_NUM 600851475143L

int is_prime(int n);

int main(void){
   unsigned long max_num = MAX_NUM;
   int i;
   int max = 0; 
   for (i = 1; i < sqrt((double)max_num); i += 2){
      if((max_num % i == 0) && (is_prime(i))) max = i;
   }
   printf("PE-003: Answer = %d\n", max);
   return 0;
}


int is_prime(int n){
   int ret_val = 1;
   int i;
   if(n % 2 == 0) ret_val = 0;
   else{
      for (i = 3; i < sqrt((double)n); i+=2){
         if(n % i == 0){
            ret_val = 0;
            break;
         }
      }
   }
   return ret_val;
}

