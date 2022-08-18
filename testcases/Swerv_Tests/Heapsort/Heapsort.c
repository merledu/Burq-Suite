#include <stdio.h>
void main()
{
int i,j,root,t,x;
int num = 13;
int h[14]={45,67,12,89,44,23,88,11,90,72,78,34,66};
// build max heap
for(i=0;i<num;i++)
{
x=i;
do
{
root = (x - 1) / 2;
if (h[root] < h[x])
{
t = h[root];
h[root] = h[x];
h[x] = t;
}
x = root;
} while (x != 0);
}


for (j = num - 1; j >= 0; j--)
{
t = h[0];
h[0] = h[j];
h[j] = t;
root = 0;
do
{
x = 2 * root + 1;
if ((h[x] < h[x + 1]) && x < j-1)
x++;
if (h[root]<h[x] && x<j)
{
t = h[root];
h[root] = h[x];
h[x] = t;
}
root = x;
} while (x < j);
}


}
