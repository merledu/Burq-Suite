#include <stdio.h>
void print(int a[], int s) {
int i;
for (i = 0; i < s; ++i) {
//printf( "%d ", a[i]);
}
}
void shell_Sort(int a[], int s) {
int gap, i;
for (gap = s / 2; gap > 0; gap /= 2) {
for ( i = gap; i < s; i += 1) {
int temp = a[i];
int j;
for (j = i; j >= gap && a[j - gap] > temp; j -= gap) {
a[j] = a[j - gap];
}
a[j] = temp;
}
}
}
void main() {
int array[] = { 8, 2, 5, 9, 3, 1, 0 };
int size = sizeof( array ) / sizeof( array[0] );
shell_Sort(array, size);
//printf("The sorted array is : \n");
//print(array, size);
}