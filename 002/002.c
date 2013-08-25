#include <stdio.h>
#define MAX_NUM 4000000

int main(void){
   int i, j;
   int sum = 0;
   j = 2;
   for (i = 1; j < MAX_NUM; j += i){
      if(i % 2 == 0) sum += i;
      if(j % 2 == 0) sum += j;
      i += j;
   }
   printf("PE-002: Answer = %d\n", sum);
   return 0;
}
