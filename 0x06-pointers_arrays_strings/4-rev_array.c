#include <stdio.h>
/**
 * reverse_array - reverses the content of an array of integers
 * @a : pointer to the array
 * @n : number of elements of the array
 * return : void
 */
void reverse_array(int *a, int n)
{
int temp, counter;
n = n - 1;
counter = 0;
while (counter <= n)
{
temp = a[counter];
a[counter++] = a[n];
a[n--] = temp;
}
}
