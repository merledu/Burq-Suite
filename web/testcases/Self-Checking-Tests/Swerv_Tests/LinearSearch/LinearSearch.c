#include <stdio.h>

void main()
{
  int array[14]={45,67,12,89,44,23,88,11,90,72,78,34,66}, search=11, c, n=13;


  for (c = 0; c < n; c++)
  {
    if (array[c] == search)    /* If required element is found */
    {
      break;
    }
  }

}