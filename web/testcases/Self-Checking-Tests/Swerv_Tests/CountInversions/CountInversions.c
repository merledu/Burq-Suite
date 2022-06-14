// C program to Count
// Inversions in an array
#include <stdio.h>
#include <stdlib.h>
int getInvCount(int arr[], int n)
{
	int inv_count = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
				inv_count++;

	return inv_count;
}

/* Driver program to test above functions */
void main()
{
	int arr[] = { 1, 20, 6, 4, 5 };
	int n = 5;
		getInvCount(arr, n);
}
