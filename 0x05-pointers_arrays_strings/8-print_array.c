#include <stdio.h>
/**
* print_array - function that prints n elements of an array of integers
* @a : character to modify
* @n : character to be modified
* return : void
*/
void print_array(int *a, int n)
{
int b;
for (b = 0; j < n; b++)
{
printf("%d", a[b]);
if (b != (n-1))
{
printf(",");
}
}
printf("\n");
}
