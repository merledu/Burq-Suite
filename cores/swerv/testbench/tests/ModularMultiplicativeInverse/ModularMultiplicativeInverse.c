// C++ program to find modular
// inverse of a under modulo m
#include<stdio.h>

// A naive method to find modular
// multiplicative inverse of 'a'
// under modulo 'm'
int modInverse(int a, int m)
{
	for (int x = 1; x < m; x++)
		if (((a%m) * (x%m)) % m == 1)
			return x;
}

// Driver code
void main()
{
	int a = 3, m = 11;

	// Function call
	modInverse(a, m);
}
