#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a : integer
 * @n : number of elements of the array
 * return : void
 */
void reverse_array(int *a, int n)
{
int *l, i, bun, k;
l = a;
for (i = 1; i < n; i++)
{
l++;
}
for (k = 0, k < i / 2; k++;)
{
bun = a[k];
a[k] = *l;
*l = bun;
l--;
}
}
