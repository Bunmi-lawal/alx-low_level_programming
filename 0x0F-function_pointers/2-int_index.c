#include "function_pointers.h"
/**
 * int_index - it is a function that searches for an integer
 * @array: pointer to size
 * @size: number of the element of the array
 * @cmp: pointer
 * return: -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == NULL)
return (-1);
if (cmp == NULL)
return (-1);
if (size > 0)
{
while (i < size)
{
if (cmp(array[i]))
return (i);
i++;
}
}
return (-1);
}
