#include <stdio.h>
/**
* void swap_int - function that swaps the values of two integers
* @a : integer to swap
* @b : integer to swap
* return : void
*/
void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
