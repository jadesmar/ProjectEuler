#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(int n);
int next_lower_palindrome(int n);
int count_digits(int n);

int main(void){
   int i, j;
   int max=0;
   for (i = 800; i < 1000; i++){
      for(j = i; j < 1000; j++){
         if(is_palindrome(i * j) && i * j > max){
            max = i * j;
         }
      }
   }
   printf("PE-004: Answer = %d\n", max);
   return 0;
}


int count_digits(int n){
   return (int)log10(n) + 1;
}

int is_palindrome(int n){
   int i;
   int len;
   char* array;
   int retval = 1;
   len = count_digits(n);
   array = (char*)malloc(len*sizeof(char));

   for(i = 0; i < len; i++){
      array[i] = n%10;
      n = n/10;
   }

   for(i = 0; i < len/2; i++){
     if(array[i] != array [len - i - 1]){
         retval = 0;
      }
   }
   free(array);
   return retval;
}

int next_lower_palindrome(int n){
   int ret_val = 0;
   if (n >= 1){
      for(n = n - 1; n > 0; n--){
         if(is_palindrome(n)) return n; 
      }
   }
   return 0;
}


