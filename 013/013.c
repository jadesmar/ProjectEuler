#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define MAX 18

int num_divisors(int n);
int is_prime(int n);

int main(void){
   int triangle_number = 0;
   int answer;
   int i;
   for (i = 1; ; i++){
      triangle_number += i;
      if(num_divisors(triangle_number) > 500){
         break;
      }
   }
   answer = triangle_number;
   printf("PE-012 Answer = %d\n", answer);
   return 0;
}

int num_divisors(int n){
   int cur_factor;
   int i;
   int divisors = 1; 
   for (i = 2; n > 1; i++){
      cur_factor = 1;
   //   if(is_prime(i)){
         while(n%i == 0){
            n = n/i;
            cur_factor += 1;
         }
         divisors *= cur_factor;
    //  }
   }
   return divisors;
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

