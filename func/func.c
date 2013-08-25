#include <math.h>
#include <stdio.h>
#include <stdlib.h>


int count_digits(int n){
   if(n == 0){
      return 0;
   }
   if(n < 0){
      n = n * (-1);
   }
   return (int)log10(n) + 1;
}
int is_palindrome(int n){
   int i;
   int len;
   char* array;
   int ret_val = 1;
   len = count_digits(n);
   array = (char*)malloc(len*sizeof(char));

   for(i = 0; i < len; i++){
      array[i] = n%10;
      n = n/10;
   }

   for(i = 0; i < len/2; i++){
     if(array[i] != array [len - i - 1]){
         ret_val = 0;
      }
   }
   free(array);
   return ret_val;
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
int next_lower_palindrome(int n){
   if (n >= 1){
      for(n = n - 1; n > 0; n--){
         if(is_palindrome(n)) return n; 
      }
   }
   return 0;
}
