#include <stdio.h>

void main() {
   int a, b, c, i, n;

   n = 12;

   a = b = 1;
   
   //printf("%d %d ",a,b);

   for(i = 1; i <= n-2; i++) {
      c = a + b;
      //printf("%d ", c);
      
      a = b;
      b = c;
   }
   
}