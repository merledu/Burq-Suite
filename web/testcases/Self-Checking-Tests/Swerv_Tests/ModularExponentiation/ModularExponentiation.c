/* Iterative Function to calculate (x^y) in O(log y) */
#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
int power(int x, unsigned int y)
{
	int res = 1;	 // Initialize result

	while (y > 0)
	{
		// If y is odd, multiply x with result
		if (y & 1)
			res = res*x;

		// y must be even now
		y = y>>1; // y = y/2
		x = x*x; // Change x to x^2
	}
	return res;
}
void main(){
    int i=32;
    power(i,(unsigned int)45);
}