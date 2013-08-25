#include <stdio.h>
#define MAX_NUM 1000

int main(void){
   int i;
   int sum = 0;
   for (i = 0; i < MAX_NUM; i++){
      if(i % 3 == 0) sum += i;
      else if(i % 5 == 0) sum +=i;
   }
   printf("PE-001: Answer = %d\n", sum);
   return 0;
}
