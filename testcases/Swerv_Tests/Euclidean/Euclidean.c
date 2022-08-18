#include <stdio.h>
int EuclideanExtended(int a, int b, int* x, int* y) {
   if (a == 0) {
      *x = 0;
      *y = 1;
      return b;
   }
   int xtemp, ytemp; // To store results of recursive call
   int res = EuclideanExtended(b % a, a, &xtemp, &ytemp);
   *x = ytemp - (b / a) * xtemp;
   *y = xtemp;
   return res;
}
void main() {
   int x, y;
   int a = 60, b = 25;
   int res = EuclideanExtended(a, b, &x, &y);
   //printf("gcd(%d, %d) = %d", a, b, res);
}