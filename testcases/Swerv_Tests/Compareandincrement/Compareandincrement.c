#include <stdio.h>
int main(void) {
        int array1[10] = {1,2,3,4,5,6,7,8,9,10};
        int array2[10] = {1,2,3,4,5,6,7,8,9,10};
        int array3[10] ={2,4,6,8,10,12,14,16,18,20};
        int i,c,m=0;
    for (i=0;i<11;i++)
	{
		c=array1[i]+array2[i];
    if (c== array3[i])
	{
    m++;
        }
}
}