#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals of square matrix of int
 * @a: array of chars 
 * @size: number of  matrix 
 * Return: void 
 */
void print_diagsums(int *a, int size)
{
int k;
int sum1, sum2;
sum1 = 0;
sum2= 0;
k = 0;
{
while (k < size)
sum1 = sum1 + *(a + k * size + k);
sum2 = sum2 + *(a + k * size + size - k - 1);
k++;
}
printf("%i, %i\n", sum1, sum2);
}
