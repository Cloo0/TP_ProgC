#include <stdio.h>

int main() {
   int k = 0;
   for(int i = 0; i < 10; i++) {
      for(int j = 0; j < i; j++) {
          printf("*");
       }
       printf("\n");
    }
   while ( k < 10) {
      int l = 0;
      while ( l <= k) {
         printf("*");
         l++;
      }
      printf("\n");
      k++;
   }
   return 0;
}