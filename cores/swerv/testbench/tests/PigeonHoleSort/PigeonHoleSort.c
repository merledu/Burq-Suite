/*  C Program to Implement Pigeonhole Sort using Function  */

#include <stdio.h>

#define MAX 14

int a[MAX]={45,67,12,89,44,23,88,11,90,72,78,34,66}, i, min, max;
void pigeonhole_sort(int, int, int *);
void main()
{
    
    //printf("\nEnter the values into the matrix ::\n");
    //for (i = 0; i < MAX; i++)
    //{
      //  scanf("%d", &a[i]);
   // }
    min = a[0];
    max = a[0];
    for (i = 1; i < MAX; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    pigeonhole_sort(min, max, a);
    //printf("\nSorted order is :: ");
    /*for (i = 0; i < MAX; i++)
    {
        printf(" %d ", a[i]);
    }*/
}

/* sorts the array using pigeonhole algorithm */
void pigeonhole_sort(int mi, int ma, int * a)
{

    int size, count = 0, i;
    int *current;
    current = a;
    size = ma - mi + 1;
    int holes[size];
    for (i = 0; i < size; i++)
    {
        holes[i] = 0;
    }
    for (i = 0; i < size; i++, current++)
    {
        holes[*current-mi] += 1;
    }
    for (count = 0, current = &a[0]; count < size; count++)
    {
        while (holes[count]--> 0)
        {
            *current++ = count + mi;
        }
    }
}