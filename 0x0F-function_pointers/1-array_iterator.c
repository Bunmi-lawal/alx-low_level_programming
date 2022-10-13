#include "function_pointers.h"
/**
 * array_iterator -function that executes on each element of an array.
 * @array: pointer to size
 * @size: size of the array
 * @action:pointer to array iterator
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int m = 0;
if (array != NULL && action != NULL && size > 0)
{
while (m < size)
{
action(array[m]);
m++;
}
}
}
